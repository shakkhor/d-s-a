//Count digits in a number

#include<stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
void countDigits(int n)
{
    int cnt = (int)(log10(n)+1);   
    cout<<cnt;
} 

int main () 
{
    int n;
    cin>>n;

    countDigits(n);
    
    return 0;
}

