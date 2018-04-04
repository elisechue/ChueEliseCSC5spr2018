/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 3, 2018, 5:29 PM
 * Purpose: menu for Assignment 4
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    char choice,//choice for each problem
         menu;  //return to main menu
    
    //Display Menu options
 do{
    cout<<"Choose from the following programs "
        <<"all of which were curated from "<<endl;
    cout<<"Ch 4 of the Savitch 9th ed. textbook "<<endl;
    cout<<"or Ch 5 of the Gaddis 8th ed textbook"<<endl;
    cout<<"Type 1 for Gaddis Problem 7: Pennies for Pay"<<endl;
    cout<<"Type 2 for Practice Program 1: Miles Per Gallon"<<endl;
    cout<<"Type 3 for Practice Program 2: Miles Per Gallon w/ 2 cars"<<endl;
    cout<<"Type 4 for Practice Program 3: Stocks"<<endl;
    cout<<"Type 5 for Practice Program 4: Past Year Inflation"<<endl;
    cout<<"Type 6 for Practice Program 5: Year Later Price Inflation"<<endl;
    cout<<"Type 7 for Practice Program 7: Attraction between Bodies"<<endl;
    cout<<"Type 8 for Programming Project 2: Clothing Size Calculator"<<endl;
    cout<<"Type 9 for Programming Project 6: Twinkie Vending Machine"<<endl;        
    cin>>choice;

    //process output
    if(choice>='1'&&choice<='9'){
        switch(choice){
            case '1':{
                cout<<"Gaddis Problem 7: Pennies for Pay"<<endl;
                //Declare Variables 
                unsigned int totPay,
                             pyPrDay;    //Pennies of pay
                char numDays=31;        //most number of days in a month

               //Input or initialize values
                pyPrDay=1;  //1 penny on first day
                totPay=pyPrDay;   //total amount

               //Calculate the answer
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Day      Pay        Total"<<endl;
                for(int day=1;day<=numDays;day++){
                    cout<<setw(2)<<day
                        <<setw(12)<<pyPrDay/100.0f
                        <<setw(14)<<totPay/100.0f<<endl;    
                    pyPrDay*=2;
                    totPay+=pyPrDay;
                }
               break; 
            }
            case '2':{
                cout<<"Practice Program 1: Miles Per Gallon"<<endl;
                //Declare all Variables, no doubles
                const float LTRTOGAL=0.2641f;   //1 liter is /that/ gallons
                float mi,     //miles input
                          gasL,   //gas consumed in liters
                          MPG;    //miles per gallon
                char rep;   //repeat
                //Input or initialize values
                do{
                cout<<"Input the amount of gas consumed by your car"
                      " (in Liters)"<<endl;
                cin>>gasL;
                cout<<"Input how many miles traveled"<<endl;
                cin>>mi;

                //Map/Process/Calculations, Inputs to Outputs
                MPG=mi/(LTRTOGAL*gasL);

                //Display Outputs
                cout<<"Your car is getting "<<MPG<<" mpg."<<endl;
                cout<<"Would you like to repeat the program? Y/N"<<endl;
                cin>>rep;
                }while (rep=='y'||rep=='Y');
                break;
            }
            case '3':{
                cout<<"Practice Program 2: Miles Per Gallon w/ 2 cars"<<endl;
                //Declare all Variables, no doubles
                const float LTRTOGAL=0.2641f;   //1 liter is /that/ gallons
                float mi1,     //miles input for car 1
                      gasL1,   //gas consumed in liters for car 1
                      mi2,      //miles for car 2
                      gasL2,   //liters of gas for car 2
                      MPG1,    //miles per gallon car 1
                      MPG2;     //mpg car 2
                char    rep;   //repeat
                //Input or initialize values
                do{
                cout<<"Input the amount of gas consumed by Person 1's car "
                        "(in Liters)"<<endl;
                cin>>gasL1;
                cout<<"Input how many miles traveled"<<endl;
                cin>>mi1;
                cout<<"Input the amount of gas consumed by Person 2's car "
                        "(in Liters)"<<endl;
                cin>>gasL2;
                cout<<"Input how many miles traveled"<<endl;
                cin>>mi2;

                //Map/Process/Calculations, Inputs to Outputs
                MPG1=mi1/(LTRTOGAL*gasL1);
                MPG2=mi2/(LTRTOGAL*gasL2);

                //Display Outputs
                cout<<"Person 1's car is getting "<<MPG1<<" miles per gallon."
                        <<endl;
                cout<<"Person 2's car is getting "<<MPG2<<" miles per gallon."
                        <<endl;
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
                break;
            }
            case '4':{
                cout<<"Practice Program 3: Stocks"<<endl;
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
               cout<<"The value of the stock = $"<<dolStk<<" "<<numStk
                       <<"/"<<denStk<<endl;
               cout<<"The total value of the stock = $"<<valStk<<endl;

               //prompt user to see if they want to continue
               cout<<"Would you like to continue? Y/N "<<endl;
               cin>>again;
               }while(again=='Y'||again=='y');
                break; 
            }
            case '5':{
                cout<<"Practice Program 4: Past Year Inflation"<<endl;
                //Declare all Variables, no doubles
                float yearAgo,  //price of item a year ago
                        today,  //price of item today
                        inflat; //inflation rate
                char    rep;    //user inputs if they want to repeat the program

                //Input or initialize values
                do{
                    cout<<"Input the price from a year ago of an item:"<<endl;
                    cin>>yearAgo;
                    cout<<"Input the current price of that item:"<<endl;
                    cin>>today;

                //Map/Process/Calculations, Inputs to Outputs
                    inflat=(today-yearAgo)/yearAgo*100;

                //Display Outputs
                    cout<<"The item cost  $"<<yearAgo<<" one year ago."<<endl;
                    cout<<"The item costs $"<<today<<" today."<<endl;
                    cout<<"The rate of inflation for that item in the past year"
                            " was = "<<inflat<<"%"<<endl;
                    cout<<"Would you like to repeat the program? Y/N"<<endl;
                    cin>>rep;
                }while (rep=='y'||rep=='Y');
                break; 
            }
            case '6':{
                cout<<"Practice Program 5: Year Later Price Inflation"<<endl;
                //Declare all Variables, no doubles
                float yearAgo,  //price of item a year ago
                        today,  //price of item today
                        inflat; //inflation rate
                char    rep;    //user inputs if they want to repeat the program

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
                    cout<<"The rate of inflation for that item in the past year"
                          " was = "<<inflat*100<<"%"<<endl;
                    int count=1;
                    while (count<=2){
                        today=today*(1+inflat);
                        cout<<"The predicted price of the item"
                              " the next year will be = $"<<today<<endl;
                        count++;       
                    }

                    cout<<"Would you like to repeat the program? Y/N"<<endl;
                    cin>>rep;
                }while (rep=='y'||rep=='Y');
                break;
            }
            case '7':{
                cout<<"Practice Program 7: Attraction between Bodies"<<endl;
                const float GRAVITY=6.673e-8f;  //cm^3/g/sec^2
                const float CMMETER=0.01f;      //cm to meters
                const float METERFT=3.281f;      //meters to ft
                const float LBSSLUG=32.174f;    //slugs to pound
                //Declare Variables 
                float myMass, 
                      myWt,
                      myWtCnv,  //weight converted
                      massEa,   //mass of Earth in grams
                      rEarth;   //radius of earth

               //Input or initialize values
                myMass=6;//6slugs
                myWtCnv=myMass*LBSSLUG;
                massEa=5.972e27f;//grams
                rEarth=6.371e6f;//meters
               //Calculate the answer
                myWt=GRAVITY*CMMETER*CMMETER*CMMETER*myMass*massEa*METERFT
                        /(rEarth*rEarth);

               //Output my Weight
                cout<<fixed<<setprecision(0);//we shouldnt output 
                                //more than 3 sigfigs depending on the scenarios
                                //ie diff in actual distance depending on where
                                //you are on earth in this case
               cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
               cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
               break; 
            }
            case '8':{
                cout<<"Programming Project 2: Clothing Size Calculator"<<endl;
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
                   cout<<"What is your height (inches), weight (lbs), "
                         "and age?"<<endl;
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
                }  while (rep=='y'||rep=='Y');
                break; 
            }
            case '9':{
                cout<<"Programming Project 6: Twinkie Vending Machine"<<endl;
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
                } while (rep=='y'||rep=='Y');
                break;
            }
        }
        
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    cout<<"Would you like to go to the main menu? Y/N"<<endl;
    cin>>menu;
 }while(menu=='y'||menu=='Y');
  
    //Exit Program!
    
    return 0;
}

