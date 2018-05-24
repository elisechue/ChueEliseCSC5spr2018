/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 24, 2018, 11:20 AM
 * Purpose:  Variable Array Practice
 */

//System Libraries Here
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int n,query,k,i,j;
cout<<"enter number of indexes and queries"<<endl;
    cin>>n>>query;
    vector<vector<int> >arr(n);
    for (i=0; i<n; ++i){
        cout<<"input size of array(s)"<<endl;
        cin>>k;
        arr[i].resize(k);       //pulled from hackerrank community
        for(j=0 ; j<k; ++j){
            cout<<"input elements of this array"<<endl;
            cin>>arr[i][j];
        }       
    }

    for(int x=0; x<query; ++x){
        cout<<"now input the queries you're looking for"<<endl;
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }  
        
    return 0;
}