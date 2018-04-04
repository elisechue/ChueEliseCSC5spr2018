/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 3, 2018, 3:04 PM
 * Purpose:  Simulate a vending machine 
 *           and calculate total with each coin inserted
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
    int coin,   //takes only nickel, dime, quarter, or dollar amounts
        total,  //on going total of given coins
        change; //change to be given if coin exceeds price
    char rep;   //user inputs y or n to repeat program
    
    //Input or initialize values
   
    //Map/Process/Calculations, Inputs to Outputs
    do{  
        total=0;
        cout<<"Welcome to the Deep-Fried Twinkie Machine!"<<endl;
        cout<<"Twinkies cost $3.50 (or 350 cents!)"<<endl;
        cout<<"We only accept nickel, dime, quarter, and dollar amounts"<<endl;
        do{
            cout<<"Please enter a coin or dollar amount:"<<endl;
            cin>>coin;
            if(coin==5||coin==10||coin==25||coin==100){
                total+=coin;
                cout<<"Your total so far: "<<total<<endl;
            }else cout<<"Invalid Entry"<<endl;
        }while(total<350);
        cout<<"Enjoy your Deep-Fried Twinkie!"<<endl;
        if(total>350){
            change=total-350;
            cout<<"Your change is "<<change<<" cents"<<endl;
        }
        cout<<"Would you like another Twinkie? Y/N"<<endl;
        cin>>rep;
    }while (rep=='y'||rep=='Y');
    
    //Display Outputs
    //Exit Program!
    
    return 0;
}

