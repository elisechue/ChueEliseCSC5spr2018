/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 26, 2018, 8:07 PM
 * Purpose: swap front back w/vectors
 */

//System Libraries Here
#include <iostream>
#include <vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void swFrBkV();            

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    //call the function
    swFrBkV();              
    //Display Outputs

    //Exit Program!
    
    return 0;
}

void swFrBkV(){
    vector <int> vect;
    char repeat;
    int x=0;
    int input;
    
    do{
        cout<<"Enter an integer for the vector"<<endl;
        cin>>input;
        vect.push_back(input);x++;          //makes room for more integers as we add on x
        cout<<"Do you want to input more integers? Y/N"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
   
    cout<<"first element: "<<vect[0]<<endl;
    cout<<"last element: "<<vect[x-1]<<endl;
    int temp=vect[0];
    vect[0]=vect[x-1];
    vect[x-1]=temp;
   
    cout<<"NEW first element: "<<vect[0]<<endl;
    cout<<"NEW last element: "<<vect[x-1]<<endl;
    
}
