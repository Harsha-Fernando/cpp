#include <iostream>

using namespace std;

int sum(int a, int b); // prototype -> function declaration

int main()
{
    int a;
    int b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cin.ignore();
    cout << "Sum is " << sum(a, b) << endl;
}

int sum(int a, int b)
{
    return a + b;
}