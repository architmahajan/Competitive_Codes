#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define MAXN   1000001
int spf[MAXN],count1=0;
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
 
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
set<int> getFactorization(int x)
{
    set<int> ret;
    while (x != 1)
    {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
int main()
{
	int t,i;
	cin>>t;
	sieve();
	while(t--)
	{
		count1=0;
		int n,m;
		cin>>n>>m;
		for(i=n;i<m;i++)
		{
			set <int> p = getFactorization(i);
			count1+=p.size();
		}
		cout<<count1<<endl;
	}
	return 0;
}