#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
int main()
{
    long long int n,q,l,r,i,x,y,j;
    cin>>n>>q;
    long long int a[n+1],mat[n+1][31],matrix[n+1][31],ans[31],xx,xxx,xxxx,aaaa,mul,z;
    for(i=0;i<31;i++)
        matrix[0][i]=0;
    for(i=1;i<=n;i++)
        {
            cin>>a[i];
            x=a[i];
            z=30;
            while(x>0)
            {
                mat[i][z--]=x%2;
                x/=2;
            }
            while(z>=0)
            {
                mat[i][z--]=0;
            }
            for(j=0;j<31;j++)
            {
                if(mat[i][j]==1)
                matrix[i][j]=matrix[i-1][j]+1;
                else
                {
                    matrix[i][j]=matrix[i-1][j];
                }

            }
        }/*
        for(i=0;i<=n;i++)
        {
            for(j=0;j<31;j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }*/
        while(q--)
        {
            cin>>l>>r;
            aaaa=0;
            xx=r-l+1;
            for(i=0;i<31;i++)
            {
                xxx=matrix[r][i]-matrix[l-1][i];
                xxxx=xx-xxx;
                if(xxx>=xxxx)
                    ans[i]=0;
                else
                    ans[i]=1;
            }
            mul=1;
            for(j=30;j>=0;j--)
            {
                aaaa=aaaa+(mul*ans[j]);
                mul*=2;
            }
            cout<<aaaa<<"\n";
        }
        return 0;
}