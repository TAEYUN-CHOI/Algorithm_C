#include <iostream>
using namespace std;

int main() {
    int a; int b; int c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int average = (a+b+c)/3;
    cout << sum << endl << average << endl << sum - average;
    return 0;
}