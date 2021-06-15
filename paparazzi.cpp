#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// ptr
#define fir first
#define sec second


int solve(vector<int> v){

}

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> v;
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        int ans = solve(v);
        cout << ans << endl;
    }
}