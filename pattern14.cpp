//Pattern-14: Increasing Letter Triangle Pattern


#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void increasingAlphabet(int n) {
    char c  = 'A';
    for(int i = 1; i <= n; i++) {
        char c  = 'A';
        for (int j = 1; j<= i; j++) {
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


