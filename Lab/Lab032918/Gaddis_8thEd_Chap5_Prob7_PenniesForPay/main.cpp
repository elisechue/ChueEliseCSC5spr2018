/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 29, 2018, 11:24 AM
 * Purpose:  Pennies for Pay
 */

//System Libraries Here
#include <iostream> //I/O Library - > cout, endl
#include <iomanip>  //Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables 
    unsigned int totPay,
                 pyPrDay;    //Pennies of pay
    char numDays=31;        //most number of days in a month
    
   //Input or initialize values
    pyPrDay=1;  //1 penny on first day
    totPay=pyPrDay;   //total amount
    
   //Calculate the answer
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day      Pay        Total"<<endl;
    for(int day=1;day<=numDays;day++){
        cout<<setw(2)<<day
            <<setw(12)<<pyPrDay/100.0f
            <<setw(14)<<totPay/100.0f<<endl;    
        pyPrDay*=2;
        totPay+=pyPrDay;
    }
    
   //display outputs
  
   //Exit Program!
    
    return 0;
}

