#include <iostream>
using namespace std;

int main(){
    int userNum;
    int userNum2;
    int sum;
    int product;
    int squared;
    int cubed;
    
    cout << "Enter integar:" << endl;
    cin >> userNum;

    squared = userNum * userNum;
    cubed = userNum * userNum * userNum;

    cout << "You entered: " << userNum << endl;
    cout << userNum << " squared is " << squared << endl;
    cout << "And " << userNum << " cubed is " << cubed << "!!" << endl;

    cout << "Enter another integer:" << endl;
    cin >> userNum2;

    sum = userNum + userNum2;
    product = userNum * userNum2;

    cout << userNum << " + " << userNum2 <<" is " << sum << endl;
    cout << userNum << " * " << userNum2 << " is " << product << endl;

    return 0;
     
}