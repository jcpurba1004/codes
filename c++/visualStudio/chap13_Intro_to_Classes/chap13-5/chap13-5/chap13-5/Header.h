// Specification file for the Rectangle class
// This version uses some inline member functions.
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		double width;
		double length;
	public:
		void setWidth(double);
		void setLength(double);

	double getWidth() const
		{ return width; }

	double getWidth() const
		{ return length; }

	double getWidth() const
		{ return width * length; }
};
#endif