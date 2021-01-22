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
	int tc;
	cin>>tc;
	while(tc--){
		string s;
		cin>>s;
		int max_size=0;
		int gb_start=0;
		int gb_end=0;
		for (int i=0;i<s.size();i++){
			int start=i;
			for (int j=s.size()-1;j>=0;j--){
				int end=j;
				while(start<end && s[start]==s[end]){
					start++;
					end--;
				}
				int len=j-i;
				if (len>max_size && start>=end){
					max_size=len;
					gb_start=i;
					gb_end=j;
				}
				start=i;
			}
		}
		cout<<gb_start<<" "<<gb_end<<"\n";
		cout<<"The maximum size is : "<<max_size+1<<"\n";
		for (int i=gb_start;i<=gb_end;i++) cout<<s[i];
	}
	return 0;
}