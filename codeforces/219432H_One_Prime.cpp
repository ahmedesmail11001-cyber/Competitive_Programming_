#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    bool prime = true;

    for (int i=2; i<x; i++) {
        if (x%i==0) prime = false;
    }

    if (prime == true){
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }


    return 0;
}