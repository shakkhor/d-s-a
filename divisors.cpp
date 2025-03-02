//Print all Divisors of a given Number

#include<stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
vector<int> findDivisors(int n)
{
    int k = sqrt(n);
    vector<int> ans;

    for(int i = 1; i <= k; i++) 
    {
        if(n % i == 0)
        {
            ans.push_back(i);

            if(i != n/i) 
            {
                ans.push_back(n/i);
            }
        }
    }

    return ans;
}

template <typename T>
void printVector(const vector<T>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

int main () 
{
    int n;
    cin>>n;

    printVector(findDivisors(9));
    
    return 0;
}

