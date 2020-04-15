#include <iostream>
#include <stdlib.h>
 
using namespace std;

int main(){
	setlocale(0, "");
    cout << "¬ведите первое число: ";
    int a;
    cin >> a;
 
    cout << "¬ведите второе число: ";
    int b;
    cin >> b;
    
    cout << "¬ведите третье число: ";
    int c;
    cin >> c;
    
    int ggg;
  	ggg = c;
  	
  if (a==b and b==c){
	cout <<"все числа равны";}
else  
    if (a==b or b==c or a==c){
    cout <<"среднего числа нет";}
else
    if ((a<b and a>c) or (a>b and a<c)){
	ggg = a;
	cout <<"среднее число: ";
	cout << ggg;}
else
    if ((b<a and b>c) or (b>a and b<c)){
	ggg = b;
	cout <<"среднее число: ";
	cout <<ggg;}
else
	
	cout <<ggg;
   
    

 
    return 0;
}
