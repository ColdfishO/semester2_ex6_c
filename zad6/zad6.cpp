#include <iostream>
#include<locale.h>
#include "klasa.h"
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
void Odglos(TZwierze & zwierze_domowe)
{
    zwierze_domowe.DajGlos();
}
int main() {
    setlocale(LC_ALL, "");
    autor();
    TZwierze JakiesZwierze;
    TPies Azor;
    TKrowa Krasula;
    TKot Mruczek;
    JakiesZwierze.DajGlos();
    Azor.DajGlos();
    Krasula.DajGlos();
    Mruczek.DajGlos();
    TZwierze* wsk;
    wsk = &JakiesZwierze;
    wsk->DajGlos();
    wsk = &Azor;
    wsk->DajGlos();
    wsk = &Krasula;
    wsk->DajGlos();
    wsk = &Mruczek;
    wsk->DajGlos();
    Odglos(JakiesZwierze);
    Odglos(Azor);
    Odglos(Krasula);
    Odglos(Mruczek);
    system("pause");
    return 0;
}