/*
    Contest Name : Codeforces Round #658 (Div. 2)
    Problem Title : B - Sequential Nim
    Problem Url : https://codeforces.com/contest/1382/problem/B
    Verdict : Wrong answer on pretest 1
    Time : 0 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    TC{
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        bool t = true, w = false;
        for(int i = n - 1 ; i >= 0 ; i--){
            if(arr[i] == 1) t = !t, w = !w;
            else{
                if((n - i) % 2 == 0){
                    if(t) w = true, t = false;
                    else w = false, t = true;
                }else{
                    if(t) w = false, t = true;
                    else w = true, t = false;
                }
            }
        }

        if(w) cout << "First\n";
        else cout << "Second\n";
    }
}