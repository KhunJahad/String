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
	int dp[n+1][n+1]={0};
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if (i==0 || j==0){
				dp[i][j]=0;
			}
			else if (s[i-1]==s[j-1] && i!=j){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	int i=n;
	int j=n;
	string ans="";
	while (i>0 && j>0){
		if (dp[i][j]==dp[i-1][j-1]+1){
			ans+=s[i-1];
			i--;
			j--;
		}
		else if (dp[i][j]==dp[i-1][j]){
			i--;
		}
		else{
			j--;
		}
	}
	reverse(ans.begin(),ans.end());
	cout<<ans<<"\n";
	return 0;
}