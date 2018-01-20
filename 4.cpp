#include <stdafx.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;


int main(int argc, char*argv[]) {
	double result = 0;
	char *str1 = argv[1];  // указатель на входную строку

	char *y = str1;      // указатель на обрабатываемую строку

	y = new char[strlen(argv[1])+1];

	for (int i = 0; i < (strlen(argv[1])+1); i++) {
		y[i] = 0;
	}

	for (int i = 0; i < (strlen(argv[1]) + 1); i++) {
		y[i] = argv[1][i];
	}

skobka1:
	int i = 0;
	int j = 0;
	while (y[i] != ')')
		i++;
	j = i;
	while (y[j] != '(')
		j--;

	int c = j;

	char *x = new char[i - j + 1];                    // выделение памяти для обработки выражения в скобках

	for (int k = 0; k < (i -j + 1); k++) {
		x[k] = 0;
	}

	for (int k = j + 1, l = i, t = 0; k<l; k++, t++) {
		if (y[k] != '(' && y[k] != ')')
			x[t] = y[k];
	}

	do {
		for (int k = i; k<strlen(y); k++) {
			y[k] = y[k + 1];
		}
		i--;
	} while (i != j);


	int count = 1;
	int count2 = 0;

	for (int i = 0; i < strlen(x); i++) {
		if ((char)x[i] == '+' || (char)x[i] == '-' || (char)x[i] == '*' || (char)x[i] == '/' || (char)x[i] == '^' || (char)x[i] == '%')
			count2++;
	}
	char *oper = new char[count2];
	for (int i = 0; i<strlen(oper); i++)
		oper[i] = '0';

	int g = 0;
	for (int i = 0; i<strlen(x); i++)
		if ((char)x[i] == '+' || (char)x[i] == '-' || (char)x[i] == '*' || (char)x[i] == '/' || (char)x[i] == '^' || (char)x[i] == '%') {
			oper[g] = (char)x[i];
			g++;
		}
	for (int i = 0; i<strlen(x); i++)
		if (x[i] >= '0'&&x[i] <= '9')
			;
		else count++;
		double *z = new double[count];
		int k = 0;
		for (int i = 0; i<count; i++)
			z[i] = 0;
		int n = strlen(x);
		for (int i = 0; i<n; i++)
			if (x[i] >= '0'&&x[i] <= '9')
				z[k] = z[k] * 10 + x[i] - '0';   // в случае если за числом - число
			else if (x[i] == '!')
				z[k] = result;
			else
				k++;

		if (strlen(oper)>1) {

			for (int i = 0; i<strlen(oper); i++) {
				if ((char)oper[i] == '^') {
					result = pow(z[i], z[i + 1]);
					if (i<(count2 - 1)) {
						for (int j = i; j<strlen(oper) - 1; j++) {
							oper[j] = oper[j + 1];
							oper[j + 1] = '0';
						}
						for (int k = i; k<count - 2; k++) {
							z[k + 1] = z[k + 2];
							z[k + 2] = 0;
							z[i] = result;
						}
						z[count - 1] = 0;
						i--;
					}
					else if (i == (count2 - 1)) {
						z[i] = result;
						z[i + 1] = 0;
						oper[count2 - 1] = '0';
					}
				}
			}
			/*	int a=0;
			int v=0;
			int d=0;*/
			for (int i = 0; i<strlen(oper); i++) {
				if ((char)oper[i] == '%') {
					/*a=z[i];
					v=z[i+1];
					d=a%v;
					result=d;*/
					result = ((int)z[i]) % ((int)z[i + 1]);
					if (i<(count2 - 1)) {
						for (int j = i; j<strlen(oper) - 1; j++) {
							oper[j] = oper[j + 1];
							oper[j + 1] = '0';
						}
						for (int k = i; k<count - 2; k++) {
							z[k + 1] = z[k + 2];
							z[k + 2] = 0;
							z[i] = result;
						}
						z[count - 1] = 0;
						i--;
					}
					else if (i == (count2 - 1)) {
						z[i] = result;
						z[i + 1] = 0;
						oper[count2 - 1] = '0';
					}
				}
			}

			for (int i = 0; i<strlen(oper); i++) {
				if ((char)oper[i] == '/') {
					result = z[i] / z[i + 1];
					if (i<(count2 - 1)) {
						for (int j = i; j<strlen(oper) - 1; j++) {
							oper[j] = oper[j + 1];
							oper[j + 1] = '0';
						}
						for (int k = i; k<count - 2; k++) {
							z[k + 1] = z[k + 2];
							z[k + 2] = 0;
							z[i] = result;
						}
						z[count - 1] = 0;
						i--;
					}
					else if (i == (count2 - 1)) {
						z[i] = result;
						z[i + 1] = 0;
						oper[count2 - 1] = '0';
					}
				}
			}

			for (int i = 0; i<strlen(oper); i++) {  // i - индекс оператора цикла
				if ((char)oper[i] == '*') {
					result = z[i] * z[i + 1];
					if (i<(count2 - 1)) {
						for (int j = i; j<strlen(oper) - 1; j++) {
							oper[j] = oper[j + 1];
							oper[j + 1] = '0';
						}
						for (int k = i; k<count - 2; k++) {
							z[k + 1] = z[k + 2];
							z[k + 2] = 0;
							z[i] = result;
						}
						z[count - 1] = 0;
						i--;                       // возвращаем индекс оператора цикла в предыдущее значение
					}
					else if (i == (count2 - 1)) {
						z[i] = result;
						z[i + 1] = 0;
						oper[count2 - 1] = '0';
					}
				}
			}
			for (int i = 0; i<strlen(oper); i++) {
				if ((char)oper[i] == '-') {
					result = z[i] - z[i + 1];
					if (i<(count2 - 1)) {
						for (int j = i; j<strlen(oper) - 1; j++) {
							oper[j] = oper[j + 1];
							oper[j + 1] = '0';
						}
						for (int k = i; k<count - 2; k++) {
							z[k + 1] = z[k + 2];
							z[k + 2] = 0;
							z[i] = result;
						}
						z[count] = 0;
						i--;
					}
					else if (i == (count2 - 1)) {
						z[i] = result;
						z[i + 1] = 0;
						oper[count2 - 1] = '0';
					}
				}
			}
			for (int i = 0; i<strlen(oper); i++) {
				if ((char)oper[i] == '+') {
					result = z[i] + z[i + 1];
					if (i<(count2 - 1)) {
						for (int j = i; j<strlen(oper) - 1; j++) {
							oper[j] = oper[j + 1];
							oper[j + 1] = '0';
						}
						for (int k = i; k<count - 2; k++) {
							z[i] = result;
							z[k + 1] = z[k + 2];
							z[k + 2] = 0;
						}
						z[count - 1] = 0;
						i--;
					}
					else if (i == (count2 - 1)) {
						z[i] = result;
						z[i + 1] = 0;
						oper[count2 - 1] = '0';
					}
				}
			}
		}
		else {
			if (oper[0] == '^')
				result = pow(z[0], z[1]);
			if (oper[0] == '%')
				result = (int)z[0] % (int)z[1];
			if (oper[0] == '*')
				result = z[0] * z[1];
			if (oper[0] == '/')
				result = z[0] / z[1];
			if (oper[0] == '+')
				result = z[0] + z[1];
			if (oper[0] == '-')
				result = z[0] - z[1];
		}
//		y[c] = '!';
		delete[]z;
		delete[]x;
		if (strlen(y)>2)
			goto skobka1;             // переход на метку mark1

		cout << "Result:" << result << endl;


		return 0;
}
