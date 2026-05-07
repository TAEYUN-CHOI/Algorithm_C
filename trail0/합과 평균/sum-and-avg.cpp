#include <iostream>
using namespace std;

int main() {
    int A; int B;
    cin >> A >> B;
    double average = (double)(A+B)/2;
    cout << fixed;
    cout.precision(1);
    cout << A+B << " " << average;
    return 0;
}