#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2)
{
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int n1,n2;
    cout<<"Enter the number n1:";
    cin>>n1;
    cout<<"Enter the number n2:";
    cin>>n2;
    int res=gcd(n1,n2);
    cout<<"The gcd is:"<<res;
    return 0;
}
