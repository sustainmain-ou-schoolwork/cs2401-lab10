#include "shapes.h"

using namespace std;

Shape::Shape(double p_thickness, double p_cost_per_cubic_unit) {
    thickness = p_thickness;
    cost_per_cubic_unit = p_cost_per_cubic_unit;
}

void Shape::input() {
    cout << "Enter the thickness: ";
    cin >> thickness;
    cout << "Enter the cost per cubic unit: ";
    cin >> cost_per_cubic_unit;
}

double Shape::area() const {
    return 0;
}


Circle::Circle(double p_radius) {
    radius = p_radius;
}

void Circle::input() {
    Shape::input();
    cout << "Enter the radius: ";
    cin >> radius;
}


Rectangle::Rectangle(double p_length, double p_width) {
    length = p_length;
    width = p_width;
}

void Rectangle::input() {
    Shape::input();
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
}


Trapezoid::Trapezoid(double p_base1, double p_base2, double p_height) {
    base1 = p_base1;
    base2 = p_base2;
    height = p_height;
}

void Trapezoid::input() {
    Shape::input();
    cout << "Enter the length of base 1: ";
    cin >> base1;
    cout << "Enter the length of base 2: ";
    cin >> base2;
    cout << "Enter the height: ";
    cin >> height;
}