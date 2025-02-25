//Pattern - 11: Binary Number Triangle Pattern


#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void binaryPattern(int n) {
    int count = 1;

    for(int i = 1; i<=n; i++) {
        count = i;

        for (int j = 0; j <i; j++ ) {
            cout<<count%2;
            count++;
        }

        cout<<endl;
    }
}

int main () {
    int n;
    cin>>n;

   binaryPattern(n);
    
    return 0;
}