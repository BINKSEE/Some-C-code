#include <iostream>
using namespace std;

int main(){
    cout << "This program will compute the sum of the first ten positive\n";
    cout << "integers. Press enter: \n";
    string enter;
    getline(cin, enter);
    int sum_integer = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
    cout << "The sum of the first ten positive integers is: ";
    cout << sum_integer;
    return 0;
}