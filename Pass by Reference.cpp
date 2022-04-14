//Nama : Yusuf
//nrp : 5220600048
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Program{
private:
	static void Kuadrat(int &x);

public:
	static void Main();

};

void Program::Kuadrat(int &x){
	x = x * x;
	cout << x <<endl;
}

void Program::Main()
{
	int a = 3;
	Kuadrat(a);
	cout << a <<endl;
}

int main(){
	Program testing;

	testing.Main();

	cin.get();
}
