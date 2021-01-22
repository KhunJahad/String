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

	int start=0;
	int end=s.size()-1;
	int flag=0;
	while(start<=end){
		if (s[start]!=s[end]){
			cout<<"no\n";
			flag=1;
			break;
		}
		start++;
		end--;
	}

	if (!flag) cout<<"yes\n";
	return 0;
}