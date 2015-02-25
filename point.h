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
	Point2D point[3];		// Точки треугольника 
public:
	Rectangle2D(){};
	Rectangle2D(const Point2D&,const Point2D&,const Point2D&); // построение треугольникам по трем точкам
	Rectangle2D(const int,const Point2D&, float,float,float);// Построение треугольника по трем сторонам и известной одной точке
	Rectangle2D(const int,const Point2D&, const int, Point2D&, float, int, int); //Построение треугольника по двум точкам стороне между ними и углам в этих точках
	Rectangle2D(const int, const Point2D&, int, float , float); // Построение треугольника по углу и двум сторонам прилижащих к углу
	~Rectangle2D(){};
	Point2D get_Point(const int); 			//Полчение нужной точки	
	void set_Point(const int,float,float);	//Изменение координат нужной точки
	Rectangle2D(const Rectangle2D&); 				// Конструктор копирования
	void swap(Rectangle2D&, Rectangle2D&);	// Перегрузка swap;
	Rectangle2D & operator = (const Rectangle2D&); 	// Оператор присваивания(копирования) 
};