#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];


        }
        long long int sum=accumulate(a,a+n,0);
        //cout<<sum<<endl;

         vector <int> v;

            int x=0,t=1;
            while(t<n*k)
            {
             for(int i=0;i<n;i++)
              {
                if(x==0)
                {
                    v.push_back(a[i]);
                    x++;
                    t++;
                    continue;
                }
                else if(v[x-1]>=0 && a[i]>=0 || v[x-1]<0 && a[i]<0)
                {
                    v[x-1]+=a[i];
                }

                else
                {
                    v.push_back(a[i]);
                    x++;
                }
               t++;
              }
            }


            int sz=v.size();
            for(int i=0;i<sz;i++)
           {
            cout<<v[i]<<" ";


           }
           cout<<endl;
            long long int total=0,mx=INT_MIN;
            for(int i=0;i<sz;i++)
            {
                total+=v[i];
                if(total>mx)
                {

                    mx=total;

                }

                if(total<0)
                    total=0;




            }

            cout<<mx<<endl;




    }



    return 0;





}
