# include <bits/stdc++.h>
using namespace std;

int badChar[256];

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

void badCharCreation(string pattern,int m){
	memset(badChar,-1,256);
	for(int i=0;i<m;i++) badChar[int(pattern[i])]=i;
}

void search(string txt,string pattern){
	int n=txt.size();
	int m=pattern.size();
	badCharCreation(pattern,m);

	int s=0;
	while(s<=n-m){
		int j=m-1;
		
		while (j>=0 && pattern[j]==txt[s+j]){
			j--;
		}

		if (j<0){
			cout<<"The patter is found at the index  : "<<s<<endl;
			s+=(s+m<n)? m-badChar[txt[s+m]]:1;
		}
		else{
			s+=max(1,j-badChar[txt[s+j]]);
		}
	}

}

int main(){
	read_input();
	string txt,pattern;
	cin>>txt>>pattern;
	search(txt,pattern);
	return 0;
}

