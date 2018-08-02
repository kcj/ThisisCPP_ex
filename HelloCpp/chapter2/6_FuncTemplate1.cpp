//
//  6_FuncTemplate1.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 2..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class FuncTemplate1{
public:
    template <typename T>
    T TestFunc(T a){
        std::cout << "매개변수 a: " << a << std::endl;
        return a;
        }
};
