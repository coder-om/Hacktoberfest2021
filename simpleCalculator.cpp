#include <iostream>
using namespace std;

class input
{
protected:
    double num1;
    double num2;

public:
    int inputData(double a, double b)
    {
        num1 = a;
        num2 = b;
        showInput();
    }
    void showInput();
};

void input ::showInput()
{
    cout << "the number are " << num1 << " "
         << num2 << endl;
}

class functions : public input
{
public:
    void sum()
    {
        cout << "sum = " << num1 + num2 << endl;
    }
    void sub()
    {
        cout << "sub = " << num1 - num2 << endl;
    }
    void multiply()
    {
        cout << "multiplication = " << num1 * num2 << endl;
    }
    void div()
    {
        cout << "division = " << num1 / num2 << endl;
    }
};

int
main()

{   double a, b; 
    cout<<"input two numbers "<<endl;
    cin>> a>>b;
    functions calculate;

    calculate.inputData(a,b);
    calculate.sum();
    calculate.sub();
    calculate.multiply();
    calculate.div();
    cout<<endl;
    

    return 0;
}
