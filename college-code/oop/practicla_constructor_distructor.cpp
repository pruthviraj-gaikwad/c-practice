#include <iostream>
using namespace std;
class area
{
private:
    double x;
    double y;

public:
    area(double a, double b);
    area();
    area(area &obj);
    ~area()
    {
        double m = x * y;
        cout << "area of reactangle:" << m << endl;
        cout << "area of triangle:" << m * (0.5) << endl<<endl<<endl;
    }
};

area::area(area &obj)
{
    x = obj.x;
    y = obj.y;
}

area::area()
{
    x = 10;
    y = 50;
}

area::area(double a, double b)
{
    x = a;
    y = b;
}

int main()
{
    area b(5, 4);

    area a;

    area h(b);

    double z, n;
    cout << "enter lenght :";
    cin >> z;
    cout << "enter breath :";
    cin >> n;

    area c(z, n);
}
