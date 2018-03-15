/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 4, 2018, 9:21 PM
 * Purpose: Modify Practice Program 2 to divide peas problem.
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
    float   pods,       //Number of Pods (floated for accurate division)
            peaPpod,    //Peas per Pod
            totPeas;    //Total Peas (NOT ACTUALLY)
   
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    cout<<"Hello"<<endl;
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>pods;
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>peaPpod;
    totPeas=pods/peaPpod;
            
    //Display Outputs
    cout<<"If you have "<<pods<<" pea pods"<<endl;
    cout<<"and "<<peaPpod<<" peas in each pod,"<<endl;
    cout<<"then you have "<<totPeas<<" in all the pods."<<endl;
    cout<<"Good-bye"<<endl;
    
    //Exit Program!
    
    return 0;
}

