#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //Declare Variables
    
    int N,arr[N];
    cin>>N;
    for(int n=0;n<N;n++){
        cin>>arr[n];
    }
    int J=N;
    for(int i=0;i<N;i++){
        cout<<arr[J-1]<<" ";
        J--;
    }
  
    return 0;
}
