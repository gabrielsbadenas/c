#include<iostream>

using namespace std;

#define LOG(x) std::cout << x << std::endl
#define log(x) std::cout << x

class Persona{
	//public: 
		int edad;
	//public: 
		string nombre;
	public: 
		void constructor(string _nombre, int _edad){
			edad = _edad;
			nombre = _nombre; 
		}
	public: 
		void print(){
			log(nombre);
			log(" ");
			LOG(edad);
		}
};

int main(){
	Persona x{};
	x.constructor("gabriel", 19);
	x.print();
	return 0;
}