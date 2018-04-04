/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 1, 2018, 1:27 PM
 * Purpose: Calculate mpg for 2 cars from liters used and miles driven
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float LTRTOGAL=0.2641f;   //1 liter is /that/ gallons

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float mi1,     //miles input for car 1
          gasL1,   //gas consumed in liters for car 1
          mi2,      //miles for car 2
          gasL2,   //liters of gas for car 2
          MPG1,    //miles per gallon car 1
          MPG2;     //mpg car 2
    char    rep;   //repeat
    //Input or initialize values
    do{
    cout<<"Input the amount of gas consumed by Person 1's car (in Liters)"<<endl;
    cin>>gasL1;
    cout<<"Input how many miles traveled"<<endl;
    cin>>mi1;
    cout<<"Input the amount of gas consumed by Person 2's car (in Liters)"<<endl;
    cin>>gasL2;
    cout<<"Input how many miles traveled"<<endl;
    cin>>mi2;
    
    //Map/Process/Calculations, Inputs to Outputs
    MPG1=mi1/(LTRTOGAL*gasL1);
    MPG2=mi2/(LTRTOGAL*gasL2);
 
    //Display Outputs
    cout<<"Person 1's car is getting "<<MPG1<<" miles per gallon."<<endl;
    cout<<"Person 2's car is getting "<<MPG2<<" miles per gallon."<<endl;
    if(MPG1==MPG2){
        cout<<"Both cars have the same mileage."<<endl;
        }else if (MPG1>MPG2){
            cout<<"Person 1's car has the better mileage at "
                <<MPG1<<" mpg"<<endl;
        }else if (MPG1<MPG2){
            cout<<"Person 2's car has the better mileage at "
                <<MPG2<<" mpg"<<endl;
        }
    cout<<"Would you like to repeat the program? Y/N"<<endl;
    cin>>rep;
    }while (rep=='y'||rep=='Y');
    
    //Exit Program!
    
    return 0;
}

