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
		int a = 100;
		int b = 200;

		/*memanggil function untuk menukar nilai */
		n->swap(a, b);

		string tempVar;
		getline(cin, tempVar);

		delete n;
	}

	int main(){
		int a = 100;
		int b = 200;

		NumberManipulator number1;
		NumberManipulator number2;
		NumberManipulator number3;
		NumberManipulator number4;

		number1.swap(100,200);
		number2.swap(100,200);
		number3.swap(100,200);
		number4.swap(100,200);

		cout << "sebelum menukar, nilai a : " << a <<endl;
		cout << "sebelum menukar, nilai b : " << b <<endl;
		cout << "setelah menukar, nilai a : " << a <<endl;
	    cout << "setelah menukar, nilai b : " << b <<endl;

		cin.get();
	}
