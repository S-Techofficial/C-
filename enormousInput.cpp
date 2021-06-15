#include <iostream>

using namespace std;

int main(){
    int count = 0, n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        if(a%k==0){
            count++;
        }
    }
    cout << count;
}