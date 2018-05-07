/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 6, 2018, 8:40 PM
 * Purpose:  Convert kilograms and grams to pounds and ounces
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
void inpKilG(); //input kilograms and grams
float kilTOlb(float);   //kilograms to pounds
float gTOoz(float);     //grams to ounces
void outLbOz(float, float); //output pounds and ounces

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float kg, grams;   //kilograms, grams
    char loop;      //user inputs y/n to repeat program
    
    do{
        //Input or initialize values
        inpKilG();          //calls for the input function
        cin>>kg>>grams;
        
        //Map/Process/Calculations, Inputs to Outputs

        //Display Outputs
        cout<<fixed<<setprecision(4)<<showpoint;
        outLbOz(kg, grams);   //calls output function and passes input through
        cout<<"Would you like to run the program again? Y/N"<<endl;
        cin>>loop;
        
        //Exit Program!
    }while (loop=='y'||loop=='Y');
    return 0;
}
//******************************************************************************
//                           FUNCTIONS GO HERE
void inpKilG(){
    cout<<"This program converts Kilograms & Grams to Pounds & Ounces"<<endl;
    cout<<"Input Kilograms (kg) and Grams (g)"<<endl;
}
float kilTOlb(float kg){
    return kg*LBSKILO;
}
float gTOoz(float grams){
    return grams/GKG*LBSKILO*OZLBS;
}
void outLbOz(float kg, float grams){
    cout<<"You input "<<kg<<" kg and "<<grams<<" g"<<endl;
    cout<<"That converts to "<<kilTOlb(kg)<<" lbs and "
            <<gTOoz(grams)<<" oz"<<endl;
}