#include<bits/stdc++.h>
using namespace std;
void prime_num(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Not a prime number";
    }
}
int main()
{
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    prime_num(n);
    return 0;
}
