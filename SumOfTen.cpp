#include <iostream>
using namespace std;

/// Sum of the first ten natural numbers/////
int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum = " << sum;
    return 0;
}

///Product of the first ten natural numbers/////
/*
#include <iostream>
using namespace std;

int main() {
    int n, sum = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum *= i;
    }
    cout << "Sum = " << sum;
    return 0;
}
*/
