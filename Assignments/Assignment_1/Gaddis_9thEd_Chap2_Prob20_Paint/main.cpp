/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 15, 2018, 12:25 PM
 * Purpose: Paint calculation 
 */

//System Libraries Here
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //ceiling function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float pntCov,   //Paint Coverage in ft^2/gal
          fncLnth,  //Fence length in ft
          fncHt,    //Fence height in ft  
          totArea,  //Total Area in ft^2
          numGals;  //# of gals of paint
    
    //Input or initialize values
    pntCov=340.0f;
    fncLnth=100.0f;
    fncHt=6.0f;
    
    //Map/Process/Calculations, Inputs to Outputs
    totArea=4*fncLnth*fncHt;    //Both sides painted twice;
    numGals=ceil(totArea/pntCov);
    
    //Display Outputs
    cout<<"Paint coverage per gallon = "<<pntCov<<" ft"<<endl;
    cout<<"Fence Length = "<<fncLnth<<" ft"<<endl;
    cout<<"Fence Height = "<<fncHt<<" ft"<<endl;
    cout<<"Total Area to Cover = "<<totArea<<" ft^2"<<endl;
    cout<<"Number of Gallons of Paint required = "<<numGals<<endl;
    
    //Exit Program!
    
    return 0;
}

