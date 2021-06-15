#include <iostream>
#include <math.h>
#include <iomanip> //setprecision()

using namespace std;

int main(){
    double pi= 3.14, radius;
    cout << "Enter radius: "<< endl;
    cin >> radius;
    cout << setprecision(3) << (pi*pow(radius,2));
}