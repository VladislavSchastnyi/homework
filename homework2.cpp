#include <iostream>
#include <math.h>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int vichitanie(int a, int b) {
	return a - b;
}

int proiz(int a, int b) {
	return a * b;
}

int delenie(int a, int b) {
	return a / b;
}

int modul(int a, int b) {
    return a % b;
}

int stepen(int a, int b) {
    return (pow(a, b));
}

int logici(int a, int b) {
	return a & b;
}

int logicili(int a, int b) {
	return a | b;
}

int logicnet(int a) {
	return !a;
}

int main(int argc, char *argv[]) {
  char operation = 'c';
  int a, b;
  while(operation != 'e'){
    cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]: ";
    cin >> operation;
  switch(operation)
  {
  case '+':
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a << "+" << b << "=" <<  sum( a,  b) << endl;
    break;
  case '-':
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a << "-" << b << "=" << vichitanie( a,  b) << endl;
    break;
  case '*':
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a << "*" << b << "=" << proiz( a,  b) << endl;  
    break;
  case '/':
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    if ( b != 0)
    cout << a << "/" << b << "=" <<  delenie( a,  b) << endl;
    else 
    cout << "Делить на 0 нельзя" << endl;
    break;
 case '%': 
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a << "%" << b << "=" << modul( a,  b) << endl;
    break;
 case '^': 
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a << "^" << b << "=" << stepen( a,  b) << endl;
    break;
 case '&': 
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a << "&" << b << "=" << logici( a,  b) << endl;
    break;  
 case '|': 
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a << "&" << b << "=" << logicili( a,  b) << endl;
    break;  
 case '!': 
    cout << "Введите число: ";
    cin >> a;
    cout << a << "=" << logicnet( a) << endl;
    break; 
  }
}
   return 0;
}
