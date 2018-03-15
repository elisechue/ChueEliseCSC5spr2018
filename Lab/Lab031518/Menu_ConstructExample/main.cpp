/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 15, 2018, 10:45 AM
 * Purpose: menu with construct examples
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Display Menu options
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Independent-If example"<<endl;
    cout<<"Type 2 for Dependent-If example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;
    cout<<"Type 4 for Switch-Case example"<<endl;
    cin>>choice;

    //process output
    if(choice>='1'&&choice<='4'){
        switch(choice){
            case '1':{
                cout<<"Independent-If Example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                payChk=hrsWrkd*payRate;
                //if you worked overtime >40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate     = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check    = $"<<payChk<<endl;
                break;
            }
            case '2':{
                cout<<"Dependent-If Example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                if(hrsWrkd>=0&&hrsWrkd<=40){
                    payChk=hrsWrkd*payRate;
                }else{
                    payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                }
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate     = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check    = $"<<payChk<<endl;
                break;
            }
            case '3':{
                cout<<"Ternary Op Example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                payChk=(hrsWrkd>=0&&hrsWrkd<=40)?
                        hrsWrkd*payRate:
                        hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate     = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check    = $"<<payChk<<endl;
                break;
            }
            case '4':{
                cout<<"Switch-Case Example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                switch(hrsWrkd>=0&&hrsWrkd<=40){
                    case true:{
                        payChk=hrsWrkd*payRate;
                        break;
                    }
                default:{
                       payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                    }
                }
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate     = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check    = $"<<payChk<<endl;
                break; 
            }
        }
        
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    //Display Outputs
  
    //Exit Program!
    
    return 0;
}

