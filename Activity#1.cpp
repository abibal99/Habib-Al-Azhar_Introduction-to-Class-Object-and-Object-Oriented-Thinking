#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
  
  
    void displayInfo() {
        cout << "Car details: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
  Car car1;
  car1.brand = "BMW";
  car1.model = "xy50";
  car1.year = 2020;
  car1.displayInfo();
  return 0;
  
}