//Pattern-15: Reverse Letter Triangle Pattern

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void increasingAlphabet(int n) {
    char c  = 'A';
    for(int i = n; i >=1; i--) {
        char c  = 'A';
        for (int j = i; j >= 1; j--) {
            cout<<c++<<" ";
        
        }
        cout<<endl;
    }  
}

int main () {
    int n;
    cin>>n;

    increasingAlphabet(n);
    
    return 0;
}