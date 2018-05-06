/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 26, 2018 3:43 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate, regPay, tahPay, doubPay, grssPay;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    /*hrsWrkd<=20?regPay=payRate*hrsWrkd:regPay=payRate*20;
    (hrsWrkd>20&&hrsWrkd<=40)?tahPay=(hrsWrkd-20)*(payRate*1.5):tahPay=0;
    
    
    hrsWrkd>40?doubPay=(hrsWrkd-40)*payRate*2:doubPay=0;
    */
    
    if(hrsWrkd<=20){
        regPay=payRate*hrsWrkd;
    }else if (hrsWrkd>20)regPay=payRate*20;
    if(hrsWrkd>20&&hrsWrkd<=40){
        tahPay=(hrsWrkd-20)*(payRate*1.5);
    }else if (hrsWrkd>40)tahPay=20*1.5*payRate;
    if(hrsWrkd>40){
        doubPay=(hrsWrkd-40)*payRate*2;
    }
    
    grssPay=regPay+tahPay+doubPay;
    
    cout<<regPay<<endl;
    cout<<tahPay<<endl;
    cout<<doubPay<<endl;
    
    //Output the check
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<grssPay<<endl;
    
    //Exit
    return 0;
}