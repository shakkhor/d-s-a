//Pattern - 17: Alpha-Hill Pattern

#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void increasingAlphabet(int n) 
{
    for(int i = 1; i <= n; i++) 
    {
        char c  = 'A';
       for (int j = 1; j <= n - i; j++)
       {
            cout<<" ";
       }

       for(int k = 1; k <= i*2 - 1; k++) 
       {
            cout<<c;

            if(k >= i) 
            {
                c--;
            }
            else 
            {
                c++;
            }
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

