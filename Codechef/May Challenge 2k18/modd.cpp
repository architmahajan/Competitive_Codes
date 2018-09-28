    #include<iostream>
        using namespace std;
        #include<bits/stdc++.h>
        long long int mmodd=1000000007;
        int main()
        {
            int t;
            cin>>t;
            while(t--)
            {
                long long int m,n,x,y,i,j,k; 
                cin>>m>>n;
                long long int a[m],b[m],diff1[m],diff2[m],fib[n+1],sum=0,result[m],sum1=0,sum2=0,prev,ans;
                for(i=0;i<m;i++)
                {
                    cin>>a[i];
                    sum1+=a[i];
                    sum1%=mmodd;
                }
                for(i=0;i<m;i++)
                {
                    cin>>b[i];
                    sum2+=b[i];
                    sum2%=mmodd;
                }
                sort(a,a+m);
                sort(b,b+m);
                for(i=1;i<m;i++)
                    diff1[i]=(a[i]-a[i-1])%mmodd;
                for(i=1;i<m;i++)
                    diff2[i]=(b[i]-b[i-1])%mmodd;
                if(n==1)
                {
                    sum=(sum1*m)%mmodd;
                }
                else if(n==2)
                {
                    sum=(sum2*m)%mmodd;
                }
                else if(n>=3)
                {
                    sum1*=m;
                    sum1%=mmodd;
                    sum2*=m;
                    sum2%=mmodd;
                    fib[1]=sum1%mmodd;
                    fib[2]=sum2%mmodd;
                    for(k=3;k<=n;k++)
                    {
                        fib[k]=(fib[k-1]+fib[k-2])%mmodd;
                        fib[k]%=mmodd;
                        //cout<<fib[k]<<" ";
                    }
                    sum=fib[n]%mmodd;
                }
                cout<<sum%mmodd<<"\n";
            }
            return 0;
        }  