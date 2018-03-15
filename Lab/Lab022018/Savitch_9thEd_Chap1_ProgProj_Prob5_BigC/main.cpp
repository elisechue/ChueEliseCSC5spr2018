/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 20, 2018, 11:30 AM
 * Purpose:  Creating a multi-line C character
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
    char x;
    
    //Prompt for the variable value
    cout<<"Type in a character utilized to output the Big C"<<endl;
    cin>>x;
    
    //Display Outputs
    cout<<"  "<<x<<x<<x<<endl;
    cout<<" "<<x<<"   "<<x<<endl;  
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<" "<<x<<"   "<<x<<endl;
    cout<<"  "<<x<<x<<x<<endl;

    //Exit Program!
    
    return 0;
}

