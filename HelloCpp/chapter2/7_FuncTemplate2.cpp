//
//  7_FuncTemplate2.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 2..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class FuncTemplate2{
public:
    template <typename T>
    T add(T a, T b){
        return a + b;
    }
};
