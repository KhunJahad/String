# include <bits/stdc++.h>
using namespace std;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

void printSubsequence(string s,int n,int index=-1,string curr=""){

	if (index==n) return;
	if (!curr.empty())  cout<<curr<<"\n";

	for (int i=index+1;i<n;i++){
		curr+=s[i];
		printSubsequence(s,n,i,curr);
		curr=curr.erase(curr.size()-1);
	}
}

int main(){
	read_input();
	string s;
	cin>>s;
	int n=s.size();
	printSubsequence(s,n);
	return 0;
}