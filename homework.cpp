// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
  char Action[256];
  char FirstString [256];
  int FirstNumber=1;
  char SecondString[256];
  int SecondNumber=2;
  
  cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]: ";
  cin >> Action;

  switch (Action[0]){
    
    case '+': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      FirstNumber=atoi(FirstString);
      SecondNumber=atoi(SecondString);
      cout << FirstNumber << Action[0] << SecondNumber << "=" << (FirstNumber+SecondNumber) << "\n";
      break;
    }

    case '-': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      FirstNumber=atoi(FirstString);
      SecondNumber=atoi(SecondString);
      cout << FirstNumber << Action[0] << SecondNumber << "=" << (FirstNumber-SecondNumber) << "\n";
      break;
    }

    case '*': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      FirstNumber=atoi(FirstString);
      SecondNumber=atoi(SecondString);
      cout << FirstNumber << Action[0] << SecondNumber << "=" << (FirstNumber*SecondNumber) << "\n";
      break;
    }

    case '%': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      FirstNumber=atoi(FirstString);
      SecondNumber=atoi(SecondString);
      cout << FirstNumber << Action[0] << SecondNumber << "=" << (FirstNumber%SecondNumber) << "\n";
      break;
    }

    case '|': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      FirstNumber=atoi(FirstString);
      SecondNumber=atoi(SecondString);
      cout << FirstNumber << Action[0] << SecondNumber << "=" << (FirstNumber|SecondNumber) << "\n";
      break;
    }

    case '&': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      FirstNumber=atoi(FirstString);
      SecondNumber=atoi(SecondString);
      cout << FirstNumber << Action[0] << SecondNumber << "=" << (FirstNumber&SecondNumber) << "\n";
      break;
    }

    case '!': {
      
      cout << "Введите число:";
      cin >> FirstString;

      FirstNumber=atoi(FirstString);
      cout << Action[0] << FirstNumber << "=" << (!FirstNumber) << "\n";
      break;
    }

    case '^': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      FirstNumber=atoi(FirstString);
      SecondNumber=atoi(SecondString);
      cout << FirstNumber << Action[0] << SecondNumber << "=" << (pow(FirstNumber, SecondNumber)) << "\n";
      break;
    }

    case '<': {
        
      int x;

      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите количество бит для сдвига:";
      cin >> SecondString;
       
      FirstNumber=atoi(FirstString);
      cout << FirstNumber;
      x=FirstNumber;
      SecondNumber=atoi(SecondString);
      
      x=x >> (32-SecondNumber); 
      FirstNumber=FirstNumber << SecondNumber; 

      cout << Action[0] << SecondNumber << "=" << (FirstNumber|x) << "\n";
      break;
    }

    case '>': {
        
      int x;

      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите количество бит для сдвига:";
      cin >> SecondString;
       
      FirstNumber=atoi(FirstString);
      cout << FirstNumber;
      x=FirstNumber;
      SecondNumber=atoi(SecondString);
      
      x=x << (32-SecondNumber); 
      FirstNumber=FirstNumber >> SecondNumber; 

      cout << Action[0] << SecondNumber << "=" << (FirstNumber|x) << "\n";
      break;
    }

    case '/': {
      
      cout << "Введите первое число:";
      cin >> FirstString;

      cout << "Введите второе число:";
      cin >> SecondString;
 
      SecondNumber=atoi(SecondString);
      if (SecondNumber!=0){
        FirstNumber=atoi(FirstString);
        cout << FirstNumber << Action[0] << SecondNumber << "=" << (FirstNumber/SecondNumber) << "\n";
      }else{
        cout << "Делить на ноль нельзя" << "\n";
      }
      break;
    }

    default:{
      cout << "Некорректная операция " << "\n";
      break;
    }
  }
  
  return 0; 
}
