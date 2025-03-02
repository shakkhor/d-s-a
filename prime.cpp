//Check if a number is prime or not


#include<stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

template <typename T>
void printVector(const vector<T>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

bool checkPrime(int n)
{
    int k = sqrt(n);

    if(n < 2) 
    {
        return false;
    }

    if(n == 2 || n == 3) 
    {
        return true;
    }

    for(int i = 2; i <=k; i++) {
        if(n%i == 0)
        {
            return false;
        }
    }


    return true;

}


int main () 
{
    int n;
    cin>>n;

   cout<<checkPrime(n);
    
    return 0;
}

