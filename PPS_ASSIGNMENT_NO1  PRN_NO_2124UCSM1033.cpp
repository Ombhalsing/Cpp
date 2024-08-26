#include <iostream>
using namespace std;
class Car {

public: string brand; string model; int year; };

int main() {

Car carObj1;

carObj1.brand = "TATA";

carObj1.model = "HARRIER";

carObj1.year = 2019;

Car carObj2;

carObj2.brand = "MERCEDES";

carObj2.model = "AMG";

carObj2.year = 1991;


cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";

cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

return 0;

}