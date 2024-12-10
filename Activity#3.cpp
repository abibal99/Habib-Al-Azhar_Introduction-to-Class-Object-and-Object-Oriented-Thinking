#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "Area of a rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(65, 78);
    rect.displayArea();
    return 0;
    
}
