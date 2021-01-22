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
	string s,a,b;
	cin>>a>>b>>s;
	int i=0;
	int j=0;
	int k=0;

	if (a.size()+b.size()!=s.size()){
		cout<<"No\n";
		return 0;
	}

	while(k!=s.size()){

		if (i<a.size()  && a[i]==s[k]) i++;
		else if (j<b.size() && b[j]==s[k]) j++;
		else{
			cout<<"No\n";
			return 0;
		}
		k++;
	}
	cout<<"Yes\n";
	return 0;
}