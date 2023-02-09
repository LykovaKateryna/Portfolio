#pragma once
#include <vector>
#include <math.h>
#include <string>
using namespace std;
/// <summary>
/// ������� ���� ��� ����� ������� ������ �������� ������.
/// </summary>
class Base_eq
{
public:
	/// <summary>
	/// ���� �������� �����.
	/// </summary>
	Base_eq(vector<vector<double>>, double, double, double, int);
	/// <summary>
	/// ���� �������� ����� �������.
	/// </summary>
	virtual string find_x(double) = 0;
	/// <summary>
	/// ���� �������� ����� �������.
	/// </summary>
	virtual string find_y(double) = 0;
	/// <summary>
	/// ����'������ ������� �������� ������ ������� ����.
	/// </summary>
	string solution_Yacobi();
	/// <summary>
	/// ����'������ ������� �������� ������ ������� �����-�������.
	/// </summary>
	string solution_Gaus_Zeydel();
	/// <summary>
	/// ����� ����� ��� ��������� ���������� ���������� �� ���� ��������.
	/// </summary>
	virtual string it_print(double, double, int) = 0;
	/// <summary>
	/// ����� ����� ��� ��������� ���������� ���������� �������.
	/// </summary>
	virtual string res_print(double, double) = 0;
protected:
	/// <summary>
	/// ������� ������� ����������� ������� �������� ������.
	/// </summary>
	vector<vector<double>> param;
	/// <summary>
	/// ��������� �������� ����� �������.
	/// </summary>
	double x0;
	/// <summary>
	/// ��������� �������� ����� �������.
	/// </summary>
	double y0;
	/// <summary>
	/// �������� ������� ����������.
	/// </summary>
	double eps;
	/// <summary>
	/// �������� ����������� ������� ��������.
	/// </summary>
	int max;
};