//
//  main.cpp
//  CinString
//
//  Created by CJ KIM on 2018. 7. 28..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <string>
#include <cstdio>
#include <iostream>

class CinString{

private:
    int nAge;
    char szJob[32];
    std::string strName;

public:

    void Cs(void){
        std::cout << "나이를 입력하세요" << std::endl;
        std::cin >> nAge;
        
        std::cout << "직업을 입력하세요." << std::endl;
        std::cin >> szJob;
        
        std::cout << "이름을 입력하세요" << std::endl;
        std::cin >> strName;
        
        std::cout << "당신의 이름은 " << strName << "이고, "
        << "나이는 " << nAge << "살이며, "
        << "직업은 " << szJob << "입니다." << std::endl;
    }
    
    auto Cs2(int a){
        std::cout << a << " 입니다." << std::endl;
        return "return 성공입니다.";
    }
};
