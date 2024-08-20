// 1 Write a program to calculate the reverse of a given positive integer using recursion1
//   678 =876
#include<iostream>
#include <cmath>
#include <math.h>
using namespace std;
int numberOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + numberOfDigits(n / 10);
}

// Function to calculate the reverse of a number using recursion
int reverseNumber(int n, int digits) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) * pow(10, digits - 1) + reverseNumber(n / 10, digits - 1);
}


int main()
{
    int n;
    cin>>n;
    int digit= numberOfDigits(n);
    cout<<reverseNumber(n,digit);

}