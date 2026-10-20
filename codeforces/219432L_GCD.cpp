#include <iostream>
using namespace std;

int main(){

    int n1, n2;
    cin >> n1 >> n2;

    int mini = min(n1, n2);
    int gcd = INT_MIN;

    for (int i=1; i<= mini ; i++) {
        if (n1%i==0 && n2%i==0) {
            gcd = i;
        }
    }

    cout << gcd << '\n';

    return 0;
}