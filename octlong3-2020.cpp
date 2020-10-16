#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
	    else if(n==3)   
	    {
	        cout<<1<<" "<<3<<" "<<2<<endl;
	        continue;
	    }
	    else if(n!=0 && ((n&(n-1))==0))
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    else
	    {
	        cout<<2<<" "<<3<<" "<<1<<" ";
	        int x=4;
	        while(x<=n)
	        {
	            if(x!=0 && ((x&(x-1))==0))
	            {
	                cout<<x+1<<" "<<x<<" ";
	                x+=2;
	            }
	            else
	            {
	                cout<<x<<" ";
	                x++;
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
