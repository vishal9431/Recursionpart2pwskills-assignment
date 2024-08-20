// Given an integer num, return the number of steps to reduce it to 'ero2 In one step, if the
// current number is even, you have to divide it by 2, otherwise, you have to subtract )
// from it2 [Leetcode )3423
#include<iostream>
using namespace std;
 int numberOfSteps(int num) { // number of steps to reach 0
        if(num==0) return 0; // base case 1
        if(num==1) return 1; // base case 2
        return numberOfSteps(num/2)+(num%2==0?1:2); // recursive case: add 1 if num is even, else add 2
    }
int main()
{
    int n;
    cin>>n;
    cout<<numberOfSteps(n);
}
