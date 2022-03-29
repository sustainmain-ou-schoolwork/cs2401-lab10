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

#endif