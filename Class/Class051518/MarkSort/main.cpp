/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 15, 2018, 10:00 AM
 * Purpose:  investigate sorts
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void fillAry(int [],int);
void prntAry(int [],int,int);
void mrkSort(int [],int);
void swap(int &,int &);
void swapLgc(int &,int &);
void smlList(int [],int, int);
int binSrch(int [],int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables, no doubles
    const int SIZE=100;
    int array[SIZE];
    
    //Input or initialize values
    fillAry(array,SIZE);
    
    //print the array
    prntAry(array,SIZE,10);
    
    //Map/Process/Calculations, Inputs to Outputs
        //got rid of the swap example cuz this function replaces it
    mrkSort(array,SIZE);
    
    //Display Outputs
    prntAry(array,SIZE,10);
    
    //find an element
    int find=50;
    cout<<find<<" was found at index = "
            <<binSrch(array,SIZE,find)<<endl;   //binary search only works after sort

    //Exit Program!
    
    return 0;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10-99]
    }
}
void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlList(a,n,i);
    }
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swapLgc(int &a,int &b){
    a=a^b;          //exclusive ORs
    b=a^b;
    a=a^b;
}
void smlList(int a[],int n, int pos){
    for(int i=pos+1;i<n;i++){
        if(a[i]<a[pos])swap(a[i],a[pos]);
    }
}
int binSrch(int a[],int n, int val){
    //Declare and Initialize variables
    int beg,end,middle;
    beg=0;
    end=n;
    //Loop and find
    do{
        middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]>val){
            end=middle-1;
        }else{
            beg=middle+1;
        }
    }while(end>=beg);
    return -1;
}