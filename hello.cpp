#include<iostream>

using namespace std;

#define LOG(x) std::cout << x << std::endl
#define log(x) std::cout << x

class Calculator
{
	int a, b;
	string p = "primer numero: ",
		s = "segundo numero: ",
		r = "resultado: ";

	int dec(string text){
		int d;
		log(text);
		cin >> d;
		return d;
	}

	int sum(int a, int b){
		return a + b;
	}

	public: int fun(){
		a = dec(p);
		b = dec(s);
		log(r);
		LOG(sum(a, b));
		return a;
	}
};

int main() 
{
	Calculator xd{};
	xd.fun();
}

