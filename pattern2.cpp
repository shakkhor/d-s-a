//Pattern-2: Right-Angled Triangle Pattern
#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
        {
           cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}