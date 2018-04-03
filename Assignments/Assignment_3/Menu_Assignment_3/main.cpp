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
#include <iomanip>
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
                cout<<"Practice Program 1 Rock Paper Scissors"<<endl;
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char p1,p2;
    //Initialize Variables
    p1=rand()%3+'R';
    p1=p1>'S'?'P':p1;
    p2=rand()%3+'R';
    p2=p2>'S'?'P':p2;
    //Player's choice
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Player 1 = "<<p1<<endl;
    cout<<"Player 2 = "<<p2<<endl;
    //Determine winner
    if(p1==p2){
        cout<<"It's a tie"<<endl;
    }else if(p1=='P'){
        if(p2=='S'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;         
        }
    }else if(p1=='S'){
        if(p2=='R'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;         
        }
    }else if(p1=='R'){
        if(p2=='P'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;         
        }
    }
               break; 
            }
            case '2':{
                cout<<"Practice Program 2 Credit Interest"<<endl;
//Declare all Variables, no doubles  
    float credBal,  //credit balance
          minPay,   //minimum payment owed
          totDue;  //total credit due including interest 
    //Input or initialize values
    cout<<"Please input your current credit balance: "<<endl;
    cin>>credBal;
    //Map/Process/Calculations, Inputs to Outputs
    totDue=(credBal<=1000)?credBal*1.015:
          ((credBal-1000)*1.01)+(1000*1.015);
    cout<<totDue<<endl;
    cout<<"Interest owed:               $  "<<totDue-credBal<<endl;
    cout<<"You owe:                     $"<<totDue<<endl;
    minPay=(credBal<=10)?credBal:10;
    minPay=(credBal*0.1<10)?minPay:credBal*0.1;
    cout<<"Minimum Payment owed:        $"<<minPay<<endl;
                break;
            }
            case '3':{
                cout<<"Practice Program 5 Printout Prime #s w/ no loop"<<endl;
                //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char num2Tst;   //2-100
    bool prime;     //determine if num2Tst is prime
    //Initialize Variables
    num2Tst=rand()%99+2;    //[2,100]
    //num2Tst=2,3,5,7 to see if it counts the early primes as prime
    //Calculate the answer
    prime=num2Tst==2?true:num2Tst%2;
    prime=num2Tst==3?true:prime=num2Tst&&num2Tst%3;
    prime=num2Tst==5?true:prime=num2Tst&&num2Tst%5;
    prime=num2Tst==7?true:prime=num2Tst&&num2Tst%7;
    //Display Outputs
    cout<<static_cast<int>(num2Tst)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
                break;
            }
            case '4':{
                cout<<"Programming Project 6 Fibonacci Green Crud"<<endl;
  //Declare Variables
    int fn,fnm1,fnm2, 
        intCrud,days;
    //Initialize Variables
    fnm2=1;     //f(subscript n) - 2
    fnm1=1;     //f(subscript n) - 1
    intCrud=10;
    days=0;
    //Printout first 2 in sequence
    cout<<"Fibonacci Sequence with Green Crud"<<endl;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of Crud"<<endl;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    //Calculate 3rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    //calculate 4th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    //Calculate 5th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    //calculate 6th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    //Calculate 7th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    //calculate 8th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;       
    //Calculate 9th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl; 
                break; 
            }
            case '5':{
                cout<<"Programming Project 8 Calculate Pi"<<endl;
//Declare all Variables, no doubles  
    float count,    //looper
            odd,    //each division piece increases but they're all odd
            sum,    //
            numTerm,//number of terms
            pi;
    bool  boop;     //used to alternate between adding and subtracting      
    //Input or initialize values
    count=1;
    odd=1;
    sum=0;
    cout<<"How many terms do you want?"<<endl;
    cout<<"The more terms you use, the more accurate this will be."<<endl;
    cout<<"(and I'm talking upwards of thousands here so go crazy)"<<endl;
    cin>>numTerm;
    pi=0;
    boop=true;
    //Map/Process/Calculations, Inputs to Outputs
    do{
        if(boop){
            pi+=4/odd;
            boop=false;
        }else {
            pi-=4/odd;
            boop=true;
        }odd+=2;
        count++;
        sum+=pi;
    }while(count<numTerm);
    cout<<"Pi = "<<(sum/count)<<endl;
                break; 
            }
            case '6':{
                cout<<"Programming Project 9 Monty Hall Problem"<<endl;
                //random number seed
    srand(static_cast <unsigned int>(time(0))); 
    //Declare all Variables, no doubles  
    float games, //number of games
        stayWin, //win by staying with first choice
        chaWin, //win by changing first choice
        choDoor,//chosen door
            winDoor,//winner's door
            revDoor,//revealed door
            lasDoor,//last door (remaining door)
         choice;
    //Input or initialize values
    games=0;
    stayWin=0;
    chaWin=0;
    //Map/Process/Calculations, Inputs to Outputs
    do{
        choDoor=rand()%3+1;
        winDoor=rand()%3+1;
        do{
            revDoor=rand()%3+1;
          }while (revDoor==choDoor||revDoor==winDoor);
          do{
              lasDoor=rand()%3+1;
          }while (lasDoor==choDoor||lasDoor==revDoor);
          choice=rand()%2+1;
          if (choice==1){
              if(choDoor==winDoor){
                  stayWin++;
              }
          }if(choice==2){
              if(lasDoor==winDoor){
                  chaWin++;
              }
          }games++;
}while(games<10000); 
    //Display Outputs
cout<<"Out of 10,000 games if you decided to stay with your first choice"<<endl;
    cout<<"you would have won "<<stayWin<<" times"<<endl;
cout<<"If you changed your first choice to the other door, however,"<<endl;
    cout<<"you would have won "<<chaWin<<" times, which is twice as much."
            <<endl;
cout<<"As you can see, you're better off changing your choice!";
                break;
            }
            case '7':{
                cout<<"Programming Project 10 BMR plus Activity"<<endl;
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
                break; 
            }
            case '8':{
                cout<<"Programming Project 12 Game of 23"<<endl;
  //Declare all Variables, no doubles
    int p1,     //player 1 choice between 1 and 3
        cpu,    //computer choice
        tpicks; //toothpicks left   
    //Input or initialize values
    tpicks=23;  //game starts with 23 toothpicks
     //Initialize/Calculate Inputs/Display Outputs
    cout<<"[TURN 1] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    //Turn 2
    cout<<"[TURN 2] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    //Turn 3
    cout<<"[TURN 3] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    //Turn 4
    cout<<"[TURN 4] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    //Turn 5
    cout<<"[TURN 5] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks<=4&&tpicks>=2){
        tpicks-=tpicks-1;
        cout<<"Computer picked: 3"<<endl;
        cout<<"There is only 1 toothpick left: Computer Wins :^("<<endl;
        return 0;
    }
    else if (tpicks>4){
        cpu=4-p1;
    }
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    //Turn 6
    cout<<"[TURN 6] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    if (p1==1){
        cout<<"Computer picked: 1"<<endl;
        tpicks-=1;
        cout<<"There is only 1 toothpick left: Computer Wins :^("<<endl;
        return 0;
    }else if (p1==2){
        cout<<"Computer picked: 1"<<endl;
        cout<<"The Computer took the last one: Player 1 Wins :^)"<<endl;
    }else if (p1==3){
        cout<<"Player 1 took the last 3 toothpicks: Computer Wins :^/"<<endl;
    }
                break; 
            }
            case '9':{
                cout<<"Programming Project 13 Holy Digits Batman"<<endl;
    //random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int a,   //digit 1
        b,   //digit 2
        c,   //digit 3
        d;   //digit 4 
    //Initialize Variables
    do{
        do{
            do{
                do{     
                a=rand()%10;
                b=rand()%10;
                c=rand()%10;
                d=rand()%10;
                }while(a==b||a==c||a==d||b==c||b==d||c==d);
            }while(a!=3*c);
        }while(d%2==0);
    }while (a+b+c+d!=27);
       cout<<"The Riddler will strike at "<<a<<b<<c<<d<<" Pennsylvania Ave!"
               <<endl;
       cout<<"Foil his dastardly plans Batman!"<<endl;
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

