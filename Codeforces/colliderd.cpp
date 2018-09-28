#include<bits/stdc++.h>
using namespace std;
#define MAXN   1000001
 
// stores smallest prime factor for every number
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve(int n)
{
    spf[1] = 1;
    for (int i=2; i<n; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<n; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<n; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<n; j+=i)
 
                // marking spf[j] if it is not 
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
int main()
{
	int n,mi,val,i;
	cin>>n>>mi;
	int aa[n+1];
	sieve(n+10);
	for(i=0;i<=n;i++)
		aa[i]=0;
	char c;
	map<int,int>m;
	map<int,int>mb;
	std::vector<int> v;
	std::vector<int> :: iterator it;
	for(i=0;i<mi;i++)
	{
		cin>>c;
		cin>>val;
		if(c=='+')
		{
			if(val==1)
			{
				m[1]=1;
				mb[1]=1;
			}
			if(i==0)
			{
				aa[val]=1;
				cout<<"Success\n";
				v=getFactorization(val);
				for(it=v.begin();it!=v.end();it++)
				{
					m[*it]=1;
					mb[*it]=val;
				}
			}
			else if(aa[val]==1)
			{
				cout<<"Already on\n";
			}
			else
			{
				v=getFactorization(val);
				for(it=v.begin();it!=v.end();it++)
				{
					if(m[*it]==1)
					{
						cout<<"Conflict with "<<mb[*it]<<"\n";
						break;
					}
				}
				if(it!=v.end())
					continue;
				aa[val]=1;
				cout<<"Success\n";
				for(it=v.begin();it!=v.end();it++)
				{
					m[*it]=1;
					mb[*it]=val;
				}
			}
		}
		else
		{
			if(aa[val]==1)
			{
				aa[val]=0;
				cout<<"Success\n";
				v=getFactorization(val);
				for(it=v.begin();it!=v.end();it++)
				{
					m[*it]=0;
					mb[*it]=0;
				}
			}
			else
			{
				cout<<"Already off\n";
			}
		}
	}
	return 0;
}