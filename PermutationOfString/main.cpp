# include <bits/stdc++.h>
using namespace std;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

void printpermutation(string &str,int n ,int index,set <string> &s){
	if (index==n) return;
	//if (index!=-1) cout<<curr<<"\n";
	for (int i=index+1;i<n;i++){
		string curr=str;
		swap(curr[index+1],curr[i]);
		s.insert(curr);
		printpermutation(curr,n,index+1,s);
	}

}
int main(){
	read_input();
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		int n=str.size();
		set <string> s;
		printpermutation(str,n,-1,s);
		for (auto itr=s.begin();itr!=s.end();itr++) cout<<*itr<<" ";
		cout<<"\n";
	}
	return 0;
}