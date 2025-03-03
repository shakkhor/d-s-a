//Print 1 to N using recursion

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

void printOneToN(int n) 
{
    if(n <= 0) 
    {
        return;
    }

    if(n > 1) 
    {
        printOneToN(n - 1);
    }
    cout<<n<<endl;
}

int main () 
{
    int n;
    cin>>n;
    printOneToN(n);
    
    return 0;
}

