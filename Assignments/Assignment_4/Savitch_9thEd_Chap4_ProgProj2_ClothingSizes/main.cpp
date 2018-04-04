/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 3, 2018, 4:00 PM
 * Purpose:  Calculate a person's clothing size based on
 *          their height, weight, and age
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float ht,   //height in inches
          wt,   //weight in pounds
          hat,  //hat size
          jacket,//jacket size (chest in inches)
          waist;//waist in inches
    int age;    //age will have to be rounded based on which formula
    char rep;   //repeat program
            
    //Input or initialize values
    do{
        cout<<"What is your height (inches), weight (lbs), and age?"<<endl;
        cin>>ht>>wt>>age;
        hat=2.9*(wt/ht);
        jacket=((ht*wt)/288);
        if(age>=30){
            jacket+=0.125f*((age-30)/10);
        }
        waist=wt/5.7;
        if(age>28){
            waist+=0.1f*((age-28)/2);
        }
    //Map/Process/Calculations, Inputs to Outputs

    //Display Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Your Hat size is    = "<<hat<<endl;
        cout<<"Your Jacket size is = "<<jacket<<" inches"<<endl;
        cout<<"Your Waist size is  = "<<waist<<" inches"<<endl;
        cout<<"Would you like to repeat the program? Y/N"<<endl;
        cin>>rep;
    }   while (rep=='y'||rep=='Y');
    //Exit Program!
    
    return 0;
}

