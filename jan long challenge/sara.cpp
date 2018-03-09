
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define mx 100000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int a[mx+1];
        a[1]=0;
        a[2]=1;
        i=3;
        while(i<mx)
        {
            if(a[i]/3)
            a[i]=min(a[i-1]+1,a[i+1]+1,(a[i]/3)+1);
            else
            a[i]=min(a[i-1]+1,a[i+1]+1);

            i++;
        }
