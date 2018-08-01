//
//  HelloOOP.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 7. 28..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <stdio.h>

class USERDATA{
public:
    //멤버 변수 선언
    int nAge;
    char szName[32];
    
    //멤버 함수 선언 및 정의
    void Print(void){
        // nAge와 szName은 Print() 함수의 지역 변수가 아니다!
        printf("%d, %s\n", nAge, szName);
    }
};

// 사용자의 코드
//int main(int argc, char * argv[]){
//    USERDATA user = {10, "철수"};
//    user.Print();
//    
//    return 0;
//}
