#include <iostream>
#include <vector>
using namespace std;


/*
    +
    5
    5 2 4 3 7


    +++++
    ++
    ++++
    +++
    +++++++

 */

int main(){

    char c;
    int n, x;
    cin >> c >> n;

    vector <int> v;

    for (int i=0; i<n; i++) {
        cin >> x;
        v.push_back(x);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<v[i]; j++) {
            cout << c ;
        }
        cout << '\n';
    }

    return 0;
}