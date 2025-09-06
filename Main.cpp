#include <iostream>
using namespace std;

int main() {
  
    double a, b;
	int 

  
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;


    c = (a * a) + (b * b);

    cout << "\nBased on your input, the calculated hypotenuse is: " << c << endl;
    return 0;
}
// fuck C++

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare variables as float (less precision, smaller memory footprint)
    float a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;

    cout << "Enter the length of side b: ";
    cin >> b;

    // Calculate hypotenuse using Pythagorean theorem
    c = sqrt((a * a) + (b * b));

    cout << "\nBased on your input, the calculated hypotenuse is: " << c << endl;

    return 0;
}
