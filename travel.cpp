// Travel time Program
// Author: BINKSEE 
// DATE: 10/02/22

#include <iostream>
using namespace std;

int main(){

    double milesTravel; // User input of miles to travel
    double hoursFly; // Travel hours if flying those miles
    double hoursDrive; // Travel hours if driving those miles
    double speedCar;

    cout << "Enter miles to travel: " << endl;
    cin >> milesTravel;
    cout << "If driving, enter the desired speed of the car" << endl;
    cin >> speedCar;

    hoursFly = milesTravel / 500.0; // Plane flies 500 mph
    hoursDrive = milesTravel / speedCar; // User entered speed for car

    cout << milesTravel << " miles would take: " << endl;
    cout << "   " << hoursFly << " hours to fly" << endl;
    cout << "   " << hoursDrive << " hours to drive" << endl;

    return 0;

}