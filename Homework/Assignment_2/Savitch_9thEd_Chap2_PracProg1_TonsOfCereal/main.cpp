/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 1, 2018, 9:37 AM
 * Purpose:  Convert ounces of cereal to metric tons
 *           and how many oz of cereal equal a ton
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float TONNE=35273.92f; //a metric ton in ounces
const float TONCONV=2.835e-5f; //one ounce is 2.835e-5 metric tons
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float cereal;   //cereal in ounces
    float ceBoxes;//how many boxes of that specific cereal = tonne
            
    //Input or initialize values
    //ceBoxes=cereal/TONCONV;   //conversion of how many boxes equal a ton
            
    //Map/Process/Calculations, Inputs to Outputs
    cout<<"Enter the weight of the cereal in ounces."<<endl;
    cin>>cereal;
    cout<<"The cereal is equal to "<<cereal/TONNE<<" metric tons."<<endl;
    ceBoxes=TONNE/cereal;
    cout<<"It would take "<<ceBoxes<<" boxes to equal a metric ton."<<endl;
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}

