#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {

        for ( int j = 1; j <= n; j++ ) {
            j <= n - i ? cout << " " : cout << "*";
        }

        for ( int j = i - 1; j >=  1; j-- ) cout << "*"; 

        cout << endl;

    }

    for ( int i = n; i >= 1; i-- ) {

        for ( int j = 1; j <= n; j++ ) {
            j <= n - i ? cout << " " : cout << "*";
        }

        for ( int j = i - 1; j >=  1; j-- ) cout << "*"; 
        
        cout << endl;

    }

    return 0;

}