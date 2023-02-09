#pragma once
#include <vector>
#include <math.h>
#include <string>
using namespace std;
/// <summary>
/// Базовий клас для трьох заданих систем нелінійних рівнянь.
/// </summary>
class Base_eq
{
public:
	/// <summary>
	/// Задає атрибути класу.
	/// </summary>
	Base_eq(vector<vector<double>>, double, double, double, int);
	/// <summary>
	/// Рахує значення першої невідомої.
	/// </summary>
	virtual string find_x(double) = 0;
	/// <summary>
	/// Рахує значення другої невідомої.
	/// </summary>
	virtual string find_y(double) = 0;
	/// <summary>
	/// Розв'язання системи нелінійних рівнянь методом Якобі.
	/// </summary>
	string solution_Yacobi();
	/// <summary>
	/// Розв'язання системи нелінійних рівнянь методом Гауса-Зейделя.
	/// </summary>
	string solution_Gaus_Zeydel();
	/// <summary>
	/// Формує рядок для виведення результатів розрахунків за одну ітерацію.
	/// </summary>
	virtual string it_print(double, double, int) = 0;
	/// <summary>
	/// Формує рядок для виведення результатів розрахунків вцілому.
	/// </summary>
	virtual string res_print(double, double) = 0;
protected:
	/// <summary>
	/// Таблиця значень коефіцієнтів системи нелінійних рівнянь.
	/// </summary>
	vector<vector<double>> param;
	/// <summary>
	/// Початкове значення першої похідної.
	/// </summary>
	double x0;
	/// <summary>
	/// Початкове значення другої похідної.
	/// </summary>
	double y0;
	/// <summary>
	/// Значення точності розрахунків.
	/// </summary>
	double eps;
	/// <summary>
	/// Значення максимальної кількості ітерацій.
	/// </summary>
	int max;
};