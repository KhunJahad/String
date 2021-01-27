# include <bits/stdc++.h>
using namespace std;

char grid[10000][10000];
string s;
int r,c;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

bool limit(int x,int y){
	return (x>=0 && y>=0 && x<r && y<c);
}
bool check(int x,int y,int k,int n){

	if (k==n-1) return true;
	//cout<<s[k]<<" "<<grid[x][y]<<" "<<k<<" "<<x<<" "<<y<<"\n";
	if (limit(x+1,y) && grid[x+1][y]==s[k]) return check(x+1,y,k+1,n);
	else if  (limit(x,y+1) && grid[x][y+1]==s[k]) return check(x,y+1,k+1,n);
	else if (limit(x-1,y) && grid[x-1][y]==s[k]) return check(x-1,y,k+1,n);
	else if (limit(x,y-1) && grid[x][y-1]==s[k]) return check(x,y-1,k+1,n);
	else return false;
}

int main(){
	read_input();
	
	cin>>r>>c;
	cin>>s;
	int n=s.size();
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++) cin>>grid[i][j];
	}
	int count=0;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			if (grid[i][j]==s[0] && check(i,j,1,n)) count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}

/*

6 6
GEEKS
D D D G D D
B B D E B S
B S K E B K
D D D D D E
D D D D D E
D D D D D G



*/