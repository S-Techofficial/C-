#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int maxv(long long int x, long long int y){
    if(x>y) return x;
    else return y;
}

long long int minv(long long int x, long long int y){
    if(x<y) return x;
    else return y;
}

long long int solve(long long int n, long long int e, long long int h, long long int a, long long int b, long long int c){
    if(n<=0){
        return 0;
    }
    
    long long int res=1e15;
    if(2*n <= e){
        res = minv(a*n, res);
    } 
    
    if(3*n <= h){
        res = minv(b*n, res);
    } 
    
    if(n<=h && n<=e){
        res = minv(c*n, res);
    } 
    
    if((h-n)/2 >= 1 && (h-n)/2 >= (n-e)){
        if(b-c<0){
            long long int temp = minv(n-1, (h-n)/2);
            res = minv(temp*(b-c) + n*c, res);
        } else {
            long long int temp = maxv(1, (n-e));
            res = minv(temp*(b-c) + n*c, res);
        }
    } 
    
    if(e/2 >= 1 && e/2 >= (3*n-h+2)/3){
        if(a-b<0 ){
            long long int temp = minv(n-1, e/2);
            res = minv(temp*(a-b) + n*b, res);
        } else {
             long long int temp = maxv(1,(3*n-h+2)/3);
            res = minv(temp*(a-b) + n*b, res);
        }
    } 
    
    if(e-n >= 1 && e-n >= n-h){
        if(a-c<0){
            long long int temp = minv(n-1, e-n);
            res = minv(temp*(a-c) + n*c, res);
        } else {
            long long int temp = maxv(1, n-h); 
            res = minv(temp*(a-c) + n*c, res);
        }
    } 
    
    if(n>=3 && e>=3 && h>=4){
        res = minv(res, a+b+c+solve(n-3,e-3,h-4,a,b,c));
    }
    
    return res;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long int n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;
        long long int ans = solve(n,e,h,a,b,c);
        if(ans == 1e15){
            cout << -1 << endl;
        } else cout << ans << endl;
    }
    return 0;
}