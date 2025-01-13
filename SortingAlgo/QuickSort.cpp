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


int partition(int l,int h,vector<ll>& arr){
    // int pivot  = arr[h];
    // int i = l-1;
    // for(int j=l;j<=h-1;j++){
    //     if(arr[j] < pivot){
    //         i++;
    //         swap(arr[i],arr[j]);
    //     }
    // }
    int pivot = arr[l];
    int i = l,j=h;
    while(i<j){
        do{
            i++;
        }while (arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}

int QuickSort(int l,int h,int k,vector<ll> & arr){
    if(l<h){
        int j = partition(l,h,arr);
        if(j==k)return arr[j];
        if(k<k){
            return QuickSort(l,j,k,arr);
        }
        return QuickSort(j+1,h,k,arr);
    }
    return 0;
}

int main()
{
   fast;
   ll t;
   cin>>t;
   while(t--)
   {    

        int n,k;
        cin>>n>>k;
        k--;
        vll a(n,0);
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<"rushi"<<"\n";
        // a[n] = LLONG_MAX;
        cout<<"rushi"<<"\n";
        cout<<"Quick sort is"<<QuickSort(0,n-1,k,a)<<"\n";
        // int j = partition(0,n-1,a);
        // cout<<"j we got is "<<j<<"\n";
        for(auto ae :a)cout<<" "<<ae<<"\n";   
   }
    return 0;
}