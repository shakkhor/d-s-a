//Reverse a given Array

#include<stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

template <typename T>
void printVector(const vector<T> v) 
{
    for (const auto elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;
}

template <typename T>
vector<T> takeVectorInput(int n) {
    vector<T> v(n);
    for (auto& elem : v) {
        cin >> elem;
    }
    return v;
}

template <typename T>
vector<T> takeVectorInput() {
    vector<T> v;
    string line;

    if (cin.peek() == '\n') cin.ignore(); 
    getline(cin, line);
    stringstream ss(line);
    T value;
    
    while (ss >> value) {
        v.push_back(value);
    }
    return v;
}

template <typename T>
vector<T> reverseArray(vector<T> arr, int start, int end) 
{
    if(start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }

    return arr;

}

int main () 
{
    int n;
    vector<int> k = takeVectorInput<int>();
    k = reverseArray(k, 0, k.size()-1);

    printVector(k);
    
    return 0;
}

