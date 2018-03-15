/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 15, 2018, 11:50 AM
 * Purpose:  Gas Tax at the Pump
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PERCENT=100;//Calculate percentages

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float   pmPrice,//Pump Price in $s
            basePrc,//Base Price in $s
            fedTax, //Fed Tax in $/Gal
            stateTx,//State Tax in $/Gal
            salesTx,//Sales Tax in % of Base Price
            totTax,//Total Tax paid/Gal
            prctTax;//Percent Tax
            
    //Input values/variables
    pmPrice=3.30f;  //$3.30/gal        
    fedTax=0.184f; //18.4 cents/gal .184 $/gal
    stateTx=0.417f;//41.7 cents/gal .417 $/gal
    salesTx=0.0225f;//2.25% sales tax from base pump price
    
    //Map/Process/Calculations, Inputs to Outputs
    basePrc=(pmPrice-fedTax-stateTx)/(1+salesTx);
    totTax=pmPrice-basePrc;
    prctTax=totTax/basePrc*PERCENT;
    
    //Display Outputs
    cout<<"Pump Price = $"<<pmPrice<<"/gallon"<<endl;
    cout<<"Federal Excise Tax = $"<<fedTax<<"/gallon"<<endl;
    cout<<"State Excise Tax = $"<<stateTx<<"/gallon"<<endl;
    cout<<"State Sales Tax = "<<salesTx*PERCENT<<"%"<<endl;
    cout<<"Base Price = $"<<basePrc<<"/gallon"<<endl;
    cout<<"Total Taxes = $"<<totTax<<"/gallon"<<endl;
    cout<<"Percentage Tax = "<<prctTax<<"%"<<endl;
    
    //Exit Program!
    
    return 0;
}

