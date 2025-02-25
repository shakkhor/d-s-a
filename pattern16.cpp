//Pattern - 16: Alpha-Ramp Pattern

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void increasingAlphabet(int n) {
    char c  = 'A';
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j<= i; j++) {
            cout<<c<<" ";
        
        }
        c++;
        cout<<endl;
    }  
}

int main () {
    int n;
    cin>>n;

    increasingAlphabet(n);
    
    return 0;
}

