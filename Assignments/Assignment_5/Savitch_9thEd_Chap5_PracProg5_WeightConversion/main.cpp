/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 6, 2018, 12:20 PM
 * Purpose:  Convert pounds and ounces to kilograms and grams
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float LBSKILO=2.2046; //pounds in a kilogram
const float GKG=1000;       //grams in a kilogram
const float OZLBS=16;       //ounces in a pound
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void inpLbOz(); //input pounds and ounces
float lbTOkil(float);   //pounds to kilograms
float ozTOg(float);     //ounces to grams
void outKilG(float, float); //output kilograms and grams

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float lbs, oz;   //pounds , ounces
    char loop;      //user inputs y/n to repeat program
    
    do{
        //Input or initialize values
        inpLbOz();          //calls for the input function
        cin>>lbs>>oz;
        
        //Map/Process/Calculations, Inputs to Outputs

        //Display Outputs
        cout<<fixed<<setprecision(4)<<showpoint;
        outKilG(lbs,oz);     //calls output function and passes input through
        cout<<"Would you like to run the program again? Y/N"<<endl;
        cin>>loop;
        //Exit Program!
    }while (loop=='y'||loop=='Y');
    return 0;
}
//******************************************************************************
//                           FUNCTIONS GO HERE
void inpLbOz(){
    cout<<"This program converts Pounds & Ounces to Kilograms & Grams"<<endl;
    cout<<"Input pounds (lbs) and ounces (oz)"<<endl;
}
float lbTOkil(float lbs){
    return lbs/LBSKILO;
}
float ozTOg(float oz){
    return oz/OZLBS/LBSKILO*GKG;
}
void outKilG(float lbs, float oz){
    cout<<"You input "<<lbs<<" lbs and "<<oz<<" oz"<<endl;
    cout<<"That converts to "<<lbTOkil(lbs)<<" kg and "<<ozTOg(oz)<<" g"<<endl;
}