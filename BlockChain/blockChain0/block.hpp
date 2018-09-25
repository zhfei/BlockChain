//
//  block.hpp
//  BlockChain
//
//  Created by 周飞 on 2018/9/25.
//  Copyright © 2018年 周飞. All rights reserved.
//

#ifndef block_hpp
#define block_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct BlockHead //区块头
{
    string PreHash;//前一个区块哈希
    string MrekleTreeRoot;//梅克尔树根哈希
    string Data;//代表数据，本该是梅克尔树根哈希值
    string TimeStamp;//时间戳
    int    Index;//索引
};
class Block : public BlockHead
{
    int Size;//区块大小
    int Separator = 0xD9B4BEF9;//分隔符
public:
    string Hash;//本区块区块头的哈希值
    Block(){}
    Block(int index, string prehash);
    string GetHash();//计算本区块哈希值
    void Input();//输入数据
    string GetTime();//得到当前时间戳
};


#endif /* block_hpp */
