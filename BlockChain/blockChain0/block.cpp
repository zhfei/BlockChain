//
//  block.cpp
//  BlockChain
//
//  Created by 周飞 on 2018/9/25.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "block.hpp"
#include "md5.hpp"
#include <time.h>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>


Block::Block(int index, string prehash)
{
    PreHash = prehash;
    Index = index;
    TimeStamp = GetTime();
    Hash = GetHash();
}
string Block::GetHash()
{
    string tmp;
    tmp = PreHash + Data + TimeStamp + to_string(Index);
    unsigned char* t = (unsigned char*)tmp.data();
    MD5 md5;
    md5.GenerateMD5(t, tmp.size());
    return md5.ToString();
}
void Block::Input()
{
    string str;
    cout << "输入数据：";
    cin >> str;
    Data = str;
}
string Block::GetTime()
{
    time_t t;
    tm *local;
    char buf[256];
    t = time(nullptr);
    local = localtime(&t);
    strftime(buf, 64, "%Y-%m-%d %H:%M:%S", local);//转换 buf里存时间
    string time(buf);
    return time;
}





