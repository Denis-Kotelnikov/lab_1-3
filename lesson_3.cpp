#include <iostream>
using namespace std;

void main(void)
{
    setlocale(LC_CTYPE, "Russian");
    int a = 2, b = 5;
    void obmen1(int, int);
    void obmen2(int*, int*);
    void obmen3(int&, int&);
    cout << "�� ������:  a= " << a << "b=" << b << endl;
    //����� obmen1(int, int);
    cout << "����� ������ 1:  a= " << a << "b=" << b << endl;
    //����� obmen2(int*, int*);
    cout << "����� ������ 2:  a= " << a << "b=" << b << endl;
    //����� obmen3(int&, int&);
    cout << "����� ������ 3:  a= " << a << "b=" << b << endl;
}
