//
//  0_main_chapter1.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 7. 30..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>
#include "2_CinString.cpp"
#include "3_AutoSample.cpp"
#include "4_NewDeleteSample.cpp"
#include "5_ReferenceType.cpp"
#include "6_CallByReference.cpp"
#include "7_ReferenceSwap.cpp"
#include "8_RvalueSample.cpp"
#include "9_RangeBasedfor.cpp"

using namespace std;

class Main_Chapter1{

public:
    void mc(){
        // insert code here...
        std::cout << "Hello World \n" << std::endl;
        std::cout << 10 << std::endl;
        std::cout << 10U << std::endl;
        std::cout << 10.5F << std::endl;
        std::cout << 10.5 << std::endl;
        std::cout << 3+4 << std::endl;
        
        // 38p
        std::string strData = "Test string";
        std::cout << "Sample" << std::endl;
        std::cout << strData << std::endl;
        
        strData = "New string";
        std::cout << strData << std::endl;
        std::cout << "저는 " << 20 << "살" << "입니다. \n" << std::endl;
        
        // 39p 1.3.2 std , cin
        //    std::cout << "// 39p 1.3.2 std , cin" << std::endl;
        //    CinString Cin;
        //    Cin.Cs();
        //    std::cout << Cin.Cs2(12) << " \n" << std::endl;
        
        // 40p 1.4 자료형
        std::cout << "# 40p 1.4 자료형" << std::endl;
        AutoSample As;
        As.as_1();
        
        // 43p 1.5 new, delete
        std::cout << "// 43p 1.5 new, delete" << std::endl;
        NewDeleteSample nds;
        nds.nds_1();
        
        std::cout << "// 44p new, delete, arr" << std::endl;
        nds.nds_arr();
        
        // 45p 1.6 참조자 형식
        std::cout << "// 45p 1.6 참조자 형식 5_ReferenceType" << std::endl;
        ReferenceType rft;
        rft.rft_1();
        
        // 47p CallByReference (내부 메소드 참조 [무조건 참조 전에 선언되어야 한다.])
        std::cout << "// 47p 6_CallByReference (내부 메소드 참조 [무조건 참조 전에 선언되어야 한다.])" << std::endl;
        int nData = 0;
        
        CallByReference cbr;
        cbr.cbrf(nData);
        cout << nData << "\n" << endl;
        
        // 49p ReferenceSwap
        std::cout << "// 49p ReferenceSwap" << std::endl;

        ReferenceSwap rfs;
        int x = 10, y = 20;
        rfs.Swap_1(x, y);
        cout << "x:" << x << endl;
        cout << "y:" << y << "\n" << endl;
        
// 50p 1.6.2 r-value 참조 8_RvalueSample.cpp
        std::cout << "// 50p 1.6.2 r-value 참조 8_RvalueSample.cpp" << std::endl;
        RvalueSample rvs;
        
        int nInput = 0;
        cout << "Input Number: ";
        cin >> nInput;
        
        // 산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
        int &&rdata = nInput + 5;
        cout << rdata << endl;
        
        // 함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
        int &&result = rvs.rls(10);
        
        // 값을 변경할 수 있다.
        result += 10;
        cout << result << "\n" << endl;
        
// 52p 1.7 범위 기반 for문 RangeBasedfor.cpp
        std::cout << "// 52p 1.7 범위 기반 for문 RangeBasedfor.cpp" << endl;
        RangeBasedfor rbf;
        rbf.rbf();
    }
};
