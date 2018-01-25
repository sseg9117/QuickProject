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
//#include <iostream>
//using namespace std;
//
//#include <iomanip>›
//using std::setw;
//
//int main ()
//{
//
//    int n[ 10 ]; // n is an array of 10 integers
//
//    // initialize elements of array n to 0
//    for ( int i = 0; i < 10; i++ ) {
//        n[ i ] = i + 100; // set element at location i to i + 100
//    }
//    cout << "Element" << setw( 13 ) << "Value" << endl;
//
//    // output each array element's value
//    for ( int j = 0; j < 10; j++ ) {
//        cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
//    }
//
//    return 0;
//}




