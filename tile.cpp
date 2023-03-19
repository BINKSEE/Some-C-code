// Tile Project Calculator 
// BINKSEE
// DATE: 10/15/2022

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){

    // Declaring variables
    double costPerTile, width, height, finalCost, tileSize;

    //finalCost calculation = (width * height * costPerTile)/ tileSize

cout << "Enter the cost per tile for project in decimal format. Ex. 0.00: " << endl; // user tile cost input
cin >> costPerTile;
cout << "Enter the tile size in square feet: " << endl; // user tile size in sq ft input
cin >> tileSize;
cout << "Enter the Width of your project in feet: " << endl; // user project width input
cin >> width; 
cout << "Enter the Height of your project in feet: " << endl; // user project height input
cin >> height;

//outputs with calculations
cout << "The area of your project is " << width * height  << " square feet." << endl; 
cout << "The cost of your project is $" << (width * height * costPerTile)/ tileSize << " at " <<"$" << costPerTile << " per tile." << endl;

return 0;

}