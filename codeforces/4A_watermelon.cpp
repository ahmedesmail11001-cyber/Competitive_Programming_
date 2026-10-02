#include <iostream>
using namespace std;

int main() {

    int w;
    cin >>w;

    // The number to be divided evenly it must be even and not be 2 as 2 is divided into two 1s
    if (w%2 == 0 && w!=2) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }


    return 0;

}