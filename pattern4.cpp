//Pattern - 4: Right-Angled Number Pyramid - II

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
        {
           cout<<i;
        }
        cout<<endl;
        
    }
    return 0;
}