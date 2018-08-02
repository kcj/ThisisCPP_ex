//
//  5_FuncAmbiguity.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 2..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class FuncAmbiguity{
public:
    void TestFunc(int a){
        std::cout << "TestFunc(int)" << std::endl;
    }
    
    void TestFunc(int a, int b = 10){
        std::cout << "TestFunc(int, int)" << std::endl;
    }

};
