#include <iostream>
#include <stdlib.h>
 
using namespace std;

int main(){
	setlocale(0, "");
    cout << "������� ������ �����: ";
    int a;
    cin >> a;
 
    cout << "������� ������ �����: ";
    int b;
    cin >> b;
    
    cout << "������� ������ �����: ";
    int c;
    cin >> c;
    
    int ggg;
  	ggg = c;
  	
  if (a==b and b==c){
	cout <<"��� ����� �����";}
else  
    if (a==b or b==c or a==c){
    cout <<"�������� ����� ���";}
else
    if ((a<b and a>c) or (a>b and a<c)){
	ggg = a;
	cout <<"������� �����: ";
	cout << ggg;}
else
    if ((b<a and b>c) or (b>a and b<c)){
	ggg = b;
	cout <<"������� �����: ";
	cout <<ggg;}
else
	
	cout <<ggg;
   
    

 
    return 0;
}
