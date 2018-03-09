#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <stdlib.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int x,n;
        cin>>x>>n;
        long long int arr[n+1];
        long long int brr[n+1];
         for(long long int j=1;j<=n;j++)
                arr[j]=1;
        for(long long int j=1;j<=n;j++)
                brr[j]=0;
        long long int temp=(n*(n+1))/2;
        long long int ans=temp-x;
        arr[x]=2;
        brr[x]=2;
        long long int finalans=ans/2;
        if(ans%2==0 && n>2)
        {
            long long int count=0;
            for(long long int k=n;k>=1;k--)
            {
                if(count>=finalans)
                    break;
                if(k!=x)
                {
                    if(count+k<=finalans)
                    {
                        brr[k]=1;
                        arr[k]=0;
                        count=count+k;
                    }
                }
            }
            char a[n+1];
            long long int l=0;
           if(arr[1]==0)
            {
                for(long long int j=1;j<=n;j++)
                {
                    a[l++]=arr[j]+'0';
                }
            }
            else
            {
                for(long long int j=1;j<=n;j++)
                {
                    a[l++]=brr[j]+'0';
                }
            }
            a[l]='\0';
            string s=(string)a;
            cout<<s<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
