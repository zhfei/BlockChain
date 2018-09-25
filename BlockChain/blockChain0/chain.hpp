//
//  chain.hpp
//  BlockChain
//
//  Created by 周飞 on 2018/9/25.
//  Copyright © 2018年 周飞. All rights reserved.
//

#ifndef chain_hpp
#define chain_hpp

#include <stdio.h>
#include <iostream>
#include "block.hpp"
#include <string>
#include <vector>
using namespace std;

class Chain
{
public:
    vector<Block> BlockChainTmp;
    Chain();//添加创世区块
    ~Chain();
    void AddBlock(Block t);//添加新区块
    void Output();//遍历输链
};
#endif /* chain_hpp */
