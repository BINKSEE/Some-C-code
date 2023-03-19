// Sphere Volume Program
// Author: BINKSEE
// DATE: 10/02/2022

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Declaring variables
   double sphereVolume;
   double sphereRadius;

   cout << "Enter a sphere Radius: " << endl;
   cin >> sphereRadius;

   sphereVolume = (4.0 / 3.0) * M_PI * (sphereRadius * sphereRadius * sphereRadius);

   cout <<"The volume of your Sphere with a radius of " << sphereRadius << " is " << fixed << setprecision(2) << sphereVolume << endl;

   return 0;
}