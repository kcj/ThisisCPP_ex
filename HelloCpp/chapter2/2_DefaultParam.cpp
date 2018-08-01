//
//  2_DefaultParam.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 1..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

// nParam 매개변수의 디폴트 값은 10이다.

class DefaultParam{
public:
    int dp(int nParam = 10){
        return nParam;
    }
};

