    #include <iostream>
    using namespace std;
    #include<bits/stdc++.h>
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long int a,b,x,y,xx=0,yy=0,aa[100],bb[100],xxx=0,yyy=0,ind,flag=0,diff,ans,m;
            cin>>a>>b;
            x=a;
            y=b;
            if(a==b)
            {
                cout<<"0\n";
            }
            else if (b==0  || (b==1 && a>0))
            {
                cout<<"-1\n";
            }
            else
            {
            while(x!=0)
            {
                m=x%2;
                if(m==1)
                xx++;
                aa[xxx++]=m;
                x/=2;
                
            }
            while(y!=0)
            {
                m=y%2;
                if(m==1)
                {
                    yy++;
                    if(flag==0)
                    {
                        ind=yyy; 
                        flag=1;
                    }
                }
                bb[yyy++]=m;
                y/=2;
            }
           
            if(b%2)
            {
                //cout<<"x\n";
                if(yy>xx)
                  ans=yy-xx;
                else
                    ans=2;
            }
            else
            {
                
                diff=ind;
               // cout<<"y\n";
              //  cout<<diff<<" "<<xx<<" "<<yy<<" ";
                if(yy>=xx)
                {
                    ans=yy-xx;
                    
                    ans=ans+diff;
                }
                else
                {
                    
                    if(diff+yy-1>=xx)
                    {
                        xx=xx-(yy-1);
                        ans=diff+1-xx;
                    }
                    else
                    {
                       ans=2;
                    }
                }
                
            }
            cout<<ans<<"\n";
        }
        }
        return 0;
    } 