#include <iostream>
using namespace std;

int main(){

    int x;
    cin >> x;

    for (int i=1; i<=x; i++) {
        for (int j=0; j<i; j++) {
            cout << '*';
        }
        cout << '\n';
    }


    // New way to print an ascending order of asterisks

    // for (int i=1; i <= x; i++) {
    //     cout << string(i, '*') << '\n';
    // }
    //

    return 0;
}