#include<iostream>
using namespace std;

class Circle
{
    private:

    int redius;

    public:

    int r = redius;

    void area(int r)
    {
            cout << 3.14*r*r<<endl;
    }
    void circ(int r)
    {
            cout << 2*3.14*r;
    }

}; 

int main()
{
    int n;

    cout<<"enter n --> ";
    cin >> n;

    Circle mycircle;

    mycircle.area(n);
    mycircle.circ(n);

}