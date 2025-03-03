// 	Understand recursion by print something N times
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

void printMessage(int n)
{
    if(n <= 0)
    {
        return;
    }

    cout<<"Hello "<<endl;

    n--;
    printMessage(n);
}

int main () 
{
    int n;
    cin>>n;
    printMessage(n);
    
    return 0;
}

