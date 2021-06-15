#include <iostream>
using namespace std;

int main(){
    int N,H,x;
    string res;
    cin >> N >> H >> x;

    for(int i=1; i<=N; i++){
        int T;
        cin >> T;

        if(H == (x+T)){
            res = "YES";
            break;
        }else {
            res = "NO";
        }
    }

    cout << res;
}