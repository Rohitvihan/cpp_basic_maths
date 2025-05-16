#include<bits/stdc++.h>
using namespace std;
void countt_digits(int n)
{
    int count=0;
    while(n>0)
    {
        int l_d=n%10;
        count+=1;
        n=n/10;
    }
    cout<<count;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    countt_digits(n);
    return 0;
}
