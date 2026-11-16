#include <iostream>

using namespace std;

int main()
{
    // make a calculator
    int exit = 0;
    do
    {
        int a;
        int b;
        cout << "Enter number 1: ";
        cin >> a;
        cin.ignore();
        cout << "Enter number 2: ";
        cin >> b;
        cin.ignore();
        char operate;
        cout << "Enter Operator: ";
        cin >> operate;
        cin.ignore();

        if (operate == '+')
        {
            cout << a + b << endl;
        }
        else if (operate == '-')
        {
            cout << a - b << endl;
        }
        else if (operate == '/')
        {
            if (b != 0)
            {
                cout << a / b << endl;
            }
            else
            {
                cout << "0 division Error -> Infinity!" << endl;
            }
        }
        else if (operate == '*')
        {
            cout << a * b << endl;
        }
        else
        {
            cout << "Invalid Operator!" << endl;
        }

        cout << "Want to Continue: " << endl;
        cin >> exit;

    } while (exit != 1);
}
