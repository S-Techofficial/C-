#include <iostream>

using namespace std;


int main(){
    int testcases;
    cin >> testcases;
    for(int i=1; i<=testcases; i++){
        int coupon, deliveryCharge, A1, A2, A3, B1, B2, B3;
        cin >> deliveryCharge >> coupon;
        cin >> A1 >> A2 >> A3;
        cin >> B1 >> B2 >> B3;
        if(coupon < (2*deliveryCharge)){
            cout << "YES";
        }
        else cout << "NO";
    }

}
