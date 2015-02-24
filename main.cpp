#include "point.h"
int main(int argc, char const *argv[])
{
	// Тест работы конструктора и оператора присваения
	Point2D X(1,1);
	Point2D Y(X);
	Point2D Z = Y;
	X.printPoint();
	Y.printPoint();
	Z.printPoint();
	
	return 0;
}