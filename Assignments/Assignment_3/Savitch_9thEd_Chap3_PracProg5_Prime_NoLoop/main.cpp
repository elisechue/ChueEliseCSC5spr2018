/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 20, 2018, 12:05 PM
 * Purpose: Print all prime numbers betw [3,100]
 */

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
    //num2Tst=2,3,5,7 to see if it counts the early primes as prime
    
    //Calculate the answer
    prime=num2Tst==2?true:num2Tst%2;
    prime=num2Tst==3?true:prime=num2Tst&&num2Tst%3;
    prime=num2Tst==5?true:prime=num2Tst&&num2Tst%5;
    prime=num2Tst==7?true:prime=num2Tst&&num2Tst%7;
    
    //Display Outputs
    cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    //Exit Program!
    
    return 0;
}

