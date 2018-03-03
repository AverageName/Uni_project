#include <iostream>
using namespace std;


class Matrix
{
private:
	double** data;
	int rows;
	int cols;
public:
	Matrix();
	Matrix(double** _data,int _rows, int _cols);
	Matrix(int rows, int cols);
	Matrix(const Matrix&);
	~Matrix();
	friend ostream& operator<<(ostream& out, const Matrix& matrix);
	Matrix& operator=(const Matrix& matrix);
	friend Matrix operator+(const Matrix& first_matrix, const Matrix& second_matrix);
	friend Matrix operator*(const Matrix&, const Matrix&);
	Matrix& operator*=(const Matrix&);
	Matrix& operator+=(const Matrix&);
	void allocSpace();



};
