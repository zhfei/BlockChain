//
//  chain.cpp
//  BlockChain
//
//  Created by 周飞 on 2018/9/25.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "chain.hpp"

Chain::Chain()
{
    Block tmp;
    tmp.PreHash = "";
    tmp.Data = "";
    tmp.Index = 0;
    tmp.TimeStamp = tmp.GetTime();
    tmp.Hash = tmp.GetHash();
    BlockChainTmp.push_back(tmp);
}
Chain::~Chain()
{
    
}
void Chain::AddBlock(Block t)
{
    BlockChainTmp.push_back(t);
}

void Chain::Output()
{
    for (auto x: BlockChainTmp) {
        cout << "----------------------------------------\n"
        << "There is the"<<x.Index<<"block: \n"
        << "his PreHash:"<<x.PreHash<<endl
        << "his TimeStamp:"<<x.TimeStamp<<endl
        << "his Hash:"<<x.Hash<<endl
        << "his Data:"<<x.Data<<endl;
    }
}
