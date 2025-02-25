//Pattern - 8: Inverted Star 

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = n; i >= 1; i--) {
        for(int j = i; j<n; j++) {
            cout<<" ";
        }
        
        for(int k = 1; k < i * 2; k++) {
            cout<<"*";
        }
        

        cout<<endl;
    }
   
    
    return 0;
}