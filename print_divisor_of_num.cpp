#include<bits/stdc++.h>
using namespace std;
void print_divisors(int n)
{
    vector<int> vec;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            if((n/i)!=i)
            {
                vec.push_back(n/i);
            }
        }
    }
    sort(vec.begin(),vec.end());
    for(auto it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    print_divisors(n);
    return 0;
}
