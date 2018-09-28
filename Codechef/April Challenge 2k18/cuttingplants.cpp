#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<set>
#include<map>
int getMid(int s, int e) {  return s + (e -s)/2;  }
long long int st2util(long long int *st, int ss, int se, int qs, int qe, int i)
{
    // If segment of this node is a part of given range, then return
    //  the min of the segment
    if (qs <= ss && qe >= se)
        return st[i];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return INT_MIN;
 
    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    return max(st2util(st, ss, mid, qs, qe, 2*i+1),
                  st2util(st, mid+1, se, qs, qe, 2*i+2));
}
long long int st1util(long long int *st, int ss, int se, int qs, int qe, int i)
{
    // If segment of this node is a part of given range, then return
    //  the min of the segment
    if (qs <= ss && qe >= se)
        return st[i];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return INT_MAX;
 
    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    return min(st1util(st, ss, mid, qs, qe, 2*i+1),
                  st1util(st, mid+1, se, qs, qe, 2*i+2));
}
long long int constructSTUtil1(long long int arr[], int ss, int se, long long int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  min(constructSTUtil1(arr, ss, mid, st, si*2+1),
                     constructSTUtil1(arr, mid+1, se, st, si*2+2));
    return st[si];
}
long long int constructSTUtil2(long long int arr[], int ss, int se, long long int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  max(constructSTUtil2(arr, ss, mid, st, si*2+1),
                     constructSTUtil2(arr, mid+1, se, st, si*2+2));
    return st[si];
}
long long int *constructST(long long int arr[], int n,int y)
{
    int x = (int)(ceil(log2(n))); 
    int max_size = 2*(int)pow(2, x) - 1; 
 
    long long int *st = new long long int[max_size]; 
    if(y==1)
    constructSTUtil1(arr, 0, n-1, st, 0);
	else if(y==2)
		constructSTUtil2(arr, 0, n-1, st, 0);
    return st;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;	
		cin>>n;
		multimap<long long int ,long long int,greater <long long int> >mp;
		multimap<long long int ,long long int>::iterator itt;
		
		long long int a[n],b[n],i,j,top,l,r,mini,maxi,flag=0,count2=0,count1=0;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		for(i=0;i<n;i++)
			{
				cin>>b[i];
				if(flag==0 && b[i]>a[i])
					flag=1;
			}
		if(flag==1)
		{
			cout<<"-1\n";
			continue;
		}
		long long int *st1 = constructST(a, n,1);
		long long int *st2 = constructST(b,n,2);
		count1=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>b[i])
			mp.insert(pair<long long int ,long long int>(b[i],i));
			if(a[i]==b[i])
				count2++;
	
		}
		if(count2==n)
		{
			cout<<"0\n";
			continue;
		}
		itt=mp.begin();
		top=itt->first;
		l=itt->second;
		count1++;
		itt++;
		for(;itt!=mp.end();itt++)
		{
			if(top==itt->first)
			{
				r=itt->second;
				maxi=st2util(st2,0,n-1,l,r,0);
				if(maxi>top)
					{
						l=r;
						count1++;
						continue;
					}
				else
				{
					mini=st1util(st1,0,n-1,l,r,0);
					if(mini>=top)
					{
						l=r;
						continue;
					}
					else 
					{
						l=r;
						count1++;
						continue;
					}
				}

			}
			else
			{
				top=itt->first;
				count1++;
				l=itt->second;
			}
		}
		cout<<count1<<"\n";
		mp.clear(); 
	}
	return 0;
}