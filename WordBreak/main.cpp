# include <bits/stdc++.h>
using namespace std;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

bool find_string(vector <string> b,string s){
	for (int i=0;i<b.size();i++){
		if (b[i]==s) return true;
	}
	return false;
}

int main(){
	read_input();
	string a="samsung";
	vector <string> b = { "i", "like", "sam", "sung", "samsung", "mobile","ice","cream", "icecream", "man", "go", "mango" };
	int n=a.size();
	int i=0;
	string ans="";
	while (i<n){
		string temp="";
		temp+=a[i];
		for (int j=i;j<n;j++){
			if (i!=j) temp+=a[j];
			if (find_string(b,temp)){
				i=j;
				ans+=temp;
				break;
			}
		}
		i++;
	}

	if (ans==a) cout<<true<<"\n";
	else cout<<false<<"\n";
	return 0;
}