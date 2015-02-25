#include "point.h"
Point2D::Point2D(float x_, float y_):x(x_),y(y_)
{}
Point2D::Point2D():x(0.0),y(0.0){}

Point2D::Point2D(const Point2D& other):x(other.x), y(other.y){}
void Point2D::swap(Point2D& lp, Point2D& rp)
{
	using std::swap;
	swap(lp.x,rp.x);
	swap(lp.y,rp.y);
}

Point2D& Point2D::operator= (const Point2D& other)
{ 
	this->x = other.x;
	this->y = other.y;
	return (*this);
}
float Point2D::get_Y()
{
	return y;
}
float Point2D::get_X()
{
	return x;
}
void Point2D::set_X(float X)
{
	x = X;
}
void Point2D::set_Y(float Y)
{
	y = Y;
}
void Point2D::printPoint()
{
	cout <<"X=" << x <<endl\
	<< "Y=" << y <<endl;
}

///////////////////////////////////////////////////////////

Rectangle2D::Rectangle2D(const Point2D& x,const Point2D& y,const Point2D& z )
{
	point[0] = x;
	point[1] = y;
	point[2] = z;
}
Point2D Rectangle2D::get_Point(const int i)
{
	return point[i];
}
void Rectangle2D::set_Point(const int i, float x, float y)
{

}

Rectangle2D::Rectangle2D(const Rectangle2D& other):point(other.point){}
// void Rectangle2D::swap(Rectangle2D& lp, Rectangle2D& rp)
// {
// 	using std::swap;
// 	swap(lp.x,rp.x);
// 	swap(lp.y,rp.y);
// }

// Rectangle2D& Rectangle2D::operator= (const Rectangle2D& other)
// { 
// 	this->x = other.x;
// 	this->y = other.y;
// 	return (*this);
// }