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
	int n;
	cin>>n;
	string a[n+1];
	a[1]="1";
	for (int j=2;j<n+1;j++){
		string prev_ans=a[j-1];
		string ans="";
		for (int i=0;i<prev_ans.size();i++){
			char start=prev_ans[i];
			int count=1;
			
			while (i<prev_ans.size()-1 && prev_ans[i+1]==start){
				count++;
				i++;
			}
			ans+=to_string(count);
			ans+=start;
		}
		a[j]=ans;  
	}

	cout<<a[n]<<"\n";
	return 0;
}