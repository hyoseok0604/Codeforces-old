/*
    Contest Name : Codeforces Round #700 (Div. 2)
    Problem Title : D1 - Painting the Array I
    Problem Url : https://codeforces.com/contest/1480/problem/D1
    Verdict : Wrong answer on pretest 6
    Time : 30 ms
    Memory : 1800 KB
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

    int n;
    cin >> n;

    int a[n];
    rep(i, 0, n) cin >> a[i];

    vector<int> v;

    int bc = 0, be = 0;
    rep(i, 0, n){
        if(be == a[i]) bc++;
        else be = a[i], bc = 1;
        if(bc <= 2) v.push_back(a[i]);
    }

    int pos[n+1];
    rep(i, 0, n + 1){
        pos[i] = 1e9;
    }

    rep(i, 0, v.size()-1){
        if(v[i] == v[i+1]) pos[v[i]] = i;
    }

    vector<int> w;
    vector<int> b;

    w.push_back(0);
    b.push_back(0);

    rep(i, 0, v.size()){
        int bw = w[w.size()-1];
        int bb = b[b.size()-1];
        int pw = pos[bw];
        int pb = pos[bb];

        // 둘중 하나만 다르거나 둘다 다른 경우가 나올 것 둘중 하나만 다른 경우 다른 쪽에 넣는 것이 이득
        // 둘다 다른 경우 두 쌍이 붙어서 나오는게 빠른 곳에 넣어야함 하나만 지나친 경우 안지나친 곳에 둘다 지나친 경우 그냥 위에 넣기
        if(bw == v[i] && bb != v[i]){
            b.push_back(v[i]);
        }else if(bw != v[i] && bb == v[i]){
            w.push_back(v[i]);
        }else{
            bool passpw = i - 2 > pw || pw == 1e9;
            bool passpb = i - 2 > pb || pb == 1e9;
            if(!passpw && passpb) w.push_back(v[i]);
            else if(passpw && !passpb) b.push_back(v[i]);
            else if(passpw && passpb) w.push_back(v[i]);
            else if(!passpw && !passpb){
                if(pw <= pb) w.push_back(v[i]);
                else b.push_back(v[i]);
            }
        }
    }

    int bbb = 0, ans = 0;
    rep(i, 0, w.size()){
        if(w[i] != bbb) ans++, bbb = w[i];
    }
    bbb = 0;
    rep(i, 0, b.size()){
        if(b[i] != bbb) ans++, bbb = b[i];
    }

    cout << ans;
}