/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 17, 2018, 10:21 AM
 * Purpose: menu with functions
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

    //process output
    
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;} 
            default:cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='4');
    //Exit Program!
    
    return 0;
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                              Menu
//input: -> Parameters in Argument List, Description/Range/
//output:-> 
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Independent-If example"<<endl;
    cout<<"Type 2 for Dependent-If example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;
    cout<<"Type 4 for Switch-Case example"<<endl;
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 1
//input: -> Parameters in Argument List, Description/Range/
//output:-> 
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
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
              }
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 2
//input: -> Parameters in Argument List, Description/Range/
//output:-> 
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm2(){
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
              }
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 3
//input: -> Parameters in Argument List, Description/Range/
//output:-> 
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
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
              }
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 4
//input: -> Parameters in Argument List, Description/Range/
//output:-> 
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
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
              }