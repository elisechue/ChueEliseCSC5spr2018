/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 8, 2018, 11:27 AM
 * Purpose:  create a function that can function as a math tutor
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>   //random number library
#include <ctime>     //time to set random number seed
#include <iomanip>   //format library
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
    unsigned short op1, op2, studAns, correct;
    
    //Input or initialize values
    op1=rand()%900+100; //[100,999]
    op2=rand()%99+1;    //[1,999]
    cout<<"This is a simple Math Tutor program"<<endl;
    cout<<"Input the Answer to the following addition problem"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl;
    
    
    //Calculate the answer
    correct=op1+op2;
    cout<<((correct>1000)?" ":"  ");
    cin>>studAns;
    //Display Outputs
    cout<<endl<<(studAns==correct?"Correct Answer":"Wrong Answer")<<endl;
    //Exit Program!
    
    return 0;
}

