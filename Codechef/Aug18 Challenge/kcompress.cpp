#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
ll getMid(ll s,ll e) 
{
    return s + (e - s) / 2;
}
ll MaxUtil(ll * st,ll ss,ll se,ll l, 
           ll r,ll node)
{
    if (l <= ss && r >= se)
        return st[node];
    if (se < l || ss > r)
        return -1;
    ll mid = getMid(ss, se);
     
    return max(MaxUtil(st, ss, mid, l, r, 
                       2 * node + 1),
               MaxUtil(st, mid + 1, se, l, 
                       r, 2 * node + 2));
}
void updateValue(ll arr[],ll * st,ll ss,ll se, 
                ll index,ll value,ll node)
{
    
     
    if (ss == se) 
    {   
        arr[index] = value;
        st[node] = value;
    }
    else {
            ll mid = getMid(ss, se);
             
            if (index >= ss && index <= mid)
                updateValue(arr, st, ss, mid, index, 
                            value, 2 * node + 1);
            else
                updateValue(arr, st, mid + 1, se, 
                            index, value, 2 * node + 2);
             
            st[node] = max(st[2 * node + 1], 
                       st[2 * node + 2]);
    }
    return;
}
ll getMax(ll * st,ll n,ll l,ll r)
{
    
 
    return MaxUtil(st, 0, n - 1, l, r, 0);
}
 
ll constructSTUtil(ll arr[],ll ss,ll se, 
                   ll* st,ll si)
{
    if (ss == se) 
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    ll mid = getMid(ss, se);
     
    st[si] = max(constructSTUtil(arr, ss, mid, st, 
                                 si * 2 + 1),
                 constructSTUtil(arr, mid + 1, se, 
                                 st, si * 2 + 2));
     
    return st[si];
}
 
ll * constructST(ll arr[],ll n)
{
    // Height of segment tree
    ll x = (ll )(ceil(log2(n)));
 
    // Maximum size of segment tree
    ll max_size = 2 * (ll )pow(2, x) - 1;
 
    // Allocate memory
    ll * st = new ll [max_size];
 
    // Fill the allocated memory st
    constructSTUtil(arr, 0, n - 1, st, 0);
 
    // Return the constructed segment tree
    return st;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		std::vector<pair<long long int,long long int>> v;
		long long int n,s,summ=0,i,low,high,mid,maxi,maxi1,maxi2,ans=-1,k,f=0,j;
		cin>>n>>s;
		long long int a[n],b[n];
		for(i=0;i<n;i++)
			b[i]=0;
		ll* st = constructST(b, n);
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				v.push_back(make_pair(a[i],i));
			}
		sort(v.begin(),v.end());
		low=0;
		high=n;
		while(low<=high)
		{
			summ=0;
			mid=(low+high)/2;
			//mid=k;
			for(i=0;i<n;i++)
			{
				b[i]=0;
				updateValue(b, st, 0, n - 1, i, 0, 0);
			}
			for(i=0;i<n;i++)
			{
				j=i;
				while(j<n && v[i].first==v[j].first)
					j+=1;
				vector<pair<ll,ll>> w; // {value, pos}
			    for(ll u = i; u < j; ++u) {
			    	ll kk=0;
			      ll l = max(kk, v[u].second - mid);
			      ll r = min(n-1, v[u].second + mid);
			      w.push_back({getMax(st,n,l, r) + 1, v[u].second});
			    }
			    for(ll u = 0; u < w.size(); ++u) {
			      ll vv = u + 1;
			      while(vv < w.size() && w[vv].second <= w[vv-1].second+mid) {
			        {
			        	vv += 1;  
			        }
			      }
			      ll val = 0;
			      for(ll x = u; x < vv; ++x) {
			        val = max(val, w[x].first);
			      }
			      for(ll x = u; x < vv; ++x) {
			        b[w[x].second] = val;
			        //sum += val;
			        updateValue(b, st, 0, n - 1, w[x].second, val, 0);
			      }
			      u = vv - 1;
			    }
			    i = j - 1;
			    //cout<<i<<"\n";
			    //cout<<"z\n";
			}
			for(i=0;i<n;i++)
				{
					//cout<<b[i]<<" ";
					summ+=b[i];
				}
				/*if(summ<=s)
					ans++;*/
			//cout<<"\n"<<mid<<" "<<summ<<"\n";
			if(summ>s)
				{
					high=mid-1;
				}
			else
				{
					ans=mid;
					low=mid+1;
				}
		}
		cout<<ans+1<<"\n";


	}
	return 0;
}