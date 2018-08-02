//
//  3_DefaultParam2.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 1..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class DefaultParam2{
public:
    int dfp2(int nParam1, int nParam2 =2){
        return nParam1 * nParam2;
    }
};
