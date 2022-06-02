// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        if(n==0 || m==0)
        {
            return 0;
        }

        if(m>n){
            return -1;
        }

        sort(a.begin(), a.end());
        int diff = INT_MAX;
        int i;

        for(i = 0; i+m-1<n; i++)
        {
          int min_diff = a[i+m-1] - a[i];
          if(min_diff<diff)
          {
              diff = min_diff;
          }
        }

        return diff;
    //code

    }
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}

		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends
