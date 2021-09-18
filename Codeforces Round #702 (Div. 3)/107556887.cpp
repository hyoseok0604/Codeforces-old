/*
    Contest Name : Codeforces Round #702 (Div. 3)
    Problem Title : C - Sum of Cubes
    Problem Url : https://codeforces.com/contest/1490/problem/C
    Verdict : Memory limit exceeded on test 1
    Time : 264 ms
    Memory : 262100 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    vector<lli> v;

    for(lli i = 1 ; i <= 10000 ; i++){
        for(lli j = i ; ; j++){
            if(j * j * j + i * i * i > 1000000000000) break;
            v.push_back(j * j * j + i * i * i);
        }
    }
    
    sort(v.begin(), v.end());

    cout << v.size() << '\n';

    TC{
        lli x;
        cin >> x;

        if(binary_search(v.begin(), v.end(), x)) cout << "YES\n";
        else cout << "NO\n";
    }
}