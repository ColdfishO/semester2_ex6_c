#include<iostream>
#include "klasa.h"
using namespace std;
void TZwierze::CzytajDane(string x, int y) {
	this->Nazwa = x;
	this->Wiek = y;
}
void TZwierze::PiszDane() {
	cout << this->Nazwa << endl;
	cout << this->Wiek<<endl;
}
void TZwierze::DajGlos() {
	cout << "dziwne odg³osy" << endl;
}
void TPies::DajGlos() {
	cout << "hau hau" << endl;
}
void TKrowa::DajGlos() {
	cout << "muuuuuuuu" << endl;
}
void TKot::DajGlos() {
	cout << "miau\n" << endl;
}

