/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 4, 2018, 9:01 PM
 * Purpose:  Copy Display 1.8 from Chapter 18
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
    int pods,       //Number of Pods 
        peaPpod,    //Peas per Pod
        totPeas;    //Total Peas
   
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>pods;
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>peaPpod;
    totPeas=pods*peaPpod;
            
    //Display Outputs
    cout<<"If you have "<<pods<<" pea pods"<<endl;
    cout<<"and "<<peaPpod<<" peas in each pod,"<<endl;
    cout<<"then you have "<<totPeas<<" in all the pods."<<endl;
    //Exit Program!
    
    return 0;
}
