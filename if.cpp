#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    if (age >= 18)
    {
        cout << "Allow" << endl;
    }
    else
    {
        cout << "Not Allowed" << endl;
    }
    cin.get();
}