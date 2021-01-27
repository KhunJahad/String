# include <bits/stdc++.h>
using namespace std;

char grid[10000][10000];
string s;
int r,c;
int rows[8]={1,-1,0,0,1,-1,1,-1};
int columns[8]={0,0,1,-1,1,-1,-1,1};
void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

bool limit(int x,int y){
	return (x>=0 && y>=0 && x<r && y<c);
}

bool check(int x,int y,int k,int n,int i,int j){
	if (k==n) return true;
	if (limit(x+i,y+j) && grid[x+i][y+j]==s[k]) return check(x+i,y+j,k+1,n,i,j);
	return false;
}

bool solve(int x,int y,int k,int n){
	
	for (int i=0;i<8;i++){
		if (check(x,y,1,n,rows[i],columns[i])) return true;
	}
	return false;
}

int main(){
	read_input();
	int tc;
	cin>>tc;
	while(tc--){
		cin>>r>>c;
		
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++) cin>>grid[i][j];
		}
		cin>>s;
		int n=s.size();
		int flag=1;
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++){
				if (grid[i][j]==s[0] && solve(i,j,1,n)){
					cout<<i<<" "<<j<<", ";
					flag=0;
				}
			}
		}
		if (flag) cout<<"-1\n";
		else cout<<"\n";
	}
	return 0;
}

