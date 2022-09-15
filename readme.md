# <p style="text-align:center;">Important Pattern Questions</p>

### *Pattern 1 - Solid Rectangle*

<h2>
    <pre>
****
****
****
****
****
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int row, col;
    cin >> row >> col;

    for ( int i = 1; i <= row; i++ ) {
        for ( int j = 1; j <= col; j++ ) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 2 - Hollow Rectangle*

<h2>
    <pre>
****
*  *
*  *
*  *
****    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int row, col;
    cin >> row >> col;

    for ( int i = 1; i <= row; i++ ) {
        for ( int j = 1; j <= col; j++ ) {
            i == 1 || i == row || j == 1 || j == col ? cout << "*" : cout << " ";
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 3 - Inverted Half Pyramid*

<h2>
    <pre>
*****
****
***
**
*    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = n; i >= 1; i-- ) {
        for ( int j = 1; j <= i; j++ ) {
            cout << "*";
        }
        cout << endl;
    }    

    return 0;

}
```

### *Pattern 4 - Half Pyramid After 180deg Rotation*

<h2>
    <pre>
    *
   **
  ***
 ****
*****    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            j <= n - i ? cout << " " : cout << "*";
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 5 - Half Pyramid Using Numbers*

<h2>
    <pre>
1
22
333
4444
55555
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= i; j++ ) {
            cout << i;
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 6 - Floyd's Triangle*

<h2>
    <pre>
1
23
456
78910
1112131415    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n, k = 1;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= i; j++ ) {
            cout << k;
            k++;
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 7 - Butterfly*

<h2>
    <pre>
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= 2*n; j++ ) {
            j <= i || j > 2*n - i ? cout << "*" : cout << " ";
        }
        cout << endl;
    }

    for ( int i = n; i >= 1; i-- ) {
        for ( int j = 1; j <= 2*n; j++ ) {
            j <= i || j > 2*n - i ? cout << "*" : cout << " ";
        }
        cout << endl;
    }

    return 0;

}
```