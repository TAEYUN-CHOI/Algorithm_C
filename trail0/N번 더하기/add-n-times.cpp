#include <iostream>
using namespace std;

int main() {
    int A; int N; int i;
    cin >> A >> N;
    for (i=0; i<N; i++){
        A+=N;
        cout << A << endl;
    }
    return 0;
}