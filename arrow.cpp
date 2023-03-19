#include <iostream>
using namespace std;

int main() {
   int baseChar;
   int headChar;

   cout << "Enter an integer:" << endl;
   cin >> baseChar;
   cout << "Enter another integer:" << endl;
   cin >> headChar;
   
   cout <<"     " << headChar << endl;
   cout <<"     " << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << endl;
   cout <<"     " << headChar << headChar << endl;
   cout <<"     " << headChar << endl;
   
   return 0;
}
