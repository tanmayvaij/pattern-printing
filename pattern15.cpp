#include <iostream>
using namespace std;

int fact(int n) {
    if ( n == 0 || n == 1 ) return 1;
    return n * fact(n - 1);
}

int nCr(int n, int r) {
    return fact(n) / ( fact(n-r) * fact(r) );
}

int main () {

    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j <= i; j++ ) {
            cout << nCr(i, j);
        }
        cout << endl;
    }    

    return 0;

}
