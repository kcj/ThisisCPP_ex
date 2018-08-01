//
//  4_NewDeleteSample.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 7. 30..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>

class NewDeleteSample{
    
public:
    // 인스턴스만 동적으로 생성하는 경우
    void nds_1(){
        
        int *pData = new int;
        int *pNewData = new int(10);
        
        *pData = 5;
        std::cout << "\n" << std::endl;
        std::cout << *pData << std::endl;
        std::cout << *pNewData << "\n" << std::endl;
        
        delete pData;
        delete pNewData;
    }
    
    void nds_arr(){
        int *arr = new int[5];
        for(int i =0; i < 5; ++i)
            arr[i] = (i + 1) * 10;
        
        for(int i = 0; i < 5; i++)
            std::cout << arr[i] << "\n" << std::endl;
        
        // 배열 형태로 생성한 대상은 반드시 배열 형태를 통해 삭제한다.!!
        delete[] arr;
        
        
        
    }
};
