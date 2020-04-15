#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(0, ""); 
	int a;  // создали переменную а и присвоили ей значение 
	cout << "¬ведите число a= "; // вывели на экран слова "¬ведите число"
	cin >> a;  
	int b;      // создали переменную b 
	cout << "¬ведите число b= "; // вывели на экран слова "¬ведите число"
	cin >> b;                // здесь мы вводим число
	cout << a + b;          
}

