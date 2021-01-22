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

	while(start<=end){
		swap(s[start],s[end]);
		start++;
		end--;
	}

	cout<<s<<"\n";
	return 0;
}