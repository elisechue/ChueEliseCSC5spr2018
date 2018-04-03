/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 29, 2018, 10:17 AM
 * Purpose:  buying stocks (using do while loop and rand nums)
 */

//System Libraries Here
#include <iostream> //I/O Library - > cout, endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand function
#include <ctime>    //time to set seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //initialize random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    int dolStk, //stock price in $
        numStk, //numerator
        denStk; //denominator
    int numShrs;//number of shares
    float valStk;//Value of stocks in $
    char again; //continue or not
   //Input or initialize values
    denStk=8;
    
   //Calculate the answer
    do{
        //randomly choose stock price
        dolStk=rand()%1000; //[0-999]
        numStk=rand()%8;    //[0-7]/8
        numShrs=rand()%90+10; //[10-99]
        
        //calculate stock value
        valStk=numShrs*(dolStk+static_cast<float>(numStk)/denStk);
        
   //display outputs
        cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Number of shares of stock per share= "<<numShrs<<endl;
    cout<<"The value of the stock = $"<<dolStk<<" "<<numStk<<"/"<<denStk
            <<endl;
    cout<<"The total value of the stock = $"<<valStk<<endl;
    
    //prompt user to see if they want to continue
    cout<<"Would you like to continue? Y/N "<<endl;
    cin>>again;
    }while(again=='Y'||again=='y');
  
   //Exit Program!
    
    return 0;
}

