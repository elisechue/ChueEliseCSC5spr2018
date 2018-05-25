/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 21, 2018, 8:07 PM
 * Purpose: Swap Front and Back
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void swpFrBk();            

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    //call the function
    swpFrBk();              
    //Display Outputs

    //Exit Program!
    
    return 0;
}

void swpFrBk(){
    int SIZE; 
    cout<<"Input a size for the array"<<endl;
    cin>>SIZE;
    int array[SIZE]; //????? after the input??? sounds fake but okay
    cout<<"Input integer(s) to be stored in the array"<<endl;
    for(int n=0;n<SIZE;n++){       
        cin>>array[n];
    }
    int temp=array[0];
    array[0]=array[SIZE-1];
    array[SIZE-1]=temp;
    cout<<"Swapped integers are: ";
    cout<<array[0]<<" "<<array[SIZE-1]<<endl;  //we're only swapping the first and last integer
}
