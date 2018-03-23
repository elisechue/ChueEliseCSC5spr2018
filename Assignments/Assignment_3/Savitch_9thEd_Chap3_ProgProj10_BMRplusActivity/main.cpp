/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 21, 2018 8:53PM
 * Purpose: calculate BMR including activity levels
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
    char    sex,    //male or female
            actLvl;//activity level choice
    int     ht,    //height in inches
            wt,    //weight in pounds
            age;   //age in years
           
    float choc=230, //calories in 1 chocolate bar
          bmr;
      
    
    //Input or initialize values
    cout<<"Please enter your sex (M or F): "<<endl;
    cin>>sex;
    if (sex>=97)sex-=32;
    cout<<"How old are you?"<<endl;
    cin>>age;
    cout<<"Enter your height in inches: "<<endl;
    cin>>ht;
    cout<<"Enter your weight in lbs: "<<endl;
    cin>>wt;
    
    cout<<"Are you:"<<endl;
    cout<<"A) Sedentary"<<endl;
    cout<<"B) Somewhat active (exercise occasionally)"<<endl;
    cout<<"C) Active (exercise 3-4 times per week)"<<endl;
    cout<<"D) Very Active (exercise every day)"<<endl;
    cout<<"When inputting your answer, enter a, b, c, or d"<<endl;
    cin>>actLvl;
    if (actLvl>=97)actLvl-=32;
    //Map/Process/Calculations, Inputs to Outputs
    if (sex=='M'){
        bmr=66+(6.3*wt)+(12.9*ht)-(6.8*age);
    }else if(sex=='F'){
        bmr=655+(4.3*wt)+(4.7*ht)-(4.7*age);
    }
    if(actLvl=='A'){
        bmr*=1.2;
    } else if(actLvl=='B'){
        bmr*=1.3;
    } else if(actLvl=='C'){
        bmr*=1.4;
    } else if(actLvl=='D'){
        bmr*=1.5;
    }
                
    //Display Outputs
    cout<<"You have a BMR of: "<<bmr<<" calories"<<endl;
    cout<<"You could eat "<<bmr/choc
            <<" candy bars to maintain your current weight"<<endl;
        cout<<"if that was the ONLY thing you ate."<<endl;
        
    //Exit Program!
    
    return 0;
}

