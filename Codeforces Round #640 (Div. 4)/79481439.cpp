/*
    Contest Name : Codeforces Round #640 (Div. 4)
    Problem Title : A - Sum of Round Numbers
    Problem Url : https://codeforces.com/contest/1352/problem/A
    Verdict : Accepted
    Time : 77 ms
    Memory : 3800 KB
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> ans;
        int k, n = 1;
        cin >> k;
        while(k != 0){
            if(k % 10 * n != 0) ans.push_back(k % 10 * n);
            n *= 10;
            k /= 10;
        }

        cout << ans.size() << '\n';
        for(int i = 0 ; i < ans.size() ; i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}