#include <iostream>
using namespace std;

class Point2D
{
private:
	float x;
	float y;
public:
	Point2D(float,float);	// Конструктор с задание координат
	Point2D();				// Конструктор по-умолчанию
	~Point2D(){};			// Деструктор по-умолчанию
	float get_X();			// Получение значения о координате Х
	float get_Y();			// Получение значения о координате Y
	void set_X(float);		// Задание значения Х
	void set_Y(float);		// Задание значения Y
	Point2D(const Point2D&); 				// Конструктор копирования
	void swap(Point2D&, Point2D&);	// Перегрузка swap;
	Point2D & operator = (const Point2D&); 	// Оператор присваивания(копирования) 
	void printPoint();		// вывод на экран значения координат
};

class  Rectangle2D
{
private:
	Rectangle2D();
	~Rectangle2D(){};
public:
}