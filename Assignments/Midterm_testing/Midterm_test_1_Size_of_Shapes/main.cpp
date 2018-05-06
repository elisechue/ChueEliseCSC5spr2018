/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 26, 2018 5:23 PM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    //x-col+1
  
    //Draw the shape
    //Even backslash
    if(shape=='b'&&x%2==0){          //making sure its even
        for(int row=1;row<=x;row++){
            for(int col=1;col<=x;col++){
                if(row==col)cout<<col;
                else cout<<" "; 
            }  
            cout<<endl;   //skips to next line for the slant
        }
    }
    //Odd backslash
    if(shape=='b'&&x%2!=0){          //making sure its odd
        for(int row=1;row<=x;row++){
            for(int col=1;col<=x;col++){
                if(row==col)cout<<x-col+1;
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
                if(row==col||col==x+1-row)cout<<col;
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
    //Exit
    return 0;
}
