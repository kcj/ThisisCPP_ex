//
//  7_ReferenceSwap.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 7. 30..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class ReferenceSwap{
  
public:
    void Swap_1(int &a, int &b){
        int nTmp = a;
        a = b;
        b = nTmp;
    }
};
