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
	string s,t;
	cin>>s>>t;
	int n = s.size();
	int m=t.size();

	if (n>m){
		swap(n,m);
		string temp=s;
		s=t;
		t=temp;
	}
	int dp[n+1][m+1];


	for (int i=0;i<=n;i++){
		for (int j=0;j<=m;j++){
			if (i==0) dp[i][j]=j;
			else if (j==0) dp[i][j]=i;
			else if (s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
			else{
				int temp;
				temp=min(dp[i-1][j],dp[i][j-1]);
				temp=min(temp,dp[i-1][j-1]);
				dp[i][j]=temp+1;
			}
		}
	}
	cout<<dp[n][m];
	return 0;
}