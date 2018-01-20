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

int lshift(int a) {
    return (a << 1); 
}

int rshift(int a) { 
    return (a >> 1); 
}

int vvodchisel(int *a1, int *b1){
    int correct=0;
    int aa, bb;
    
    cout << "Введите первое число: ";
	cin>>aa;
 
 	if ( !(cin.good()) ){
	    cerr << "Первое число введено неверно" << endl;
		cin.clear();
		cin.ignore(11, '\n');
		correct=1;
	}else{				    
		cout << "Введите второе число: ";
		cin>>bb;
			
		if ( !(cin.good()) ){
		    cerr << "Второе число введено неверно" << endl;
			cin.clear() ;
			cin.ignore(11 , '\n') ;
			correct=1;
		}
	}
			
    if(correct==0){
        (*a1)=aa;
        (*b1)=bb;
    }			
    return correct;
}

int main(int argc, char *argv[]) {
  char operation = 'c';
  int a, b;

  while(operation != 'e'){
    cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]: ";
    cin >> operation;
    
    switch(operation){
        case '+':
            if(vvodchisel(&a, &b)==0)
                cout << a << "+" << b << "=" <<  sum( a,  b) << endl;
            break;
        
        case '-':
            if(vvodchisel(&a, &b)==0)
                cout << a << "-" << b << "=" << vichitanie( a,  b) << endl;
            break;
        
        case '*':
            if(vvodchisel(&a, &b)==0)
                cout << a << "*" << b << "=" << proiz( a,  b) << endl;  
            break;
  
        case '/':
            if(vvodchisel(&a, &b)==0)
                if ( b != 0)
                    cout << a << "/" << b << "=" <<  delenie( a,  b) << endl;
                else 
                    cerr << "Делить на 0 нельзя" << endl;
            break;
        
        case '%': 
            if(vvodchisel(&a, &b)==0)
                cout << a << "%" << b << "=" << modul( a,  b) << endl;
            break;
 
        case '^': 
            if(vvodchisel(&a, &b)==0)
                cout << a << "^" << b << "=" << stepen( a,  b) << endl;
            break;
 
        case '&': 
            if(vvodchisel(&a, &b)==0)
                cout << a << "&" << b << "=" << logici( a,  b) << endl;
            break;  
            
        case '|': {
            if(vvodchisel(&a, &b)==0)
                cout << a << "|" << b << "=" << logicili( a,  b) << endl;
            break;  
 
        case '!': 
            cout << "Введите число: ";
            cin >> a;
         	
         	if ( !(cin.good()) ){
	            cerr << "Число ведено неверно" << endl;
		        cin.clear();
		        cin.ignore(11, '\n');
		        break;
         	}else
                cout << a << "=" << logicnet( a) << endl;
            break; 
 
        case '<':
            cout << "Введите число: ";
            cin >> a;
         	if ( !(cin.good()) ){
	            cerr << "Число введено неверно" << endl;
		        cin.clear();
		        cin.ignore(11, '\n');
		        break;
         	}else
                cout << a << "<" << lshift( a) << endl;
            break;
            
        case '>':
            cout << "Введите число: ";
            cin >> a;
         	if ( !(cin.good()) ){
	            cerr << "Число введено неверно" << endl;
		        cin.clear();
		        cin.ignore(11, '\n');
		        break;
         	}else
                cout << a << ">" << rshift( a) << endl;
            break;
        
        default:
            cerr << "Введен неверный параметр" << endl;
            break;
        }
    }
  }
    return 0;
}
