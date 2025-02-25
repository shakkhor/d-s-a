//Pattern-18: Alpha-Triangle Pattern

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void increasingAlphabet(int n) 
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
       c+= n-i-1;

        for (int j = 0; j <= i; j++)
        {
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    
}

int main () 
{
    int n;
    cin>>n;

    increasingAlphabet(n);
    
    return 0;
}

