#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int max = INT_MIN;

    while (n--) {
        int x;
        cin >> x;
        if (x>max) {
            max=x;
        }
    }

    cout << max << '\n';

    return 0;

}