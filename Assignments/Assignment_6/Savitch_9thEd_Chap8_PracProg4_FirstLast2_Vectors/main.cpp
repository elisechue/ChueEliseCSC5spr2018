/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 27, 2018, 9:02 PM
 * Purpose: FirstLast2 w/vectors
 */

//System Libraries Here
#include <iostream>
#include <vector>
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
    vector <int> vector;
    char repeat;
    int x=0;
    int input;
    
    do{
        cout<<"Enter an integer for the vector"<<endl;
        cin>>input;
        vector.push_back(input);x++;          //makes room for more integers as we add on x this acts like our SIZE in the array version
        cout<<"Do you want to add another integer? Y/N"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
    if(vector[0]==2||vector[x-1]==2)cout<<"true"<<endl;  //this returns/says true (just "return true" would cout nothing)
    else cout<<"false"<<endl;
}
