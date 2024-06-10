#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
ll string_to_num(char c, string word){
  ll val = 0;
  if (c == 'x')
  {
    for (ll i = 0; i < word.size(); i++)
    {
      val *= 10;
      val += word[i]-48;
    }
  }
  else
  {
    val += c-48;
  }
  return val;
}
bool isPrime(ll k)
{
  if (k == 1)
  {
    return false;
  }
  for (ll i = 2; i * i <= k; i++)
  {
    if (k % i == 0)
    {
      return false;
    }
  }
  return true;
}
// ----------------------------------------------------------------- //
void solution(){
  string word;
  cin >> word;
  ll freq[26] = {0};
  ll count = 0;
  ll res = 0;
  deque <int> v;
  for (ll i = 0; i < word.size(); i++)
  {
    freq[word[i]-97]++;
    if (freq[word[i]-97] == 1)
    {
      count++;
      v.push_front(word[i]-97);
    }
    if (count == 4)
    {
      res++;
      count = 1;
      freq[v.back()] = 0;
      v.pop_back();
      freq[v.back()] = 0;
      v.pop_back();
      freq[v.back()] = 0;
      v.pop_back();
    }
  }
  if (count != 0)
  {
    res++;
  }
  cout << res << el;
}

int main(){ MW_HY
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int ntimes  = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}