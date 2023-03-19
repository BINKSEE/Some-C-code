// electric charge calculator
// Author: BINKSEE
// DATE: 10/02/2022

#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

   //variables
   double electricCap;
   double electricVol;
   double capacitorCharge;
   
   cout << "Please Enter your electric capicitance:" << endl; // User input
   cin >> electricCap;
   cout << "Please Enter your electric voltage:" << endl; // User input
   cin >> electricVol;
   
   capacitorCharge = electricCap / electricVol; // calculation for charge
   
   cout << "Capacitor charge is " << fixed << setprecision(3) << capacitorCharge << endl;
   
   return 0;
}