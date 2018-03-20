/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 20, 2018, 12:05 PM
 * Purpose: Print all prime numbers betw [3,100] with a set up for loop
 *///check with john on this ex

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char num2Tst;   //2-100
    bool prime;     //determine if num2Tst is prime
    
    //Initialize Variables
    num2Tst=rand()%99+2;    //[2,100]
    //num2Tst=# to test a specific number
    
    //Calculate the answer
    prime=num2Tst==2?true:num2Tst%2;
    prime=num2Tst==3?true&&prime:prime&&num2Tst%3;
    prime=num2Tst==4?true&&prime:prime&&num2Tst%4;
    prime=num2Tst==5?true&&prime:prime&&num2Tst%5;
    prime=num2Tst==6?true&&prime:prime&&num2Tst%6;
    prime=num2Tst==7?true&&prime:prime&&num2Tst%7;
    prime=num2Tst==8?true&&prime:prime&&num2Tst%8;
    prime=num2Tst==9?true&&prime:prime&&num2Tst%9;
    prime=num2Tst==10?true&&prime:prime&&num2Tst%10;
    
    //Display Outputs
    cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    //Exit Program!
    
    return 0;
}

