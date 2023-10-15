#include <bits/stdc++.h>

using namespace std;
int main()
{
int i,n;
int sum=0;
cin>>n;
int ar[n];
for(i=0;i<n;i++)
    {
     cin>>ar[i];   
    }
for(i=0;i<n;i++)
    {
     sum+=ar[i];   
    }
cout<<sum;
return 0;
}
