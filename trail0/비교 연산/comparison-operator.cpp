#include <iostream>
using namespace std;

int main() {
    int A; int B;
    cin >> A >> B;
    cout << bool(A>=B) << endl << bool(A>B) << endl << bool(B>=A) << endl << bool(B>A) << endl << bool(A==B) << endl << bool(A!=B);

    return 0;
}