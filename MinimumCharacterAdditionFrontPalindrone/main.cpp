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
	string str=s;
	reverse(s.begin(),s.end());
	str+='$'+s;

	int n=str.size();
	int lps[n];

	int len=0; // maximum len of prefix which is a suffix 
	lps[0]=0;
	int i=1;
	while(i<n){
		if (str[i]==str[len]){
			len++;
			lps[i]=len;
			i++;
		}
		else{
			if (len!=0) len=lps[len-1];
			else{
				lps[i]=0;
				i++;
			}
		}
	}
	cout<<s.size()-lps[n-1];
	return 0;
}

