//Factorial of N numbers

#include<stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

template <typename T>
void printVector(const vector<T>& v) 
{
    for (const auto& elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int sum(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * sum(n - 1);
}

int main () 
{
    int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}

