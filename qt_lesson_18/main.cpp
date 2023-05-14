#include <iostream>
#include <car.h>
#include <qwerty.h>
#include <myclass.h>


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
/*
    Car* test = new Car();

    cout << "test->w: " << test->w << endl;
    cout << "test->c: " << test->c << endl;


    if (test != NULL)
    {
        delete test;
    }
*/


    Qwerty* test1 = new Qwerty();

    cout << "test1->biba: " << test1->biba << endl;
    cout << "test1->boba: " << test1->boba << endl;
    cout << "test1->dfdf: " << test1->dfdf << endl;


    if (test1 != NULL)
    {
        delete test1;
    }























//MyClass* test3 = new MyClass();
MyClass* test3 = new MyClass(55);
cout << "test3->a: " << test3->a << endl;
cout << "test3->b: " << test3->b << endl;

if (test3 != NULL)
{
    delete test3;
}








    return 0;
}

