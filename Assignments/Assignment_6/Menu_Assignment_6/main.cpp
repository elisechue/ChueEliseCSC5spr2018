/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 28, 2018, 8:35 PM
 * Purpose: menu using functions for Assigment 6
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();

//Problem 1 funct.prototype
void fstLst2(); 
//Problem 2 funct.prototype
void cntNum2();
//Problem 3 funct.prototype
void swpFrBk();
//Problem 4 funct.prototype
void fstLs2V();
//Problem 5 funct.prototype
void swFrBkV();
//Problem 6 functions
void readFi(ifstream &,char [],int &);
void writeFi(ofstream &,char [],char [],int);
int score(char [],char [],int);


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
            default:cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
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
    cout<<"All problems are from Savitch 9thEd Array concepts chapters"<<endl;
    cout<<"others are from the Gaddis Textbook."<<endl;
    cout<<"Type 1 for Savitch_9thEd_Chap7_PracProg1_FirstLast2"<<endl;
    cout<<"Type 2 for Savitch_9thEd_Chap7_PracProg2_CountNum2s"<<endl;
    cout<<"Type 3 for Savitch_9thEd_Chap7_PracProg3_SwapFrontBack"<<endl;
    cout<<"Type 4 for Savitch_9thEd_Chap8_PracProg4_FirstLast2_Vectors"<<endl;
    cout<<"Type 5 for Savitch_9thEd_Chap8_PracProg5_swapFrontBack_Vectors"<<endl;
    cout<<"Type 6 for Gaddis_9thEd_Chap_Prob10_DriversTestScore_V2 "<<endl;

    
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 1
void prblm1(){
    cout<<endl;
    cout<<"You have chosen Savitch_9thEd_Chap7_PracProg1_FirstLast2"<<endl;
    fstLst2();
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 2
void prblm2(){
    cout<<endl;
    cout<<"You have chosen Savitch_9thEd_Chap7_PracProg2_CountNum2s"<<endl;
    cntNum2();
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 3
void prblm3(){
    cout<<endl;
    cout<<"You have chosen Savitch_9thEd_Chap7_PracProg3_SwapFrontBack"<<endl;
    swpFrBk();
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 4
void prblm4(){
    cout<<endl;
    cout<<"You have chosen Savitch_9thEd_Chap8_PracProg4_FirstLast2_Vectors"
            <<endl;
    fstLs2V();
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 5
void prblm5(){
    cout<<endl;
    cout<<"You have chosen Savitch_9thEd_Chap8_PracProg5_swapFrontBack_Vectors"
            <<endl;
    swFrBkV();
}
//000000000011111111112222222222333333333344444444445555555555666666666677777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Problem 6
void prblm6(){
    cout<<endl;
    cout<<"You have chosen Gaddis_9thEd_Chap_Prob10_DriversTestScore_V2 "<<endl;
         //Declare all Variables, no doubles
    const int NQSTNS=50;    //num of questions
    int nqstns;         //number of questions from file
    char key[NQSTNS],answers[NQSTNS];   //answers and key
    char keyFiNm[]="key.dat";
    string ansFiNm="answer.dat";
    char scoFiNm[]="score.dat";   //Score file name
    ifstream keyFi,ansFi;
    ofstream scoreFi;
    
    //Input or initialize values
    keyFi.open(keyFiNm);
    ansFi.open(ansFiNm.c_str());
    scoreFi.open(scoFiNm);
    
    //Map/Process/Calculations, Inputs to Outputs
    readFi(keyFi,key,nqstns);               //replaced the const int NQSTNS
    readFi(ansFi,answers,nqstns);
    writeFi(scoreFi,key,answers,nqstns);
    int scrs=score(answers,key,nqstns);
    
    //Display Outputs
    cout<<"The Score Received = "<<100.0f*scrs/nqstns<<"%"<<endl;
    
    //Close Files
    keyFi.close();
    ansFi.close();
    scoreFi.close();
}

//******************************************************************************
//******************************************************************************
//                MEMORIAL DAY FUNCTION CLOSEOUT
//Problem 1         ++++++++++++++++++++++++
void fstLst2(){
    int SIZE;
    int array[SIZE];
    cout<<"Input a size for the array"<<endl;
    cin>>SIZE;
    cout<<"Input integer(s) to be stored in the array"<<endl;
    for(int n=0;n<SIZE;n++){
        cin>>array[n];
    }
    if(array[0]==2||array[SIZE-1]==2)cout<<"true"<<endl;  //this returns/says true (just "return true" would cout nothing)
    else cout<<"false"<<endl;
}
//Problem 2         ++++++++++++++++++++++++
void cntNum2(){
    int SIZE;
    int array[SIZE];
    cout<<"Input a size for the array"<<endl;
    cin>>SIZE;
    cout<<"Input integer(s) to be stored in the array"<<endl;
    int count=0;
    for(int n=0;n<SIZE;n++){        //include count in same for loop to check as we go
        cin>>array[n];
        if(array[n]==2)count++;
    }
    cout<<"There are "<<count<<" twos."<<endl;
}
//Problem 3         ++++++++++++++++++++++++
void swpFrBk(){
    int SIZE; 
    cout<<"Input a size for the array"<<endl;
    cin>>SIZE;
    int array[SIZE]; //????? after the input??? sounds fake but okay
    cout<<"Input integer(s) to be stored in the array"<<endl;
    for(int n=0;n<SIZE;n++){       
        cin>>array[n];
    }
    int temp=array[0];
    array[0]=array[SIZE-1];
    array[SIZE-1]=temp;
    cout<<"Swapped integers are: ";
    cout<<array[0]<<" "<<array[SIZE-1]<<endl;  //we're only swapping the first and last integer
}
//Problem 4         ++++++++++++++++++++++++
void fstLs2V(){
    vector <int> vector;
    char repeat;
    int x=0;
    int input;
    
    do{
        cout<<"Enter an integer for the vector"<<endl;
        cin>>input;
        vector.push_back(input);x++;          //makes room for more integers as we add on x this acts like our SIZE in the array version
        cout<<"Do you want to add another integer? Y/N"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
    if(vector[0]==2||vector[x-1]==2)cout<<"true"<<endl;  //this returns/says true (just "return true" would cout nothing)
    else cout<<"false"<<endl;
}
//Problem 5         ++++++++++++++++++++++++
void swFrBkV(){
    vector <int> vect;
    char repeat;
    int x=0;
    int input;
    
    do{
        cout<<"Enter an integer for the vector"<<endl;
        cin>>input;
        vect.push_back(input);x++;          //makes room for more integers as we add on x
        cout<<"Do you want to input more integers? Y/N"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
   
    cout<<"first element: "<<vect[0]<<endl;
    cout<<"last element: "<<vect[x-1]<<endl;
    int temp=vect[0];
    vect[0]=vect[x-1];
    vect[x-1]=temp;
   
    cout<<"NEW first element: "<<vect[0]<<endl;
    cout<<"NEW last element: "<<vect[x-1]<<endl;
    
}
//Problem 6         ++++++++++++++++++++++++
void readFi(ifstream & in,char keyAns[],int &cnt){
    cnt=0;
    char kyAnsVl;
    while(in>>kyAnsVl){
        keyAns[cnt++]=kyAnsVl;
    }
}

void writeFi(ofstream & out,char key[],char ans[],int size){
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])out<<i<<". Correct"<<endl;
        else out<<i<<". Incorrect"<<endl;
    }
}
int score(char ans[],char key[],int size){
    int correct=0;
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])correct++;
    }
    return correct;
}