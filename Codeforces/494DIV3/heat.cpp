#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,c=0,flag=0,j,cc;
    double maxi=0,avg,sum=0,s=0;
    cin>>n>>k;
    double a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<k;j++)
        sum+=a[j];
    avg=sum/(k*1.0);
    s=sum;
    //cout<<sum<<endl;
    cc=k;
    if(maxi<avg)
        maxi=avg;
    for(i=j;i<n;i++)
            {
                s+=a[i];
                // cout<<s<<endl;
                cc++;
                avg=s/(cc*1.0);
                if(maxi<avg)
                maxi=avg;
            }
    for(j=k;j<n;j++)
    {
         sum=sum+a[j]-a[j-k];
          //cout<<sum<<endl;
            cc=k;
            avg=sum/(k*1.0);
            if(maxi<avg)
                maxi=avg;
            s=sum;
            for(i=j+1;i<n;i++)
            {
                 
                s+=a[i];
                //cout<<s<<endl;
                cc++;
                avg=s/(cc*1.0);
                if(maxi<avg)
                maxi=avg;
            }
       
    }
    if(maxi<avg)
                maxi=avg;
    printf("%.20lf",maxi);
    return 0;
}