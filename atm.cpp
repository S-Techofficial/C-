#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int amount;
    float balance;
    cin >> amount >> balance;
    if(amount%5==0 && balance > (amount + 0.50)){
        balance -= amount - 0.50;
    }
    cout << fixed << setprecision(2) << balance;
    return 0;
}