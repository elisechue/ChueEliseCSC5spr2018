/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 12, 2018, 10:25 PM
 * Purpose:  Calculate the expected cost if an item in a specified
                number of years
 */

//System Libraries Here
#include <iostream>
//#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float   count=0,//year 0  
            itmCost,//item's initial cost in USD
            years,  //number of years from now the item will be purchased
            inflRt, //inflation rate as a percentage
            newRt;  //rate converted to decimal eg. 1% => 0.01
            //newCost;//expected cost of item in specified number of years
    
    //Input or initialize values
    cout<<"This program will calculate the expected cost of an item "
            <<"in a given number of years:"<<endl;
    cout<<"Enter how much the item costs today:"<<endl;
    cin>>itmCost;
    cout<<"Enter the inflation rate as a percentage:"<<endl;
    cin>>inflRt;
    cout<<"Enter how many years into the future you are calculating price for:"
            <<endl;
    cin>>years;
    
    //Map/Process/Calculations, Inputs to Outputs
    newRt=inflRt/100;
    while (count<years){
        itmCost=itmCost+newRt*itmCost;
        count++;
    }
    
    //Display Outputs
    cout<<"In "<<years<<" years,"<<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"the expected price will raise to $"<<itmCost
            <<endl;
    
    //Exit Program!
    
    return 0;
}

