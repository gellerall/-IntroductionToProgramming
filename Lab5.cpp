//1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)
#include <iostream>

int main()
{
	float x1 = 1; 
	float x2 = 2;
	float y1 = 3;
	float y2 = 4;
	float length;

	// Вычисляем расстояние между точками
	length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 

	// Выводим результат
	printf_s("%f", length);

	return 0;
}


//2. Даны три точки A, B, C на числовой оси.
//   Найти длины отрезков AC и BC и их сумму.
#include <iostream>

int main()
{
	int A = 1;
	int B = 2;
	int C = 3;

	// Вычисляем длину отрезков
	int AC = C - A; 
	int BC = C - B;

	//Находим их сумму
	int sum = AC + BC; 

	//Выводим результат
	printf_s("%i\n", AC); 
	printf_s("%i\n", BC);
	printf_s("%i", sum);

	return 0;
}

//3. Даны три точки A, B, C на числовой оси.Точка C расположена между точками A и B.
//   Найти произведение длин отрезков AC и BC
#include <iostream>

int main()
{
	int A = 1;
	int C = 2;   
	int B = 3;
	
	// Вычисляем длину отрезков
	int AC = C - A; 
	int BC = B - C;

	// Находим произведение
	int sum = AC * BC; 

	// Выводим результат
	printf_s("%i", sum); 

	return 0;
}

//4. Даны координаты двух противоположных вершин прямоугольника :(x1, y1), (x2, y2).
//   Стороны прямоугольника параллельны осям координат.
//   Найти периметр и площадь данного прямоугольника.
#include <iostream>

int main()
{
	int x1 = 8; 
	int x2 = 12;
	int y1 = 10;
	int y2 = 25;

	// Вычисляем длины сторон
	int a = x2 - x1; 
	int b = y2 - y1;

	// Вычисляем периметр p и площадь s
	int p = 2 * a + 2 * b; 
	int s = a * b; 

	// Выводим результат
	printf_s("%i\n", p); 
	printf_s("%i", s);

	return 0;
}
//5. Даны координаты трех вершин треугольника : (x1, y1), (x2, y2), (x3, y3).
//   Найти его периметр и площадь
#include <iostream>
#include <cmath>

int main()
{
	float x1 = 1; 
	float x2 = 2;
	float x3 = 3;
	float y1 = 4;
	float y2 = 5;
	float y3 = 6;

	// Вычисляем длины трех сторон по теореме Пифагора
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
	float b = sqrt((x1 - x3) * (x1 - x3) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x2 - x3) * (x2 - x3) + (y3 - y2) * (y3 - y2));

	// Вычисляем периметр
	float p = a + b + c;

	// Вычисляем полупериметр для нахождения площади
	float p2 = (a + b + c) / 2; 

	// Вычисляем площадь
	float s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c)); 
	printf_s("%f\n", p);

	// Выводим результат
	printf_s("%f", s);

	return 0;
}