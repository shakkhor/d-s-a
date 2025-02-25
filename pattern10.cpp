//Pattern - 10: Half Diamond Star Pattern

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i < n*2; i++) {
       
        int starsToPrint = i;

        if(starsToPrint > n) {
            starsToPrint = 2*n - i;
        }
        for(int j = 0; j < starsToPrint; j++) {
            cout<<"*";
        }

        cout<<endl;
    }
    
    return 0;
}