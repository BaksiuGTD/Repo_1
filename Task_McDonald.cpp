// Task_1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//


#include <iostream>

using namespace std;

int a;
int b;
int meters;

int count_a(int meters)
{
    a = meters / 3;
    std::cout << "Length of a is: " << a << endl;

    return a;
}


int count_b(int meters, int a)
{
    b = meters - (a + a);
    std::cout << "Length of b is: " << b << endl;

    return b;
}

int area(int a, int b)
{
    int area = a * b;
    std::cout << "The optimal area is: " << area << endl;

    return area;
}

int main()
{
    std::string run;
    std::cin >> run;

    if (run == "RUN" || "run") {

        std::cout << "How many meters of fence you have? ";
        std::cin >> meters;

        if (meters > 2)
        {
            count_a(meters);
            count_b(meters, a);
            area(a, b);
        }
        else { std::cout << "You have not enough meters to make a fence!" << endl; }

    }
    return 0;
}


