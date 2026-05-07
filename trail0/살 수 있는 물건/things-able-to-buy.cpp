#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(1000<=n && n<3000){
        cout << "mask";
    }
    else if(n<1000){
        cout << "no";
    }
    else if(3000<=n){
        cout << "book";
    }
    return 0;
}