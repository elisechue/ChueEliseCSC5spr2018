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
    ofstream out;
    
   //Input or initialize values
    out.open("Time.out");
    
   //Calculate the answer
    for(int ampm=0;ampm<=1;ampm++){
        for(int hrs=0;hrs<=12;hrs++){
            for(int min10s=0;min10s<=5;min10s++){
                for(int min=0;min<=9;min++){
                    for(int sec10s=0;sec10s<=5;sec++){
                        for(int sec=0;sec<=5;sec++){
                            if(hrs<10)out<<'0'<<hrs<<':'
                            min
                    }
                }
            }
        }
    }
    
   //Close file
  
   //Exit Program!
    
    return 0;
}

