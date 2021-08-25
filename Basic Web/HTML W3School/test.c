#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
class Exception{
public:
	Exception(){
		cout<<"Error:";
	}
	char* message(){
		return "input a character is not digit: ";
	}
};
int read(){
	char str[20]; int x;
	cout<<"input a integer: ";cin.seekg(0,ios::end);cin.clear();
	cin.get(str,20);
	for(int i=0;i<strlen(str);i++)
		if(isdigit(str[i]))throw Exception();
	x=atoi(str);
	return x;
}
void main(){
	int num;
	while(1){
		try{
			num=read();
			cotu<<"Result: "<<num<<endl;
		}catch(Exception e){
			cout<<e.message()<<endl;
		}
	}
	getch();
}