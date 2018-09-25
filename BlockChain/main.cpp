//
//  main.cpp
//  BlockChain
//
//  Created by 周飞 on 2018/9/25.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include <iostream>
#include <vector>
#include "block.hpp"
#include "chain.hpp"
#include "md5.hpp"

int main(int argc, const char * argv[]) {
    
    
    Chain BlockChain;
    int index;
    int flag = 5;
    string str, prehash;
    
    while (flag--)
    {
        auto it = BlockChain.BlockChainTmp.end();
        index = it[-1].Index + 1;
        prehash = it[-1].Hash;
        Block t(index, prehash);
        t.Input();
        BlockChain.AddBlock(t);
    }
    BlockChain.Output();
    
    return 0;
}
