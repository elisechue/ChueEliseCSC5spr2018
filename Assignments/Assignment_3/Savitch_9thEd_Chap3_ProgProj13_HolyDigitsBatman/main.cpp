/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 22, 2018, 1:15 PM
 * Purpose: Determine an address number within given parameters
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
   //random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int a,   //digit 1
        b,   //digit 2
        c,   //digit 3
        d;   //digit 4
    
    //Initialize Variables
    do{
        do{
            do{
                do{     
                a=rand()%10;
                b=rand()%10;
                c=rand()%10;
                d=rand()%10;
    
                }while(a==b||a==c||a==d||b==c||b==d||c==d);
            }while(a!=3*c);
        }while(d%2==0);
    }while (a+b+c+d!=27);

    //Exit Program!
       cout<<"The Riddler will strike at "<<a<<b<<c<<d<<" Pennsylvania Ave!"
               <<endl;
       cout<<"Foil his dastardly plans Batman!"<<endl;
            
    return 0;
}

