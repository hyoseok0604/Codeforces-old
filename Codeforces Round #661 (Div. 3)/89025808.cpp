/*
    Contest Name : Codeforces Round #661 (Div. 3)
    Problem Title : D - Binary String To Subsequences
    Problem Url : https://codeforces.com/contest/1399/problem/D
    Verdict : Accepted
    Time : 62 ms
    Memory : 5700 KB
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

int main(){
    fastIO();
    
    TC{
        int n;
        cin >> n;


        int arr[n];
        int ans = 1;
        string s;
        cin >> s;
        stack<int> one;
        stack<int> zero;
        rep(i, 0, n){
            char c = s[i];
            if(c == '0'){
                if(one.size() == 0){
                    zero.push(ans++);
                }else{
                    zero.push(one.top());
                    one.pop();
                }
                arr[i] = zero.top();
            }else{
                if(zero.size() == 0){
                    one.push(ans++);
                }else{
                    one.push(zero.top());
                    zero.pop();
                }
                arr[i] = one.top();
            }
        }

        cout << ans - 1 << '\n';
        rep(i, 0, n){
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}