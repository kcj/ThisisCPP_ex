//
//  main.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 7. 28..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class AutoSample{

public:
    void as_1(){
        int a(10);
        int b(a);
        auto c(b);
        
        std::cout << a + b + c << "\n" << std::endl;
    }
};
