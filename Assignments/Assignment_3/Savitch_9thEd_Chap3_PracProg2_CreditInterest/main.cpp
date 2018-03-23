/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 21, 2018, 7:30 PM
 * Purpose:  Calculate minimum payment and interest on a revolving credit bill
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
    float credBal,  //credit balance
          minPay,   //minimum payment owed
          totDue;  //total credit due including interest
    
    //Input or initialize values
    cout<<"Please input your current credit balance: "<<endl;
    cin>>credBal;
    
    //Map/Process/Calculations, Inputs to Outputs
    totDue=(credBal<=1000)?credBal*1.015:
          ((credBal-1000)*1.01)+(1000*1.015);
    cout<<totDue<<endl;
    cout<<"Interest owed:               $  "<<totDue-credBal<<endl;
    cout<<"You owe:                     $"<<totDue<<endl;
    
    minPay=(credBal<=10)?credBal:10;
    minPay=(credBal*0.1<10)?minPay:credBal*0.1;
    cout<<"Minimum Payment owed:        $"<<minPay<<endl;
    
    //Display Outputs
    
    //Exit Program!
           
            
    return 0;
}

