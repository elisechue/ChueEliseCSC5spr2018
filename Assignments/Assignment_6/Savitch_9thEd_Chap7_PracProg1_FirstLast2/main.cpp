/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 20, 2018, 11:20 PM
 * Purpose: FirstLast2 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void fstLst2();             //void function because we dont need a value returned

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    //call the function
    fstLst2();              //everything we need is within the actual function
    //Display Outputs

    //Exit Program!
    
    return 0;
}

void fstLst2(){
    int SIZE;
    int array[SIZE];
    cout<<"Input a size for the array"<<endl;
    cin>>SIZE;
    cout<<"Input integer(s) to be stored in the array"<<endl;
    for(int n=0;n<SIZE;n++){
        cin>>array[n];
    }
    if(array[0]==2||array[SIZE-1]==2)cout<<"true"<<endl;  //this returns true (just "return true" would cout nothing)
    else cout<<"false"<<endl;
}
