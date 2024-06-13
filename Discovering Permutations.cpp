
// Code_Is_Fun

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Shanto cout.tie(NULL);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

//Constants
const lld pi= 3.1415926535897932384626433;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;



// Macros
#define ff first
#define ss second
#define endl "\n"
#define pb emplace_back
#define mp(x,y) make_pair((x),(y))
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define pimp cout<<"IMPOSSIBLE\n";
#define mid(s,e) ((s+e)/2)
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define forl(n) for(long long i=0;i<(n);i++)


// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}


//Bits
string decToBinary(ll n){string s="";ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
  

//Sorting
bool cmpa( pair<ll,ll> &a, pair<ll,ll> &b){return (a.first < b.first);}
bool cmpd( pair<ll,ll> &a, pair<ll,ll> &b){return (a.second > b.second);}
 

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
bool isVowel(char ch) { return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u'); }

//Code by Shanto Shil
//Language C++
//Practice->Success



//Code
void solve()
{
    
    ll t;
    cin>>t;
    ll c=1;
    while(t--){
        
         ll n,m;
         cin>>n>>m;
    
     string s="";
     
     for(ll i=1;i<=n  ;i++){
         s.push_back('A'+i-1);
     }
        
        
       cout<<"Case "<<c<<":"<<endl;
      
           ll j=0;
     
     
     do{
          cout<<s<<endl;
        
          j++;
     }
     while(j<m && next_permutation(s.begin(),s.end()));
        
        
        c++;
        
        
    }
   
     
   
    
   
   
   
}

//Main

int main()
{
    
    Code By Shanto
   
   
      solve();
        
    return 0;
}
//End