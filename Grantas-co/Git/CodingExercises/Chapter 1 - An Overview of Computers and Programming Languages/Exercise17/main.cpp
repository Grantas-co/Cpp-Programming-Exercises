// =================== October 13th 2024 - Grantas.co ==========================
// ========================== Exercise 17 ======================================
// The volume of a sphere is (4.0/3.0)*pi*r^3 and the surface area is 4.0*pi*r^2 
// where r is the radius of the sphere. Given the radius, design an algorithm
// that computes the volume and surface area of the sphere. Write the 
// C+ + statement corresponding to each statement in the algorithm.
// =============================================================================
#include <iostream>
using namespace std;

int main() {
    const double pi {3.14159};
    double radius {0.0};
    double volumeOfSphere {0.0};
    double surfaceArea {0.0};
    
    cout << "Welcome to the volume and surface calculator of a sphere\n";
    cout << "Please enter the radius of the sphere: ";
    cin >> radius;
    
    // Volume of Sphere
    volumeOfSphere = (4.0 / 3.0)*(pi*radius*radius*radius);
    cout << "The volume of the sphere with radius " << radius << " is " << volumeOfSphere << endl;
    
    // Surface area
    surfaceArea = 4*pi*radius*radius;
    cout << "The surface area of the sphere with radius " << radius << " is " << surfaceArea << endl;
    
    return 0;
}