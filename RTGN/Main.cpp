#include <iostream>
#include <string>
//#include <conio.h>
using namespace std;

void Napis(string x);
string getLine();

int main(void)
{
	Napis("Ahoj, jsem virtualni GitHuber, rad opakuji!\n");
	string vstup;
	vstup = getLine();
	Napis(vstup + ", " + vstup + "!" + "\n");
//	_getch();
	return 0;

}
void Napis(string x) {
	cout << x;
}
string getLine() {
	string x; 
	cin >> x;
	return x;
}