#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t[n];
	for(int i=0; i<n; i++) cin>>t[i];
	sort(t, n+t);
	cout<<min(t[n-2]-t[0], t[n-1]-t[1])<<endl;
	
}