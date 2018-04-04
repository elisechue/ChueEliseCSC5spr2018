/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 1, 2018, 1:55 PM
 * Purpose: gauge price of an item in the next year
 *          based on past rate of inflation
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
    float yearAgo,  //price of item a year ago
            today,  //price of item today
            inflat; //inflation rate
    char    rep;    //user inputs whether they want to repeat this program
    
    //Input or initialize values
    do{
        cout<<"Input the price from a year ago of an item:"<<endl;
        cin>>yearAgo;
        cout<<"Input the current price of that item:"<<endl;
        cin>>today;
    
    //Map/Process/Calculations, Inputs to Outputs
        inflat=(today-yearAgo)/yearAgo;
    
    //Display Outputs
        cout<<"The item cost  $"<<yearAgo<<" one year ago."<<endl;
        cout<<"The item costs $"<<today<<" today."<<endl;
        cout<<"The rate of inflation for that item in the past year was = "
                <<inflat*100<<"%"<<endl;
        int count=1;
        while (count<=2){
            today=today*(1+inflat);
            cout<<"The predicted price of the item the next year will be = $"
            <<today<<endl;
            count++;       
        }
        
        cout<<"Would you like to repeat the program? Y/N"<<endl;
        cin>>rep;
    }while (rep=='y'||rep=='Y');
    
    //Exit Program!
    
    return 0;
}

