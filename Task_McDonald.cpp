#include <iostream>

using namespace std;

int a;
int b;
int meters;

int count_a(int meters)
{
    a = meters / 3;
    cout << "Length of a is: " << a << endl;

    return a;
}


int count_b(int meters, int a)
{
    b = meters - (a + a);
    cout << "Length of b is: " << b << endl;

    return b;
}

int area(int a, int b)
{
    int area = a * b;
    cout << "The optimal area is: " << area << endl;

    return area;
}

void run() 
{
    string run;
    cin >> run;

    if (run == "RUN")
    {
        cout << "How many meters of fence you have? ";
        cin >> meters;

        if (meters > 2)
        {
            count_a(meters);
            count_b(meters, a);
            area(a, b);
        }
        else { cout << "You have not enough meters to make a fence!" << endl; }
    }
    else { cout << "Exiting program..." << endl; }
}


void main()
{
    run();
}
