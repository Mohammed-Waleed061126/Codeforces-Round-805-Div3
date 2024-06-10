#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


void solution(){
  ll val;
  cin >> val;
  ll num = val;
  ll count = 0;
  while (val)
  {
    count++;
    val /= 10;
  }
  ll x = num - pow(10,count-1);
  cout << x << el;
}

int main(){ MW_HY
  int ntimes  = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}