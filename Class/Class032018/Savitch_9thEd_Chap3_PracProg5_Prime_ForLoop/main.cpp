/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 20, 2018, 12:05 PM
 * Purpose: (with for loop) Print all prime numbers betw [3,100]
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
    int nLoops=100;
    bool prime;     //determine if num2Tst is prime
    
    //Initialize Variables
    
    //Calculate the answer
    for(int num2Tst=2;num2Tst<=100;num2Tst++){
        prime=true;
    for(int i=2;1<=sqrt(nLoops);i++){
        prime=num2Tst==i?true&&prime:prime&&num2Tst%i;
    }
         //Display Outputs
    cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
  }
   
    //Exit Program!
    
    return 0;
}

