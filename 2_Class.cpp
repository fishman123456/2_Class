#include <iostream>
#include <string>
using namespace std;
class n_p
{
private:
	string  name;
	int  age;
public:
	//конструктр по умолчанию
	n_p() {
		name = " "; age = 0;
	}
	//конструктор с параметрами
	n_p(string Name, int Age) {

		name = Name;
		age = Age;
	}
	void print() {
		cout << "\nКласс n_p\t";
		cout << "\nИмя\t" << name << "\nВозраст\t" << age << endl;
	}
};
class n_i
{
private:
	string  ngroup;
	int  id;
public:
	//конструктр по умолчанию
	n_i() {
		ngroup = "_";
		id = 0;
	}
	//конструктор с параметрами
	n_i(string Ngroup, int Id) {
		this->ngroup = Ngroup;
		this->id = Id;
	}
	n_i& setId(int Id) {
		id = Id;
		return *this;
	}
	n_i& setngroup(string Ngroup) {
		ngroup = Ngroup;
		return *this;
	}
	void print() {
		cout << "\nКласс n_i\t";
		cout << "\nГруппа\t" << ngroup << "\nНомер\t" << id << endl;
	}
};
int main()
{
	system("chcp 1251");
	system("cls");
	n_p NameAge; //  создаем обьект  класса имя возраст конструктор без параметров
	NameAge.print(); // берем метод класса , вывод нга экран
	n_p NameAge2("один", 56); //создаем обьект  класса имя возраст с параметрами
	NameAge2.print(); // берем метод класса , вывод нга экран
	n_i Ng_Id;
	Ng_Id.print();
	n_i Ng_Id2;
	Ng_Id2.setId(565).setngroup("Привет++++++").print();
}



