//
//  Controller.cpp
//  QuickProject
//
//  Created by Segota, Sheradon on 1/25/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This loop has executed " << index + 1 << " times" << endl;
    }
    
}

//type arrayName [ arraySize ];
//double balance[10];
//these are technecally the same thing
//double balance[] = {1000.0,2.0,3.4,17.0,50.0};  <---- arrays it will print the same number as the one before
//to access array
//double salary = balance[9];




