// Write a program to calculate the sum of the digits of a given positive integer using
// recursion1     678 ans =6+7+8 = 21;
#include<iostream>
using namespace std;
int sum =0;
int sumofDigit(int n)
{
    if(n==0)return 0;
    
    int m =n%10;
    sumofDigit(n/10);
    return sum+=m;
}
int sumofDigits(int n)
{
    if(n==0)return 0;
    return n%10+sumofDigits(n/10);
}
int main()
{
    int n;
    cout<<"enter the number you want sum of the digits "<<endl;
    cin>>n;
    int ans = sumofDigits(n);
    cout<<ans<<" "<<endl;

}