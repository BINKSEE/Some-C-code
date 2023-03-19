// simple gas to oil ratio calculator
// Author: BINKSEE
// DATE: 10/02/2022

#include <iostream>
using namespace std;

int main() {
    
   // Declaring variables
   double gasVolume;
   double oilVolume;
   double mixRatio;
   
   cout << "Enter gas volume: "; // User input for gas volume
   cin  >> gasVolume;

   cout << "Enter oil volume: "; // User input for oil volume
   cin  >> oilVolume;

   mixRatio = gasVolume / oilVolume; // calculation for mixratio
   
   cout << "Gas to oil mix ratio is " << mixRatio << ":1" << endl;
   
   return 0;
}