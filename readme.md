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

### *Pattern 8 - Inverted Pattern*

<h2>
    <pre>
12345
1234
123
12
1    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = n; i >= 1; i--) {
        for ( int j = 1; j <= i; j++ ) {
            cout << j;
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 9 - 0-1 Pattern*

<h2>
    <pre>
1
01
101
0101
10101    
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
            (i+j) % 2 == 0 ? cout << 1 : cout << 0;
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 10 - Rhombus*

<h2>
    <pre>
    *****
   *****
  *****
 *****
*****        
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = n; i >= 1; i-- ) {
        for ( int j = 1; j <= n + i - 1; j++ ) {
            j <= i-1 ? cout << " " : cout << "*";  
        }
        cout << endl;
    }

    return 0;

}
```

### *Pattern 11 - Number Pattern*

<h2>
    <pre>
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5     
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n-i; j++ ) cout << " ";
        for ( int j = 1; j <= i; j++ ) cout << j << " ";
        cout << endl;
    }

    return 0;

}
```

### *Pattern 12 - Palindrome Pattern*

<h2>
    <pre>
    1
   212
  32123
 4321234
543212345    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n - i; j++ ) cout << " ";
        for ( int j = i; j >= 1; j-- ) cout << j;
        for ( int j = 2; j <= i; j++ ) cout << j; 
        cout << endl;
    }

    return 0;

}
```

### *Pattern 13 - Star Pattern*

<h2>
    <pre>
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
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
```

### *Pattern 14 - Zig-Zag Pattern*

<h2>
    <pre>
  *   *  
 * * * * 
*   *   *    
    </pre>
</h2>

```cpp
#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for ( int i = 1; i <= 3; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            ( (i+j) % 4 == 0 ) || ( i==2 && j%4 == 0 ) ? cout << "*" : cout << " ";
        }
        cout << endl;
    }

}
```

### *Pattern 15 - Pascal's Triangle*

<h2>
    <pre>
1
11
121
1331
14641        
    </pre>
</h2>

```cpp
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
```