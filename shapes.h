#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <cmath>

class Shape {
    public:
        /**
         * @brief Construct a new Shape object.
         * 
         * @param p_thickness the thickness of the Shape
         * @param p_cost_per_cubic_unit the cost of the Shape per cubic unit
         */
        Shape(double p_thickness = 0, double p_cost_per_cubic_unit = 0);


        /**
         * @brief Set the values for the Shape based on input from cin.
         */
        virtual void input();


        /**
         * @return the cost of the Shape 
         */
        double cost() const {return thickness * cost_per_cubic_unit * area();}

        /**
         * @return the area of the Shape
         */
        virtual double area() const;

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
         */
        Circle(double p_radius = 0);


        /**
         * @brief Set the values for the Shape based on input from cin.
         */
        void input();


        /**
         * @return the area of the Circle 
         */
        double area() const {return M_PI * radius * radius;}

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
         */
        Rectangle(double p_length = 0, double p_width = 0);


        /**
         * @brief Set the values for the Shape based on input from cin.
         */
        void input();


        /**
         * @return the area of the Circle 
         */
        double area() const {return length * width;}

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
         */
        Trapezoid(double p_base1 = 0, double p_base2 = 0, double p_height = 0);


        /**
         * @brief Set the values for the Shape based on input from cin.
         */
        void input();


        /**
         * @return the area of the Circle 
         */
        double area() const {return height * (base1 + base2) / 2.0;}

    private:
        double base1;   // the length of the first base of the Trapezoid
        double base2;   // the length of the second base of the Trapezoid
        double height;  // the height of the Trapezoid
};

#endif