//Print N to 1 using recursion
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

void printNtoOne(int n) 
{
    if(n <= 0)
    {
        return;
    }
    
    cout<<n<<endl;
    printNtoOne(n-1);

}

int main () 
{
    int n;
    cin>>n;
    printNtoOne(n);
    
    return 0;
}

