/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 22, 2018, 6:54 PM
 * Purpose: menu for Assignment 3
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Display Menu options
    cout<<"Choose from the following programs "
        <<"all of which were curated from "
        <<"chapter 3 of the Savitch 9th ed. textbook "<<endl;
    cout<<"Type 1 for Practice Program 1 Rock Paper Scissors"<<endl;
    cout<<"Type 2 for Practice Program 2 Credit Interest"<<endl;
    cout<<"Type 3 for Practice Program 5 Printout Prime #s w/ no loop"<<endl;
    cout<<"Type 4 for Programming Project 6 Fibonacci Green Crud"<<endl;
    cout<<"Type 5 for Programming Project 8 Calculate Pi"<<endl;
    cout<<"Type 6 for Programming Project 9 Monty Hall Problem"<<endl;
    cout<<"Type 7 for Programming Project 10 BMR plus Activity"<<endl;
    cout<<"Type 8 for Programming Project 12 Game of 23"<<endl;
    cout<<"Type 9 for Programming Project 13 Holy Digits Batman"<<endl;        
    cin>>choice;

    //process output
    if(choice>='1'&&choice<='9'){
        switch(choice){
            case '1':{
                
               break; 
            }
            case '2':{
                
                break;
            }
            case '3':{
                
                break;
            }
            case '4':{
 
                break; 
            }
            case '5':{
 
                break; 
            }
            case '6':{
 
                break;
            }
            case '7':{
 
                break; 
            }
            case '8':{
 
                break; 
            }
            case '9':{
 
                break;
            }
        }
        
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    //Display Outputs
  
    //Exit Program!
    
    return 0;
}

