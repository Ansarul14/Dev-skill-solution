#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,k;
    while(cin>>n)
    {
        long long a[n+5];
        for(i=1;i<=n;i++)
            cin>>a[i];
        cin>>m>>k;
        int c=0;
        for(i=m;i<=n;i++)
        {
            if (a[i]>=k)
                c++;
        }cout<<c<<endl;
    }
}
