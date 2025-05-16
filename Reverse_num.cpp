#include<bits/stdc++.h>
using namespace std;
void rev_num(int n)
{
    int rev=0;
    while(n>0)
    {
        int l_d=n%10;
        rev=rev*10+l_d;
        n=n/10;
    }
    cout<<rev;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    rev_num(n);
    return 0;
}
