//Pattern - 20: Symmetric-Butterfly Pattern

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void crownPattern(int n) {


    for(int i = 1; i <= n; i++) {
        for (int j = 1; j<= i; j++) {
            cout<<"*";
        }

        for (int j = 1; j<= 2*n -2*i; j++) {
            cout<<" ";
        }

        for (int j = i; j>=1 ; j--) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = n-1; i >=1 ; i--) {
        
        for (int j = i; j>=1 ; j--) {
            cout<<"*";
        }

        for (int j = 1; j<= 2*n -2*i; j++) {
            cout<<" ";
        }

        for (int j = 1; j<= i; j++) {
            cout<<"*";
        }

        
        cout<<endl;
    }



    
}

int main () 
{
    int n;
    cin>>n;

    crownPattern(n);
    
    return 0;
}

