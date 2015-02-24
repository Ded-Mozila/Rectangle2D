class Point2D
{
private:
	float x;
	float y;
public:
	Point2D(float,float);	// Конструктор с задание координат
	Point2D(){};			// Конструктор по-умолчанию
	~Point2D(){};			// Деструктор по-умолчанию
	float get_X();			//Получение данных о координате Х
	float get_Y();

};