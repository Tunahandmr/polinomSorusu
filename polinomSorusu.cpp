
#include <iostream>
using namespace std;
class polinom {

	int* katsayi;
	int derece;
public:

	polinom(int derece){
		this->derece = derece;
		katsayi = new int[derece];
	}
	
	void katsayiAta() {
		this->derece = derece;
		
		cout << "katsayilari giriniz : "<<endl;
		for (int i = derece; i >= 0; i--) {
			cout << "katsayi" << i << ":";
			cin >> katsayi[i];

        }

		
	}

	void yaz() {
		cout << "(";
		for (int i = derece; i >= 0; i--) {

			if (derece == 0) {
				continue;
			}
            else if(i>1) {
				cout << katsayi[i] << "x" << i;

			}
			
            else if (i == 1) {

				cout << katsayi[i] << "x";
			}
			
			else if (i == 0) {
				cout << katsayi[i];

			}

			if (i != 0)
				cout << "+";
		}
		
		cout << ")";
		

	}
	 void topla(polinom &pol) {
		
		 for (int i = derece; i >= 0; i--) {

			 katsayi[i] = katsayi[i] + pol.katsayi[i];
			 
		 }
		 
	}
};

int main()
{
  
	int d;
	cout << "polinom derecesini giriniz : ";
	cin >> d;
	polinom p1(d), p2(d);
	p1.katsayiAta();
	p2.katsayiAta();
	p1.yaz();
	cout << " + ";
	p2.yaz();
	cout << " = ";
	p1.topla(p2);
	p1.yaz();
	
	return 0;

}