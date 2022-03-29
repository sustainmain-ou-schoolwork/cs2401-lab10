#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>

class Shape {
    public:
        /**
         * @brief Construct a new Shape object.
         * 
         * @param p_thickness the thickness of the Shape
         * @param p_cost_per_cubic_unit the cost of the Shape per cubic unit
         */
        Shape(double p_thickness = 1, double p_cost_per_cubic_unit = 1);


        /**
         * @brief Set the values for the Shape based on input from an istream.
         * 
         * @param ins the istream to read from
         */
        void input(std::istream& ins);


        /**
         * @return the cost of the Shape 
         */
        double cost() const {return thickness * cost_per_cubic_unit * area();}

        /**
         * @return the area of the Shape 
         */
        double area() const;

    private:
        double thickness;            // the thickness of the Shape
        double cost_per_cubic_unit;  // the cost of the Shape per cubic unit
};

class Circle:public Shape {
    public:
        /**
         * @brief Construct a new Circle object.
         * 
         * @param p_radius the radius of the Circle
         * @param p_thickness the thickness of the Circle
         * @param p_cost_per_cubic_unit the cost of the Circle per cubic unit
         */
        Circle(double p_radius = 0, double p_thickness = 1, double p_cost_per_cubic_unit = 1);

        /**
         * @return the area of the Circle 
         */
        double area() const;

    private:
        double radius;  // the radius of the Circle
};

class Rectangle:public Shape {
    public:
        /**
         * @brief Construct a new Rectangle object.
         * 
         * @param p_length the length of the Rectangle
         * @param p_width the width of the Rectangle
         * @param p_thickness the thickness of the Rectangle
         * @param p_cost_per_cubic_unit the cost of the Rectangle per cubic unit
         */
        Rectangle(double p_length = 0, double p_width = 0, double p_thickness = 1, double p_cost_per_cubic_unit = 1);

        /**
         * @return the area of the Circle 
         */
        double area() const;

    private:
        double length;  // the length of the Rectangle
        double width;   // the width of the Rectangle
};

class Trapezoid:public Shape {
    public:
        /**
         * @brief Construct a new Trapezoid object.
         * 
         * @param p_base1 the length of the first base of the Trapezoid
         * @param p_base2 the length of the second base of the Trapezoid
         * @param p_height the height of the Trapezoid
         * @param p_thickness the thickness of the Trapezoid
         * @param p_cost_per_cubic_unit the cost of the Trapezoid per cubic unit
         */
        Trapezoid(double p_base1 = 0, double p_base2 = 0, double p_height = 0, double p_thickness = 1, double p_cost_per_cubic_unit = 1);

        /**
         * @return the area of the Circle 
         */
        double area() const;

    private:
        double base1;   // the length of the first base of the Trapezoid
        double base2;   // the length of the second base of the Trapezoid
        double height;  // the height of the Trapezoid
};

#endif