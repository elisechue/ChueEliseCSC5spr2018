/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 27, 2018, 11:22 AM
 * Purpose:  clock for loops
 */

//System Libraries Here
#include <iostream>
#include <fstream>  //File Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
   //Declare Variables
    //month day year
    ofstream out;
    
   //Input or initialize values
    out.open("Date.out");
    year="2018";
   //Calculate the answer
    for(int month=1;month<=12;month++){
        for(int day=1;day<=31;day++){
            if(month<10&&day>=10)
                cout<<'0'<<months<<"\\"<<days"\\"<<year
            else if(day)
                
            }
        }
    }
    
   //Close file
  
   //Exit Program!
    
    return 0;
}

