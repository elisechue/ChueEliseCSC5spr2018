/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 29, 2018 6:23PM
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>  //input output
#include <iomanip>  //formatting
#include <cmath>  //pow function
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
  
    //Draw the shape
    //Even backslash
    if(shape=='b'&&x%2==0){          //making sure its even
        for(int row=1;row<=x;row++){        //rows
            for(int col=1;col<=x;col++){    //columns
                if(row==col)cout<<col;      //diagonal output
                else cout<<" "; 
            }  
            cout<<endl;         //skips to next line for the slant
        }
    }
    //Odd backslash
    if(shape=='b'&&x%2!=0){          //making sure its odd
        for(int row=1;row<=x;row++){
            for(int col=1;col<=x;col++){
                if(row==col)cout<<x-col+1;  //x in relation to column 
                else cout<<" "; 
            }  
            cout<<endl;
        }
    }
    
    //Forward Slash
    //Even forward slash
    if(shape=='f'&&x%2==0){                
        for(int row=1;row<=x;row++){
            for(int col=1;col<=x;col++){
                if(col==x+1-row)cout<<col;
                else cout<<" "; 
            }  
            cout<<endl;
        }
    }
    //Odd forward slash
    if(shape=='f'&&x%2!=0){                 
        for(int row=1;row<=x;row++){
            for(int col=1;col<=x;col++){
                if(col==x+1-row)cout<<x-col+1;
                else cout<<" "; 
            }  
            cout<<endl;                         
        }
    }
    
    //X shape
    if(shape=='x'&&x%2==0){                 //Even
        for(int row=1;row<=x;row++){
            for(int col=1;col<=x;col++){
                if(row==col||col==x+1-row)cout<<col; //combine backslash and forward slash
                else cout<<" "; 
            }  
            cout<<endl;
        }
    }
    
    if(shape=='x'&&x%2!=0){                 //Odd
        for(int row=1;row<=x;row++){
            for(int col=1;col<=x;col++){
                if(row==col||col==x+1-row)cout<<x-col+1;
                else cout<<" "; 
            }  
            cout<<endl;
        }
    }
    
}

void problem2(){
    //Declare all Variables Here
    char d1,d2,d3,d4, star;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>d1>>d2>>d3>>d4;

    //Histogram Here
    cout<<d4<<" ";
    if(d4>=48&&d4<=57){  //used ASCII table 0-9 cause theyre characters
        for(star=1;star<=d4-48;star++){  //in relation to star, make sure to set
        cout<<'*';                   //ACII value to 0 in stead of looping 48 times
        }
    }else cout<<"?";
    cout<<endl;
    
    cout<<d3<<" ";
    if(d3>=48&&d3<=57){
        for(star=1;star<=d3-48;star++){
        cout<<'*';
        }
    }else cout<<"?";
    cout<<endl;
    
    cout<<d2<<" ";
    if(d2>=48&&d2<=57){
        for(star=1;star<=d2-48;star++){
        cout<<'*';
        }
    }else cout<<"?";
    cout<<endl;
    
    cout<<d1<<" ";
    if(d1>=48&&d1<=57){
        for(star=1;star<=d1-48;star++){
        cout<<'*';
        }
    }else cout<<"?"; 
    cout<<endl;
}

