//
//  0_main_chapter2.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 8. 1..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>
#include "2_DefaultParam.cpp"

using namespace std;

class Main_chapter2{
public:
    void mc(){
        
// 57p 2.1 디폴트 매개변수 2_DefaultParam.cpp
        DefaultParam dfp;
        // 호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
        cout << dfp.dp() << endl;
        // 호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
        cout << dfp.dp(20) << "\n" << endl;
        
// dd
        
    }
};
