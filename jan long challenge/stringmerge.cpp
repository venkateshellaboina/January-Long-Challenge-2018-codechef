#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string str1,str2;
        char fstr[n+m],fstr2[n+m];

        cin>>str1>>str2;
        int i=n-1,j=m-1,k=n+m-1;

        while(j>-1)
        {

            if(str1[i]!=str2[j])
            {
                fstr[k--]=str2[j];
                j--;
            }
            else
            {
                while(str1[i]==str2[j])
                {
                    fstr[k--]=str2[j];
                    j--;
                }
                fstr[k--]=str1[i];
                i--;
            }

        }
        while(i>-1)
        {
            fstr[k--]=str1[i--];
        }

        int cnt=0;
        for(int i=0;i<n+m-1;i++)
        {
            cout<<fstr[i];
            if(fstr[i]!=fstr[i+1])
            {
                cnt++;
            }
        }

        cnt++;
        i=n-1;j=m-1;k=n+m-1;
        int cnt2=0;
        while(i>-1)
        {

            if(str1[i]!=str2[j])
            {
                fstr2[k--]=str1[i];
                i--;
            }
            else
            {
                while(str1[i]==str2[j])
                {
                    fstr2[k--]=str1[i];
                    i--;
                }
                fstr2[k--]=str2[j];
                j--;
            }

        }
        while(j>-1)
        {
            fstr2[k--]=str2[j--];
        }
        for(int i=0;i<n+m-1;i++)
        {
            cout<<fstr2[i];
            if(fstr2[i]!=fstr2[i+1])
            {
                cnt2++;
            }
        }
        cout<<endl;
        cnt2++;
        cnt=min(cnt,cnt2);
        cout<<cnt<<endl;
    }



}
