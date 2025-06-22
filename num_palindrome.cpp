#include<bits/stdc++.h>
using namespace std;
void palindrome(int n)
{
    int original=n;
    int rev_num=0;
    int l_d;
    while(n>0)
    {
        l_d=n%10;
        rev_num=(rev_num*10)+l_d;
        n=n/10;
    }
    if(rev_num==original)
    {
        cout<<"Palindrome number";
    }
    else
    {
        cout<<"Not a a palindrome";
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    palindrome(n);
    return 0;
}
