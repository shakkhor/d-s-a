// GCD euclidian 

#include<stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
int fingGcd(int n1, int n2)
{
   while(n1 > 0 && n2> 0) 
   {
        if(n1 > n2) 
        {
            n1 = n1 % n2;
        }
        else 
        {
            n2 = n2 % n1;
        }

        if(n1 == 0) 
        {
            return n2;
        }
   }

   return n1;
} 

int main () 
{
    int n;
    cin>>n;

    cout<<fingGcd(13, 15);
    
    return 0;
}

