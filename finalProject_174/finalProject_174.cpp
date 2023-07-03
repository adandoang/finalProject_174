#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/
public:
	double phi = 3.14;
	float Luas() {
		return (phi * getX() * getX());
	}
	float Keliling() {
		return (2 * phi * getX());
	}
	void input() {
		int a;
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		cin >> a;
		setX(a);
		cout << "Luas Lingkaran = " << Luas() << endl;
		cout << "Keliling Lingkaran = " << Keliling() << endl;
		cekUkuran();
	}
	void cekUkuran() {

		if (Keliling() >= 40) {
			cout << "\nUkuran lingkaran adalah besar" << endl;
		}
		else if (Keliling() <= 20) {
			cout << "\nUkuran lingkaran adalah sedang" << endl;
		}
		else if (Keliling() <= 10) {
			cout << "\nUkuran lingkaran adalah kecil" << endl;
		}
	}
};
class Persegipanjang :public bidangDatar { /*lengkapi disini*/ 
public:
	float Luas() {
		return (getX() * getY());
	}
	float Keliling() {
		return (2 * getX() + 2 * getY());
	}
	void input() {
		int a;
		int b;
		cout << "\nPersegi panjang dibuat" << endl;
		cout << "masukan panjang : ";
		cin >> a;
		setX(a);
		cout << "masukan lebar : ";
		cin >> b;
		setY(b);
		cout << "Luas persegi panjang = " << Luas() << endl;
		cout << "Keliling persegi panjang = " << Keliling() << endl;
		cekUkuran();
	}
	void cekUkuran() {

		if (Keliling() >= 40) {
			cout << "\nUkuran lingkaran adalah besar" << endl;
		}
		else if (Keliling() <= 20) {
			cout << "\nUkuran lingkaran adalah sedang" << endl;
		}
		else if (Keliling() <= 10) {
			cout << "\nUkuran lingkaran adalah kecil" << endl;
		}
	}
};
int main() { /*lengkapi disini*/ 
	char ch;
	do
	{
	bidangDatar* bd;
	Lingkaran li;
	Persegipanjang pp;
	

	bd = &li;
	bd->input();
	bd = &pp;
	bd->input();
	
	
		cout << "continue search (y/n) ?";
		cin >> ch;
	}
	while ((ch == 'y') || (ch == 'Y'));
}