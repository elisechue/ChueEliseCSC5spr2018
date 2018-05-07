/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 6, 2018, 10:21 PM
 * Purpose: menu with functions for Assigment 5
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
//Constants for Prob 1-3
const float MTOFT=0.3048; //convert meters to feet according to book
const float CMTOM=100;      //centimeter to meter
const float INTOFT=12;      //inches to feet
//Constants for Prob 4 and 5
const float LBSKILO=2.2046; //pounds in a kilogram
const float GKG=1000;       //grams in a kilogram
const float OZLBS=16;       //ounces in a pound
//Constants for Prob 6
const int DLRSPNY=100;     //conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;

//Function Prototypes 
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();
void prblm8();
void prblm9();
//problem 1,3
void inpFtIn();
float ftTOm(float);
float inTOcm(float);
void outpMCm(float, float);
//problem 2,3
void inpMCm();          //input meters and cm
float mTOft(float);
float cmTOin(float);
void outFtIn(float, float);//output ft and in
//problem 4
void inpLbOz(); //input pounds and ounces
float lbTOkil(float);   //pounds to kilograms
float ozTOg(float);     //ounces to grams
void outKilG(float, float); //output kilograms and grams
//problem 5
void inpKilG(); //input kilograms and grams
float kilTOlb(float);   //kilograms to pounds
float gTOoz(float);     //grams to ounces
void outLbOz(float, float); //output pounds and ounces
//problem 6
int numCoin(int,int);  //Calculates number of coins
int remandr(int,int);
//problem 7
float wChill(float, float);
//problem 8
float frand();//Probability from 0-1
bool shoot(float);
void shoot(bool,float,bool &,bool &);
//problem 9
unsigned char cnvDay(string);
unsigned char cnvMnth(string);
bool isLpYr(unsigned short);
char gtCentV(unsigned int);
char gtYrVal(unsigned int);
char gtMnthV(char, unsigned int);
string dayOfWk(char, char, unsigned int);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

    //process output
    
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;} 
            case '5':{prblm5();break;}
            case '6':{prblm6();break;}
            case '7':{prblm7();break;}
            case '8':{prblm8();break;}
            case '9':{prblm9();break;}
            default:cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    //Exit Program!
    
    return 0;
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                              Menu
//input: -> 
//output:-> 
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    cout<<"Choose from the following Menu"<<endl;
    cout<<"All problems are from Savitch 9thEd Chap 5"<<endl;
    cout<<"Type 1 for Practice Program 2 Length Conversion (Ft -> M)"<<endl;
    cout<<"Type 2 for Practice Program 3 Length Conv. Modified (M->Ft)"<<endl;
    cout<<"Type 3 for Practice Program 4 Choose Length Conversion"<<endl;
    cout<<"Type 4 for Practice Program 5 Weight Conversion (Lbs -> Kg)"<<endl;
    cout<<"Type 5 for Practice Program 6 Weight Conv. (Kg -> Lbs)"<<endl;
    cout<<"Type 6 for Program Project 4 Change"<<endl;
    cout<<"Type 7 for Program Project 5 Windchill"<<endl;
    cout<<"Type 8 for Program Project 6 Shooter Game"<<endl;
    cout<<"Type 9 for Program Project 7 Day of the Week"<<endl;
    
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 1
void prblm1(){
    //Declare all Variables, no doubles
    float ft, in;   //feet, inches
    char loop;      //user inputs y/n to repeat program
    //TESTERS float met, cm;  //meters, centimeters
    do{
        //Input or initialize values
        inpFtIn();          //calls for the input function
        cin>>ft>>in;

        //Map/Process/Calculations, Inputs to Outputs

        //Display Outputs
        outpMCm(ft,in);     //calls output function and passes input through
        cout<<"Would you like to run program again? Y/N"<<endl;
        cin>>loop;
        //Exit Program!
    }while (loop=='y'||loop=='Y');
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 2
void prblm2(){
    //Declare all Variables, no doubles
    float met, cm;   //meters, centimeters
    float in,ft;        
    char loop;      //user inputs y/n to repeat program
    do{
        //Input or initialize values
        inpMCm();          //calls for the input function
        cin>>met>>cm;

        //Map/Process/Calculations, Inputs to Outputs

        //Display Outputs
        outFtIn(met,cm);     //calls output function and passes input through
        cout<<"Would you like to run program again? Y/N"<<endl;
        cin>>loop;
        //Exit Program!
    }while (loop=='y'||loop=='Y');
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 3
void prblm3(){
  //Declare all Variables, no doubles
    float ft, in, met, cm;   //feet, inches, meters, centimeters
    char loop, choose;      //user inputs y/n to repeat program 
                            // choose which conversion
    //TESTERS float met, cm;  //meters, centimeters
    do{
        //Input or initialize values
        cout<<"Convert (1) FT & IN -> M & CM"<<endl;
        cout<<"or      (2) M & CM  -> FT & IN?"<<endl;
        cin>>choose;
        //Map/Process/Calculations, Inputs to Outputs
        if(choose=='1'){
            inpFtIn();
            cin>>ft>>in;
            outpMCm(ft,in);
        }else if (choose=='2'){
            inpMCm();
            cin>>met>>cm;
            outFtIn(met,cm);
        }
        
        cout<<"Would you like to run program again? Y/N"<<endl;
        cin>>loop;
        //Exit Program!
    }while (loop=='y'||loop=='Y');
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 4
void prblm4(){
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
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 5
void prblm5(){
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
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 6
void prblm6(){
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
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 7
void prblm7(){
    //Declare all Variables, no doubles
    float v,    //wind speed in mph
          t;    //temperature in Fahrenheit 
    
    //Input or initialize values
    cout<<"This program calculates the Windchill Index of North America"<<endl;
    cout<<"Input the wind speed (in mph) and the temperature (in F)"<<endl;
    cin>>v>>t;
    if(t>50){
        cout<<"Temperature N/A"<<endl;
    }
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The windchill is "<<wChill(v,t)<<" degrees F"<<endl;
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 8
void prblm8(){
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables, no doubles
    bool aLive, bLive, cLive;
    char remain;
    float aPk,bPk,cPk;
    int aCount, bCount, cCount, nGames;
    
    //Input or initialize values
    aCount=bCount=cCount=0;
    aPk=1.0f/3.0f;
    bPk=1.0f/2.0f;
    cPk=1.0f;
    nGames=1000;
    for(int game=1;game<1000;game++){
         aLive=bLive=cLive=true;
    
                                //Test shoot function
                                /*int count=0;
                                for(int i=1;i<=1000;i++){
                                    if(shoot(bPk))count++;
                                }
                                cout<<"Count = "<<count<<endl;*/
        //Map/Process/Calculations - until 1 person remains
        do{
            shoot(aLive,aPk,cLive,bLive);
            shoot(bLive,bPk,cLive,aLive);
            shoot(cLive,cPk,aLive,bLive);
            remain=aLive+bLive+cLive;
        }while(remain>1);
        
        aCount+=aLive;
        bCount+=bLive;
        cCount+=cLive;
    }
   
    
    //Display Outputs
    /*cout<<"Arin Pk    = "<<aPk<<endl;     checking their kill probabilities
    cout<<"Bob Pk     = "<<bPk<<endl;
    cout<<"Charlie Pk = "<<cPk<<endl;*/
    cout<<"Last Round Results:"<<endl;
    cout<<"Arin is    "<<(aLive?"Alive":"Deceased")<<endl;
    cout<<"Bob is     "<<(bLive?"Alive":"Deceased")<<endl;
    cout<<"Charlie is "<<(cLive?"Alive":"Deceased")<<endl;
    cout<<endl;
    cout<<"Final Results"<<endl;
    cout<<"Arin    Lives "<<aCount<<" times"<<endl;
    cout<<"Bob     Lives "<<bCount<<" times"<<endl;
    cout<<"Charlie Lives "<<cCount<<" times"<<endl;
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 9
void prblm9(){
    //Declare all Variables, no doubles
    string sMonth, sDay;
    unsigned short year;
    char day, month;
    
    //Input or initialize values
    cout<<"This program outputs the Day of the Week "<<endl;
    cout<<"given he date."<<endl;
    cout<<"Input the date i.e. July 4, 2008"<<endl;
    cin>>sMonth>>sDay>>year;
   
    //Map/Process Inputs to Outputs
    day=cnvDay(sDay);
    month=cnvMnth(sMonth);
    cout<<static_cast<int>(gtYrVal(year))<<endl;
    
    //Display Outputs
    cout<<"The date is "
            <<static_cast<int>(month)<<"/"
            <<static_cast<int>(day)<<"/"<<year<<endl;
}
//******************************************************************************
//******************************************************************************
//              FUNCTIONS GALORE CLOSEOUT ALL FUNCTIONS MUST GO
//END Functions for Problem 1,3
void inpFtIn(){
    cout<<"This program converts feet and inches to meters and centimeters"
            <<endl;
    cout<<"Input feet and inches"<<endl;
}

float ftTOm(float ft){
    return ft*MTOFT;   //meter conversion
}

float inTOcm(float in){
    return (in/INTOFT)*MTOFT*CMTOM;   //inches to feet to meters to centimeters
}

void outpMCm(float ft, float in){
    cout<<"You input "<<ft<<" ft and "<<in<<" in."<<endl;
    cout<<"This converts to "<<ftTOm(ft)<<" m and "<<inTOcm(in)<<" cm"<<endl;
}
//END Functions for Problem 2,3
void inpMCm(){
    cout<<"This program converts meters and centimeters to feet and inches"
            <<endl;
    cout<<"Input meters and centimeters"<<endl;
}

float mTOft(float met){
    return met/MTOFT;   //ft to meter conversion
}

float cmTOin(float cm){
    return cm/CMTOM/MTOFT*INTOFT;   //cm to m to ft to in
}

void outFtIn(float met, float cm){
    cout<<"You input "<<met<<" m and "<<cm<<" cm."<<endl;
    cout<<"This converts to "<<mTOft(met)<<" ft and "<<cmTOin(cm)<<" in"<<endl;
}
//END Functions for Problem 4
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
//END Functions for Problem 5
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
//END Functions for Problem 6
int remandr(int pennies,int denom){
    return pennies-numCoin(pennies,denom)*denom;
}
int numCoin(int pennies,int denom){
    return pennies/denom;   //Number of coins of that denomination
}
//END Functions for Problem 7
float wChill(float v, float t){
    return 35.74+0.6215*t-35.75*(pow(v,0.16))+0.4275*t*(pow(v,0.16));
}
//END Functions for Problem 8
bool shoot(float pk){
    if(frand()>pk)return true;
    return false;
}
float frand(){
    static float MAXRAND=pow(2,31)-1;
    return rand()/MAXRAND;
}

void shoot(bool aLive,float aPk,bool &cLive,bool &bLive){
    if(aLive){
        if(cLive)       cLive=shoot(aPk);
        else if(bLive)  bLive=shoot(aPk);
    }
}
//END Functions for Problem 9
unsigned char cnvMnth(string sMonth){
    if(sMonth=="January")   return 1;
    if(sMonth=="February")  return 2;
    if(sMonth=="March")     return 3;
    if(sMonth=="April")     return 4;
    if(sMonth=="May")       return 5;
    if(sMonth=="June")      return 6;
    if(sMonth=="July")      return 7;
    if(sMonth=="August")    return 8;
    if(sMonth=="September") return 9;
    if(sMonth=="October")   return 10;
    if(sMonth=="November")  return 11;
    return 12;

}
unsigned char cnvDay(string sDay){
    char day=sDay[0]-48;
    if(sDay[1]==',')return day;
    day*=10;
    day+=sDay[1]-48;
}
char gtMnthV(char month, unsigned int year){
    switch(month){
        case 1:{
           if(isLpYr(year))return 6;
           return 0;
        }
        case 2:{
           if(isLpYr(year))return 2;
           return 3;
        }
        case 3:case 11:{return 3;}
        case 4:case 7:{return 6;}
        case 5:{return 1;}
        case 6:{return 4;}
        case 8:{return 2;}
        case 9:case 12:{return 5;}
        case 10:{return 0;}
    }
}
char gtYrVal(unsigned int year){
    return year%100+(year%100)/4;
}
bool isLpYr(unsigned short year){
    return ((year%400==0))||((year%4==0)&&(!(year%100==0)));
}

char gtCentV(unsigned int year){
    year/=100;
    return 2*(3-year%4);
}
