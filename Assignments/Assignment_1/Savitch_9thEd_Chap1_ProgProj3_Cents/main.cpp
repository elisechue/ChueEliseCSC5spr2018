/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 22 2018, 9:38 AM
 * Purpose:  To calculate how much money you have in cents
 *          with quarters, dimes, and nickels (US currency)
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float qtr,      //a quarter = 25 cents
          dime,     //a dime = 10 cents
          nickl,    //nickel = 5 cents
          totCent,  //calculation for total cents
          x,        //number of quarters you have
          y,        //number of dimes you have
          z;        //number of nickels you have
    
    //Input or initialize values Here
    qtr=25;
    dime=10;
    nickl=5;
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<"Input the number of quarters you have."<<endl;
    cin>>x;
    cout<<"Input how many dimes you have."<<endl;
    cin>>y;
    cout<<"Input how many nickels you have"<<endl;
    cin>>z;
    totCent=(x*qtr)+(y*dime)+(z*nickl);
    cout<<"You have "<<totCent<<" cents"<<endl;

    //Exit
    return 0;
}

