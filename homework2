#include <iostream>

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
    cout << a << "/" << b << "=" <<  delenie( a,  b) << endl;
    break;
  }
}
   return 0;
}
