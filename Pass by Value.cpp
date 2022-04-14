//Nama : Yusuf
//Nrp : 5220600048
#include <string>
#include <vector>
#include <iostream>
using namespace std;

	class NumberManipulator {
	public:
		void swap(int x, int y);
		static void Main(vector<string>);
   };

	void NumberManipulator::swap(int x, int y){
	   int temp;
	   temp = x; // menyimapan nilai dari x
	   x = y; // memasukkan y ke x
	   y = temp; // memasukkan y
	}
	void NumberManipulator::Main(vector<string>){
		NumberManipulator *n = new NumberManipulator();
		int a = 50;
		int b = 100;

		/*memanggil function untuk menukar nilai */
		n->swap(a, b);

		string tempVar;
		getline(cin, tempVar);

		delete n;
	}

	int main(){
		int a = 50;
		int b = 100;

		NumberManipulator number1;
		NumberManipulator number2;
		NumberManipulator number3;
		NumberManipulator number4;

		number1.swap(50,100);
		number2.swap(50,100);
		number3.swap(50,100);
		number4.swap(50,100);

		cout << "sebelum menukar, nilai a : " << a <<endl;
		cout << "sebelum menukar, nilai b : " << b <<endl;
		cout << "setelah menukar, nilai a : " << a <<endl;
	    cout << "setelah menukar, nilai b : " << b <<endl;

		cin.get();
	}
