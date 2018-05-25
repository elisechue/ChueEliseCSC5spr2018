/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 21, 2018, 7:43 PM
 * Purpose: CountNum2's
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void cntNum2();            

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    //call the function
    cntNum2();              
    //Display Outputs

    //Exit Program!
    
    return 0;
}

void cntNum2(){
    int SIZE;
    int array[SIZE];
    cout<<"Input a size for the array"<<endl;
    cin>>SIZE;
    cout<<"Input integer(s) to be stored in the array"<<endl;
    int count=0;
    for(int n=0;n<SIZE;n++){        //include count in same for loop to check as we go
        cin>>array[n];
        if(array[n]==2)count++;
    }
    cout<<"There are "<<count<<" twos."<<endl;
}
