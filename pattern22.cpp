//Pattern - 22: The Number Pattern

#include<stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

void hollowRectangle(int n) 
{
    int k  = 1;

    for(int i = 1; i<n*2; i++) 
    {

        for(int j = 1; j <n*2; j++) 
        {
          int x = min(i,j);
          int y = max(i,j);
          int distance1 = abs(n - x) + 1;
          int distance2 = abs(n - y) + 1;
          cout<<max(distance1, distance2)<<" ";
        }
        cout<<endl;
    }
    
}

int main () 
{
    int n;
    cin>>n;

    hollowRectangle(n);
    
    return 0;
}

