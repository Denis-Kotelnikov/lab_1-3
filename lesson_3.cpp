#include <iostream>
using namespace std;

void main(void)
{
    setlocale(LC_CTYPE, "Russian");
    int a = 2, b = 5;
    void obmen1(int, int);
    void obmen2(int*, int*);
    void obmen3(int&, int&);
    cout << "המ מבלוםא:  a= " << a << "b=" << b << endl;
    //Âûחמג obmen1(int, int);
    cout << "ןמסכו מבלוםא 1:  a= " << a << "b=" << b << endl;
    //Âûחמג obmen2(int*, int*);
    cout << "ןמסכו מבלוםא 2:  a= " << a << "b=" << b << endl;
    //Âûחמג obmen3(int&, int&);
    cout << "ןמסכו מבלוםא 3:  a= " << a << "b=" << b << endl;
}
