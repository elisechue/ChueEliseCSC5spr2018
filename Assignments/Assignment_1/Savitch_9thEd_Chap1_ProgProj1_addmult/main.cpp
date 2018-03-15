/*
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 22, 2018, 10:14 AM
 * Purpose:  To calculate the sum and product of 2 integers
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    int num1,   //integer 1 
        num2,   //integer 2
        sum,    //sum of the 2 integers
        prod;   //product of the integers
   
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs
    cout<<"Enter the first integer:"<<endl;
    cin>>num1;
    cout<<"Enter the second integer:"<<endl;
    cin>>num2;
    sum=num1+num2;
    cout<<"The sum of the two numbers is: "<<sum<<" "<<endl;
    prod=num1*num2;
    cout<<"The product of the two numbers is: "<<prod<<" "<<endl;
    //Exit Program!
    
    return 0;
}

