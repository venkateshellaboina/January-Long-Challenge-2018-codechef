    #include <bits/stdc++.h>
    #include <vector>
    using namespace std;
    int main()
    {
      int t;
      cin>>t;
      while(t--)
      {
        int n;
        cin>>n;
        vector< vector<long long int> > v;
        v.resize(n);
        for(int i=0;i<n;i++)
        {
         v[i].resize(n);
          for(int j=0;j<n;j++)
          {
            long long int d;cin>>d;
            v[i][j]=d;
            //cout<<d<<" ";
          }
         //cout<<endl;
        }

        for(int i=0;i<n;i++)
        {
          sort(v[i].begin(),v[i].end());
        }

        long long int sum=v[n-1][n-1];
         long long int prev=v[n-1][n-1];
        int flag=0;
        for(int i=n-2;i>-1;i--)
        {
          flag=0;
          int j=n-1;
          while(v[i][j]>=prev && j>=0)
          {
            j--;
          }
          if(j==-1)
          {
           flag=1;
           break;
           }
           prev=v[i][j];
          sum+=v[i][j];

        }
        if(flag==1)
         cout<<-1<<endl;
        else
         cout<<sum<<endl;
      }
      return 0;
    }


