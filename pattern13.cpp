//Pattern - 13: Increasing Number Triangle Pattern

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void increasingNumberPattern(int n) {
    int count = 1;

    for(int i = 1; i<=n; i++) {

        for (int j = 0; j <i; j++ ) {
            cout<<count++<<" ";
        }

        cout<<endl;
    }
}

int main () {
    int n;
    cin>>n;

    increasingNumberPattern(n);
    
    return 0;
}