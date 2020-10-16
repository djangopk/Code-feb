#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    long long int pre=0,ans=-1;
	    for(int i=0;i<n;i++)
	    {
	        if((pre+arr[i])<k)
	        {
	            ans=i+1;
	            break;
	        }
	        else
    	        pre=(pre+arr[i])-k;
	    }
	    if(ans==-1)
	        ans=(pre/k)+1+n;
	    cout<<ans<<endl;
	    
	}
	return 0;
}
