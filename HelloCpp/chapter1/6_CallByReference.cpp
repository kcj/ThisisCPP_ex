//
//  6_CallByReference.cpp
//  HelloCpp
//
//  Created by CJ KIM on 2018. 7. 30..
//  Copyright © 2018년 CJ KIM. All rights reserved.
//

#include <iostream>
using namespace std;

class CallByReference{
  
public:
    void cbrf(int &rParam){
        rParam = 100;
    }
};
