#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//matrice de caractere alocata dinamic
	char** matrix = new char* [5];
	

	for (int i = 0; i < 5; i++)
	{
		matrix[i] = new char[25];
	}

	strcpy_s(matrix[0], 25, "adidas"); //maxim 255 caractere pe destinatie pot fi scrise 
	strcpy_s(matrix[1], 25, "gucci");
	strcpy_s(matrix[2], 25, "haine");
	strcpy_s(matrix[3], 25, "traducere");
	strcpy_s(matrix[4], 25, "adevarat");
	
	for (int i = 0; i < 5; i++)
	{
		cout << matrix[i] << "\n";
	}

	return 0;
}