void problem3(){
    //Declare all Variables Here
    char n1000s,n100s,n10s,n1s;
    unsigned short number;
    string english;             //combine the digits into one word
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    n1000s=number/1000;
    number-=n1000s*1000;
    n100s=number/100;
    number-=n100s*100;
    n10s=number/10;
    number-=n10s*10;
    n1s=number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    switch(n1000s){
        case 3:english+="Three ";break;
        case 2:english+="Two ";break;
        case 1:english+="One ";break;
    }
    if(n1000s!=0)english+="Thousand ";
    switch(n100s){
        case 9:english+="Nine ";break;
        case 8:english+="Eight ";break;
        case 7:english+="Seven ";break;
        case 6:english+="Six ";break;
        case 5:english+="Five ";break;
        case 4:english+="Four ";break;
        case 3:english+="Three ";break;
        case 2:english+="Two ";break;
        case 1:english+="One ";break;
    }
    if(n100s!=0)english+="Hundred ";
    switch(n10s){
        case 9:english+="Ninety ";break;
        case 8:english+="Eighty ";break;
        case 7:english+="Seventy ";break;
        case 6:english+="Sixty ";break;
        case 5:english+="Fifty ";break;
        case 4:english+="Forty ";break;
        case 3:english+="Thirty ";break;
        case 2:english+="Twenty ";break;
        case 1:{
            if(n1s==0)english+="Ten ";
            else if(n1s==1)english+="Eleven ";
            else if(n1s==2)english+="Twelve ";
            else if(n1s==3)english+="Thirteen ";
            else if(n1s==4)english+="Fourteen ";
            else if(n1s==5)english+="Fifteen ";
            else if(n1s==6)english+="Sixteen ";
            else if(n1s==7)english+="Seventeen ";
            else if(n1s==8)english+="Eighteen ";
            else if(n1s==9)english+="Nineteen ";
        }break;
    }
    if(n10s!=1){
        switch(n1s){
            case 9:english+="Nine ";break;
            case 8:english+="Eight ";break;
            case 7:english+="Seven ";break;
            case 6:english+="Six ";break;
            case 5:english+="Five ";break;
            case 4:english+="Four ";break;
            case 3:english+="Three ";break;
            case 2:english+="Two ";break;
            case 1:english+="One ";break;
        }
    }
    //Output the check value
    
    cout<<english<<"and no/100's Dollars"<<endl;   
}

void problem4(){
    //Declare all Variables Here
    char package,bestPac;
    unsigned short hours;
    float aCost,bCost,cCost;    //compare each package
    float bestCo,savings; //
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    //A pack
    if(hours<=10){
        aCost=16.99f;
    }else if(hours>10&&hours<=20){
        aCost=16.99f+((hours-10)*0.95f);
    }else if(hours>20){
        aCost=16.99f+((10)*0.95f)+((hours-20)*0.85f);
    }
    //B pack
    if(hours<=20){
        bCost=26.99f;
    }else if(hours>20&&hours<=30){
        bCost=26.99f+((hours-20)*0.74f);
    }else if(hours>30){
        bCost=26.99f+((10)*0.74f)+((hours-30)*0.64f);
    }
    //C Pack
    cCost=36.99f;
    //Savings comparison
    if(aCost<bCost&&aCost<cCost){bestCo=aCost;bestPac='A';}
    if(bCost<aCost&&bCost<cCost){bestCo=bCost;bestPac='B';}
    if(cCost<bCost&&cCost<aCost){bestCo=cCost;bestPac='C';}
    
    //Output the Charge
    cout<<fixed<<setprecision(2)<<showpoint;
    if(package=='a'||package=='A'){savings=aCost-bestCo;cout<<"$"<<aCost;}  
    if(package=='b'||package=='B'){savings=bCost-bestCo;cout<<"$"<<bCost;}   
    if(package=='c'||package=='C'){savings=cCost-bestCo;cout<<"$"<<cCost;} 

    //Output the cheapest package and the savings
    cout<<" "<<bestPac<<" "<<"$"<<savings<<endl;
}

void problem5(){
    //Declare all Variables Here
    float payRate, regPay, tahPay, doubPay, grssPay;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
  if(hrsWrkd<=20){
        regPay=payRate*hrsWrkd;
    }else if (hrsWrkd>20)regPay=payRate*20;
    if(hrsWrkd>20&&hrsWrkd<=40){
        tahPay=(hrsWrkd-20)*(payRate*1.5);
    }else if (hrsWrkd>40)tahPay=20*1.5*payRate; //the 20 is hrsWrkd in time&half zone
    if(hrsWrkd>40){
        doubPay=(hrsWrkd-40)*payRate*2;
    }
    
    grssPay=regPay+tahPay+doubPay;
    //Output the check
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<grssPay<<endl;
}

void problem6(){
    //Declare all Variables Here
    float x,fx,term,facto,count;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    facto=1;
    count=2;
    term=1;
          
    //Calculate Sequence sum here
    for(int i=1,sign=-1;i<=nterms;i++,term+=2){ //factorial calculation
        sign*=-1;
        if(i>1){
            for(int loop=1;loop<=2;loop++,count++)facto*=count; //looping for add/subtract
        }
        fx+=pow(x,term)/facto*sign;
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<fx<<endl;
}
