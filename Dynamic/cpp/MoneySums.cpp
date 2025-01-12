#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char> 
#define vvll vector<vector<long long > >
#define vvc vector<vector<char> >
#define mii map<int, int>
#define si set<int>
#define sl set<long long>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(a,b) for(ll i=a;i<=b;i++)
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

// global tt =0;

void solve(sl& s,vll a,ll n,ll k,ll sum,vector<vector<long long>> &dp){
    if(k==n){
        s.insert(sum);
        dp[sum][k]=1;
        return;
    }
    if(dp[sum][k]!=0)return;
    dp[sum][k]=1;
    solve(s,a,n,k+1,sum+a[k],dp);
    solve(s,a,n,k+1,sum,dp);
}

int main()
{
   fast;
   ll t = 1;
//    cin>>t;
   while(t--)
   {
       ll n,temp=0;
       cin>>n;
       vll a(n,0);
       for(ll i=0;i<n;i++){
            cin>>a[i];
            temp+=a[i];
       }
       sl s;
       vector<vector<long long >> dp(temp+1,vector<long long>(n+1,0));
       solve(s,a,n,0,0,dp);
       cout<<s.size()-1<<"\n";
      for(auto x:s){
          if(x==0)continue;
        cout<<x<<" ";
      }
       cout<<"\n";
   }
    return 0;
}