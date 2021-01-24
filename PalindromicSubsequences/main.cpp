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
	string s;
	cin>>s;
	int n=s.size();
	int dp[n+1][n+1]{0};
	for (int i=0;i<n;i++) dp[i][i]=1;

	for (int i = 2;i<=n;i++){
		for (int j=0;j<n;j++){
			int k=i+j-1;
			if (k>n){
				continue;
			}
			if (s[j]==s[k]) dp[j][k]=1+dp[j][k-1]+dp[j+1][k];
			else dp[j][k]=dp[j][k-1]+dp[j+1][k]-dp[j+1][k-1];
		}
	}

	cout<<dp[0][n-1];

	return 0;
}