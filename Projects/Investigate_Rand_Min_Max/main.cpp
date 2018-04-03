/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 3, 2018, 10:10 AM
 * Purpose: rand investigation
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>  //rand/srand
#include <ctime>    //time
#include <iomanip>  //format library
#include <cmath>    //math function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables, no doubles
    int loop, minRand, maxRand;
    
    //Input or initialize values
    loop=2100000000;
    maxRand=minRand=rand();
    for (int i=1;i<=loop;i++){
        int random=rand();
        if(maxRand<random)maxRand=random;
        if(minRand>random)minRand=random;
    }
    //Display min and max Random number
    cout<<fixed<<setprecision(0);
    cout<<"Number of random function calls = "<<loop<<endl;
    cout<<"The Minimum random number detected = "<<minRand<<endl;
    cout<<"The Maximum random number detected = "<<maxRand<<endl;
    cout<<"                            2^31-1 = "
            <<setw(10)<<(pow(2,31)-1)<<endl;
    

    //Exit Program!
    
    return 0;
}

