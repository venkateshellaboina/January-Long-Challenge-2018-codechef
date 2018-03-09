#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        ll x,n,m;
        cin>>x>>n;
        ll total_sum=n;
        m=n+1;
        //cout<<total_sum<<" 1"<<endl;
        total_sum=(total_sum)*m;
        //cout<<total_sum<<" 2"<<endl;
        total_sum=total_sum/2;
        //cout<<total_sum<<" 3"<<endl;
        ll temp_sum=total_sum-x;
        if(temp_sum%2!=0 || n<4)
        {
            cout<<"impossible"<<endl;
            continue;

        }
        else
        {
            ll half_sum=temp_sum/2;
            //cout<<half_sum<<" 4"<<endl;
            string str="";
            for(int i=0;i<n;i++)
            {
             str+='0'-0;
            }
            str[x-1]='2'-0;
            ll j=n;
            while(half_sum>0 && j>0)
            {
                if(half_sum>=j && j!=x)
                {
                    half_sum-=j;
                    //cout<<j<<endl;
                    str[j-1]='1'-0;
                }
                j--;


            }
            if(half_sum!=0)
            {
                cout<<"impossible"<<endl;
                continue;

            }

            /*for(int i=1;i<n+1;i++)
            {
             cout<<c[i];
            }*/

            /*for(ll i=1;i<n+1;i++)
            {
               if(a[i]==0) str+='0';
               else if(a[i]==1) str+='1';
               else str+='2';
            }*/

            cout<<str;
            cout<<endl;





        }


    }
    return 0;

}
