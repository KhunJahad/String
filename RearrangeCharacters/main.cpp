# include <bits/stdc++.h>
using namespace std;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int main(){
	read_input();
	int tc;
	cin>>tc;
	while(tc--){
		string a;
		cin>>a;
		int n=a.size();
		int dp[256];
		memset(dp,0,sizeof(dp));
		
		for(int i=0;i<n;i++) dp[a[i]]++;

		int max_elem=*max_element(dp,dp+256);
		
		if (max_elem<=n/2) cout<<1<<"\n";
		else cout<<0<<"\n";
	}

	return 0;
}

