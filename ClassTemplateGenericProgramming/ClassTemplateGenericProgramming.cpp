#include <iostream>
using namespace std;




// type 1 - basic class 
template <class T>
class c1
{
    T data1;
    T data2;

public:
    c1(T x, T y)
    {
        data1 = x;
        data2 = y;
    }

    void show()
    {
        cout << "value at data 1: " << data1 << " | value at data2 : " << data2 << endl;
    }

};

//type 2 - Generic class with generic type

template <class T1,class T2>
class c2
{
    T1 data1;
    T2 data2;

public:
    c2(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }

    void show()
    {
        cout << "data 1 : " << data1 << " | data 2 : " << data2 << endl;
    }

};

//type 3 - generic class with defalut datatype 

template<class T1 , class T2 = string>
class c3
{
    T1 data1;
    T2 data2;
public:
    c3(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }
    void show()
    {
        cout << "data1 : " << data1 << " | data2 : " << data2 << endl;
    }

};



int main()
{
   //type 1
    c1<int> ob1(10,20);
    c1<float> ob2(10.5, 20);
    c1<char> ob3('a', 'A');
    c1<string> ob4("kadavul", "nature");
    cout << "object 1 : " << endl;
    ob1.show();
    cout << "object 2 : " << endl;
    ob2.show();
    cout << "object 3 : " << endl;
    ob3.show();
    cout << "object 4 : " << endl;
    ob4.show();

    //type 2

    c2<int, int> c2ob1(10,20);
    c2<int, char> c2ob2(50, 'z');
    c2<char, string> c2ob3('A', "Computer");
    c2<char, float> c2ob4('b', 20.25);
    cout << " class c2 object 1 : " << endl;
    c2ob1.show();
    cout << " class c2 object 2 : " << endl;
    c2ob2.show();
    cout << " class c2 object 3 : " << endl;
    c2ob3.show();
    cout << " class c2 object 4 : " << endl;
    c2ob4.show();

    //type 3 
    c3<int > c3ob1(1, "keerthana");
    c3<char, char> c3ob2('A', 'B');
    c3<int, float> c3ob3(20, 20.0);

    cout << "class c3 object1 : " << endl;
    c3ob1.show();
    cout << "class c3 object2 : " << endl;
    c3ob2.show();
    cout << "class c3 object3 : " << endl;
    c3ob3.show();









}

