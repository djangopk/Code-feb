/* https://www.codechef.com/FEB19B/problems/DEPCHEF */
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],d[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>d[i];
        int final=0,diff=0;
        int di=0,s=0;
        for(int i=0;i<n;i++)
        {
            di=0,s=0;
            if(i==0)
            {
                if(d[i]>(a[i+1]+a[n-1]))
                {
                    s=d[i];
                }
            }
            else if(i==(n-1))
            {
                if(d[i]>(a[i-1]+a[0]))
                {
                    s=d[i];
                }
            }
            else
            {
                if(d[i]>(a[i+1]+a[i-1]))
                {
                    s=d[i];
                }
            }
            if(s>final)
            {
                final=s;
            }
        }
        
        if(final>0)
            cout<<final<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
