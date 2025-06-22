#include<bits/stdc++.h>
using namespace std;
void armstrong_num(int n)
{
    int orig=n;
    int l_d;
    int sum=0;
    while(n>0)
    {
        l_d=n%10;
        sum=sum+(l_d*l_d*l_d*l_d);
        n=n/10;
    }
    cout<<sum<<endl;
    if(orig==sum)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not a armstrong number";
    }
}
int main()
{
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    armstrong_num(n);
    return 0;
}
