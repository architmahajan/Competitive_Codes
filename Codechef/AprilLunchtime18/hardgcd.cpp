#include<iostream>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if (a == 0 || b == 0)
       return 0;
 
    if (a == b)
        return a;
 
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,x,i;
        cin>>n>>k;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        x=a[0];
        for(i=1;i<n;i++)
        {
            x=gcd(x,a[i]);
        }
        if(x>k)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<n;i++)
            a[i]/=x;
        x=a[0];
        for(i=1;i<n;i++)
        {
            x=gcd(x,a[i]);
        }
        if(x==1)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}