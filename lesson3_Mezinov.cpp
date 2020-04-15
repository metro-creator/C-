#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

setlocale(0, ""); 
	int a;  // создали переменную а и присвоили ей значение 
	cout << "Введите число a= "; // вывели на экран слова "Введите число"
	cin >> a;  
	int b;      // создали переменную b 
	cout << "Введите число b= "; // вывели на экран слова "Введите число"
	cin >> b;                // здесь мы вводим число
	
	char retg;  
    cout << "Введите знак операции ";
	cin >> retg;
	
	if (retg=='+'){
	 cout << a + b ;
	}
else
	if (retg=='-'){
	 cout << a - b ;
	}
else	
	if (retg=='*'){
	 cout << a * b ;
	}
else	
	if (retg=='/' and b==0){ 
 	cout << "На 0 делить нельзя! ";
	} 
else  

	if (retg=='/' ){ 
 	cout << a / b ;
	} 
else  cout << "Неверный символ операции! ";

}


















