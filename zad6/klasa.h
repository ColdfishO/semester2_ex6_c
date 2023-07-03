#ifndef KLASA_H
#define KLASA_H
using namespace std;
class TZwierze {
protected:
	string Nazwa;
	int Wiek;
public:
	TZwierze() {
		Nazwa = ' ';
		Wiek = 0;
	}
	~TZwierze() {}
	void CzytajDane(string x, int y);
	void PiszDane();
	//void DajGlos();
	virtual void DajGlos();
};
class TPies : public TZwierze {
public:
	TPies() {}
	~TPies() {}
	void DajGlos();
};
class TKrowa : public TZwierze {
public:
	TKrowa() {}
	~TKrowa() {}
	void DajGlos();
};
class TKot : public TZwierze {
public:
	TKot() {};
	~TKot() {}
	void DajGlos();
};
#endif