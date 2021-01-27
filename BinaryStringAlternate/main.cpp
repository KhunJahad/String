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
	string s_one="";
	string s_zero="";
	int n=s.size();

	for (int i=0;i<n;i++){
		if (i%2==0){
			s_zero+='0';
			s_one+='1';
		}
		else{
			s_zero+='1';
			s_one+='0';
		}
	}
	int zero_ans=0;
	int one_ans=0;
	for(int i=0;i<n;i++){
		if (s[i]!=s_zero[i]) zero_ans++;
		if (s[i]!=s_one[i]) one_ans++;
	}

	cout<<min(zero_ans,one_ans)<<"\n";

	return 0;
}

