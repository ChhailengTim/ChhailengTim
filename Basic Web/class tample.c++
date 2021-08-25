#include<iostream>
#include<conio.h>
using namespace std;
template<class T1>
class Show{
private:
	T1 x;
	T1 y;
public:
	void input();
	void output();
	float sum(){return (x+y);}
};
template<class T1>
void Show<T1>::input(){
	cout<<"Input X:";cin>>x;
	cout<<"Input y:";cin>>y;
}
template<class T1>
void Show<T1>::output(){
	cout<<"x="<<x<<"\ty="<<y<<"\tsum"<<sum()<<endl;
}
void main(){
	Show<int>obj1; obj1.input(); obj1.output();
	Show<float>obj2; obj2.input(); obj2.output();
	Show<Rectangle>obj3; obj3.input(); obj3.output();
	Show<Worker>obj4; obj4.input(); obj4.output();
	getch();
}










