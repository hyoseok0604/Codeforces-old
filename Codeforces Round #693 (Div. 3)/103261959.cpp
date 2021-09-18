/*
    Contest Name : Codeforces Round #693 (Div. 3)
    Problem Title : E - Correct Placement
    Problem Url : https://codeforces.com/contest/1472/problem/E
    Verdict : Wrong answer on test 2
    Time : 46 ms
    Memory : 0 KB
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

    TC{
        int n;
        cin >> n;

        pair<int, int> h[n];
        pair<int, int> w[n];
        rep(i, 0, n){
            int th, tw;
            cin >> th >> tw;
            h[i] = {th, i};
            w[i] = {tw, i};
        }

        sort(h, h + n);

        int bw = 0;
        int mn = 1000000001;
        int tmpmn = w[h[0].second].first;
        int mnidx = -1;
        int tmpmnidx = h[0].second;
        int ans[n];
        mset(-1, ans);
        rep(i, 0, n){
            int idx = h[i].second;
            int hv = h[i].first;
            int wv = w[idx].first;

            if(bw != hv){
                bw = hv;
                if(tmpmn < mn){
                    mn = tmpmn;
                    mnidx = tmpmnidx;
                }

                tmpmn = wv;
            }

            if(wv > mn) ans[idx] = mnidx;
            
            if(wv < tmpmn){
                tmpmn = wv;
                tmpmnidx = idx;
            }
        }

        rep(i, 0, n){
            if(ans[i] != -1) ans[i]++;
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}