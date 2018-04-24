/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 24, 2018, 12:20 PM
 * Purpose: calculate coins given for x amount of change
 */

//System Libraries Here
#include <iostream>
#include <iomanip>  //formatting library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
                       //Math, Physics, Science, Conversions, 2-D Array Columns
const int DLRSPNY=100;     //conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;

//Function Prototypes 
int numCoin(int,int);  //Calculates number of coins
int remandr(int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float price, amtTndr;
    int pennies,n25,n10,n5,n1;
    
    //Input or initialize values
    price=9.14f;    //price is $9.14
    amtTndr=10.00f; //Amount paid
    
    //Output initial conditions
    pennies=(amtTndr-price+0.005)*DLRSPNY;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item price = $"<<price<<endl;
    cout<<"Amount Tendered = $"<<amtTndr<<endl;
    cout<<"Change returned = "<<pennies<<" cents"<<endl;
    
    //Calculate minimum amount of change
    n25=numCoin(pennies,QUARTER);
    pennies=remandr(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=remandr(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=remandr(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=remandr(pennies,PENNY);
    
    //Display Outputs
    cout<<"Number of Quarters = "<<n25<<endl;
    cout<<"Number of Dimes    = "<<n10<<endl;
    cout<<"Number of Nickels  = "<<n5<<endl;
    cout<<"Number of Pennies  = "<<n1<<endl;
    //Exit Program!
    
    return 0;
}

int remandr(int pennies,int denom){
    return pennies-numCoin(pennies,denom)*denom;
}

int numCoin(int pennies,int denom){
    return pennies/denom;   //Number of coins of that denomination
}
