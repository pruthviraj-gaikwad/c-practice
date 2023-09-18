#include <iostream>
using namespace std;
class area
{
    double x;
    double y;

public:
    area();
    area(double a, double b);
    void print();
    area(area &obj);
};

area::area(area &obj)
{
    x=obj.x;
    y=obj.y;
}

area::area()
{
    x = 5;
    y = 7;
}

area::area(double a, double b)
{
    x = a;
    y = b;
}

void area::print()
{
    double a=x*y;
    double b=x*y*(0.5);
    cout<<"area of reactangle :"<<a<<endl;
    cout<<"area of triangle :"<<b<<endl;
}

int main()
{
    area a;
    cout<<endl<<"area of a:"<<endl;
    a.print();

    area b(4, 5);
    cout<<endl<<"area of b:"<<endl;
    b.print();

    area m(a);
    cout<<endl<<"area of copy constructor:"<<endl;
    m.print();

    double z,n;
    cout<<"enter lenght :";
    cin>>z;
    cout<<"enter breath :";
    cin>>n;
    
    area c(z,n);
    cout<<endl<<"area of z:"<<endl;
    c.print();
}