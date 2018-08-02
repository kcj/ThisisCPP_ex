//
//  0_main_chapter2.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 1..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>
#include "2_DefaultParam.cpp"
#include "3_DefaultParam2.cpp"
#include "4_FunckPoly.cpp"
#include "5_FuncAmbiguity.cpp"
#include "6_FuncTemplate1.cpp"
#include "7_FuncTemplate2.cpp"

using namespace std;

class Main_chapter2{
public:
    void mc(){
        
// 57p 2.1 디폴트 매개변수 2_DefaultParam.cpp
        cout << "57p 2.1 디폴트 매개변수 2_DefaultParam.cpp" << "\n" << endl;
        DefaultParam dfp;
        // 호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
        cout << dfp.dp() << endl;
        // 호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
        cout << dfp.dp(20) << "\n" << endl;
        
// 59p 매개변수가 두 개일 때의 디폴트 값
        cout << "59p 매개변수가 두 개일 때의 디폴트 값 3_DefaultParam" << "\n" << endl;
        DefaultParam2 dfp2;
        cout << dfp2.dfp2(10) << endl;
        cout << dfp2.dfp2(10, 5) << endl;
        
// 64p 2.2 함수 다중 정의, 다중 정의 일반 (overloading, 오버로딩)
        cout << "64p 2.2 함수 다중 정의, 다중 정의 일반 (overloading, 오버로딩)" << "\n" << endl;
        FunckPoly fp;
        cout << fp.add(3, 4) << endl;
        cout << fp.add(3, 4, 5) << endl;
        cout << fp.add(3.3, 4.4) << endl;
        
// 67p 2.2.2 다중 정의와 모호성
        cout << "67p 2.2.2 다중 정의와 모호성" << "\n" << endl;
//        FuncAmbiguity fa;
//        fa.TestFunc(5); // 주석 이거 풀면 에러 예제
        
// 69p 2.2.3 함수 템플릿
        cout << "69p 2.2.3 함수 템플릿" << "\n" << endl;
        FuncTemplate1 ft1;
        
        cout << "int\t" << ft1.TestFunc(3) << endl;
        cout << "double\t" << ft1.TestFunc(3.3) << endl;
        cout << "char\t" << ft1.TestFunc('A') << endl;
        cout << "char*\t" << ft1.TestFunc("TestString") << endl;

// 70p 함수 템플릿으로 만든 Add() 함수 7_FuncTemplate2.cpp
        cout << "\n 70p 함수 템플릿으로 만든 Add() 함수 7_FuncTemplate2.cpp" << endl;
        FuncTemplate2 ft2;
        
        cout << ft2.add(3, 4) << endl;
        cout << ft2.add<int>(3, 4) << endl;
        cout << ft2.add(3.3, 4.4) << endl;
        
        
    }

    
};
