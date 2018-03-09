#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,k,ti;
        cin>>n>>k;
        long long int a[n];
        int nbit=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0) nbit=-1;

        }
        if(nbit==1)
        {
            long long int sum=accumulate(a,a+n,0);
            long long int total=sum*k;
            cout<<total<<endl;
            continue;

        }
        if(nbit==-1)
        {


            long long int total=0,mx=INT_MIN,mx1=INT_MIN,b[2*n];
            int index;
            long long int sum=accumulate(a,a+n,0);
            for(int i=0;i<n;i++)
            {
                total+=a[i];
                if(total<0)
                    total=0;
                if(total>=mx)
                {
                    mx=total;
                    index=i;

                }

            }



            for(int i=0;i<2*n;i++)
            {
                if(i<n)
                 b[i]=a[i];
                else
                 b[i]=a[i-n];
            }
            long long int total2=0,index2;
            for(int i=0;i<2*n;i++)
            {
                total2+=b[i];
                if(total2<0)
                    total2=0;
                if(total2>mx1)
                {
                    mx1=total2;
                    index2=i;

                }

            }
            long long int fmax;
            if(mx>=mx1)
            {
                if(index==n-1 && mx==sum)
                {
                    fmax=mx*k;
                }
                else
                    fmax=mx;



            }
            else if(mx1>mx)
            {
                if(index2==2*n-1)
                {
                    long long temp=mx1-sum;
                    fmax=temp+sum*(k-1);
                }
                else
                 fmax=mx1;
            }
            if(sum*k>fmax) fmax=sum*k;

            cout<<fmax<<endl;


        }


    }



    return 0;





}
