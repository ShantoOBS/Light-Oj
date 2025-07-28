// LightOJ Link : https://lightoj.com/problem/guilty-prince
//T.C: O(m+n)
//S.C: O(n*n)


#include <bits/stdc++.h>
using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

#define int long long
#define all(v) v.begin(),v.end()
#define vl vector<int>
#define pb emplace_back
#define in(v) for(auto &k:v)cin>>k;

const int mx=30;

char arr[mx][mx];
int vis[mx][mx];

int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};

int cnt;

int n,m;

void dfs(int x,int y){
  
      vis[x][y]=1;
      
      cnt++;
      
      
      for(int i=0;i<4;i++){
        
          int x1=dx[i]+x;
          int y1=dy[i]+y;
          if(x1>=1 && x1<=n &&  y1>=1 && y1<=m && !vis[x1][y1] && arr[x1][y1]!='#')dfs(x1,y1);
          
          
      }
      
      
    
      
}



inline void solve(){
   
   
   int t; cin>>t;
   
   
   for(int it=1;it<=t;it++){
     
     cin>>n>>m;
     swap(n,m);
     
     memset(vis,0,sizeof(vis));
    
     cnt=0;
    
    int x,y;
    
    
    for(int i=1;i<=n;i++){
      
        for(int j=1;j<=m;j++){
          
           cin>>arr[i][j];
           
           if(arr[i][j]=='@'){
               x=i;
               y=j;
            }
            
        }
    }

    
    dfs(x,y);
    
    cout<<"Case "<<it<<": "<<cnt<<endl;
     
        
   }
    
    
   

} 

// tc :
// sc :

int32_t main() {
    fastIO;
    
    solve();

    return 0;
}
