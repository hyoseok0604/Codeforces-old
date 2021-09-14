/*
    Contest Name : Educational Codeforces Round 105 (Rated for Div. 2)
    Problem Title : C - 1D Sokoban
    Problem Url : https://codeforces.com/contest/1494/problem/C
    Verdict : Accepted
    Time : 124 ms
    Memory : 5500 KB
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

bool f(int i, int n){
    return i >= 0 && i <= n - 2;
}

int main(){
    fastIO();

    TC{
        int n, m;
        cin >> n >> m;

        int a[n];
        vector<int> posA;
        vector<int> negA;
        rep(i, 0, n){
            cin >> a[i];
            if(a[i] > 0) posA.push_back(a[i]);
            if(a[i] < 0) negA.push_back(a[i]);
        }

        int b[m];
        vector<int> posB;
        vector<int> negB;

        queue<int> posSame;
        stack<int> negSame;
        rep(i, 0, m){
            cin >> b[i];
            if(b[i] > 0){
                posB.push_back(b[i]);
                if(binary_search(posA.begin(), posA.end(), b[i])){
                    posSame.push(b[i]);
                }
            }
            if(b[i] < 0){
                negB.push_back(b[i]);
                if(binary_search(negA.begin(), negA.end(), b[i])){
                    negSame.push(b[i]);
                }
            }
        }

        int count = 0;
        int cur = 0;
        int posans = 0;
        queue<int> q;
        rep(i, 0, posB.size()){
            while(count < posA.size() && posA[count] <= posB[i] + count){
                count++;
            }

            // posB[i] ~ posB[i] + count 겹친 구간 찾기
            while(cur < posB.size() && posB[cur] < posB[i] + count){
                q.push(posB[cur++]);
            }
            while(!q.empty() && q.front() < posB[i]){
                q.pop();
            }
            while(!posSame.empty() && posSame.front() <= posB[i] + count) posSame.pop();
            int tmp = q.size() + posSame.size();
            // cout2(q.size(), posSame.size());
            posans = max(posans, tmp);
        }

        int negans = 0;
        count = 0;
        cur = negB.size() - 1;
        int negc = negB.size() - 1;
        queue<int> negQ;
        rep2(i, negc, 0){
            while(count < negA.size() && negA[negA.size() - count - 1] >= negB[i] - count){
                count++;
                // cout2(count, negB[i]);
            }

            while(cur >= 0 && negB[cur] > negB[i] - count){
                negQ.push(negB[cur--]);
            }
            while(!negQ.empty() && negQ.front() > negB[i]){
                negQ.pop();
            }

            while(!negSame.empty() && negSame.top() >= negB[i] - count) negSame.pop();
            int tmp = negQ.size() + negSame.size();
            // cout2(negQ.size(), negSame.size());
            negans = max(negans, tmp);
        }

        // cout3(posans, negans, posans + negans);
        cout << posans + negans << '\n';
    }
}