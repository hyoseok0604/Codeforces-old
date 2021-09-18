/*
    Contest Name : Codeforces Round #661 (Div. 3)
    Problem Title : D - Binary String To Subsequences
    Problem Url : https://codeforces.com/contest/1399/problem/D
    Verdict : Wrong answer on test 2
    Time : 46 ms
    Memory : 3600 KB
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
        int ans = 0;
        int kk = 0;
        int a = 1;
        int before = 2;
        string s;
        cin >> s;
        rep(i, 0, n){
            char c = s[i];
            if(c == '0'){
                if(before == 0){
                    if(kk > 0){
                        a++;
                    }else{
                        a--;
                    }
                }
                kk++;
                before = 0;
            }else{
                if(before == 1){
                    if(kk < 0){
                        a++;
                    }else{
                        a--;
                    }
                }
                kk--;
                before = 1;
            }
            arr[i] = a;
            uMax(ans, a);
        }

        cout << ans << '\n';
        rep(i, 0, n){
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}