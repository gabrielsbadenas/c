#include <iostream>
#include </home/gabriel/Documentos/c++/json.hpp>
using namespace std;
using json = nlohmann::json;
void xd(string msg)
{
	json j;
	j = {
		{"hola", "hi"},
		{"name", "gabriel"}
	};
	string x = j["name"];
	msg = msg + "\n";
	cout << x << msg;
}

void types(bool isIt)
{
	string colors[5] = {"rojo","verde","azul"};
	isIt ? cout << colors[0] : cout << colors[1];
	colors[2] == "azul" ? cout << colors[2]: cout << "no";
}

int main()
{
	xd("xd");
	types(false);
	types(true);
	cout << "hi\n";
}
