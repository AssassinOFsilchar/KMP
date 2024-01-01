//ABHISHEK RANJAN (GAWD)
//2112016
#include <bits/stdc++.h>  
#define rep(i,a) for(int i = 0;i<a;i++)
#define ll long long
#define inp(n)              ll n;cin>>n;
#define inpv(v)             for(auto &x: v) cin>>x;
#define makevec(vec,n)      vector<int>vec(n); fr(i,n) cin>>vec[i];
#define fr(i,n)             for(ll i=0;i<n;++i)
#define frs(i,k,n)          for(ll i=k;i<n;++i)
#define fA(i,a,n)           for(ll i=a;i<=(n);++i)
#define fD(i,a,n)           for(ll i=a;i>=(n);--i)
#define dsort(arr)          sort(arr,arr+n,greater<ll>())
#define asort(arr)          sort(arr,arr+n)
#define allasort(str)       sort(str.begin(), str.end())
#define alldsort(str)       sort(str.begin(), str.end(),greater<char>())
#define pb push_back
#define all(_obj) _obj.begin(), _obj.end()
#define F first
#define S second
#define PI                  3.141592653589793238
#define pll pair<ll, ll>
#define vll vector<ll>
ll INF = 1e18;
ll max(ll a, ll b) { return ((a > b) ? a : b); }
ll min(ll a, ll b) { return ((a > b) ? b : a); }
using namespace std;      
void solve(){
    // prefix[i]=maximum k such that s[0...k-1]=s[i-(k-1)..i]
    // prefix[0]=0

    // T="a b c a b c d"
    // p= 0 0 0 1 2 3 0
    // Naive approach O(n3)
    // string s;
    // cin>>s;
    // int n=s.size();

    // vector<int>pi(n);
    // for(int i=0;i<n;i++){
    //     for(int k=0;k<=i;k++){
    //         if(s.substr(0,k)==s.substr(i-(k-1),k)){
    //             pi[i]=k;
    //         }
    //     }
    // }
    // for(auto it:pi)
    // cout<<it<<" ";

    // Optimized Prefix Function

    string s;
    cin>>s; 
    int n=s.size();

    vector<int>pi(n,0);
    for (int i = 1; i < n; i++)
    {
        int j=pi[i-1];

        while (j>0 and s[i]!=s[j])
        {
            j=pi[j-1];
        }
        

        if(s[i]==s[j])
        j++;

        pi[i]=j;

    } 
    for(auto it:pi)
    cout<<it<<" ";
    string t;
    cin>>t;
    int pos=-1;
    int i(0),j(0);
    while (i<t.size())
    {
        if(t[i]==s[j])
        {
            i++;
            j++;
        }
        else{
            if(j!=0)
                j=pi[j-1];
            else
                i++;
        }
        if(j==s.size()){
            pos=i-s.size();
            break;
        }
        /* code */
    }
    cout<<endl;
    cout<<pos;
    
    // TC is O(n)
    


    
}
int main()
{
ios::sync_with_stdio(0); 
cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}