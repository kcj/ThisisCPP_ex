//
//  4_FunckPoly.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 2..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class FunckPoly{

    // 호출규칙만 다른 경우에도 문법에 맞지 않는다.
    int __cdecl add(int a, int b, double c);
//    int __stdcall add(int a, int b, double c);

public:
    int add(int a, int b, int c){
        std::cout << "ADD(int, int, int): ";
        return a+b+c;
    }
    
    int add(int a, int b){
        std::cout << "add(int, int): ";
        return a + b;
    }
    
    double add(double a, double b){
        std::cout << "add(double, double): ";
        return a + b;
    }
};
