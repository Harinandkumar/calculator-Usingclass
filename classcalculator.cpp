#include <iostream>
using namespace std;
class Calculator
{
public:
    int num1, num2;
    char operation;
    void EnterData()
    {
        cout << "  -----------Basic calculator-----------------------" << endl;
        cout << "  avilable operation  +, -, *, / " << endl;
        cout << "Enter the first number: " << endl;
        cin >> num1;

        cout << "  Enter the second number: " << endl;
        cin >> num2;

        cout << "Enter an operation: " << endl;
        cin >> operation;
    }
    void Switch()
    {
        switch (operation)
        {
        case '+':
            cout << "_____________________________________________________________________" << endl;
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            cout << "_____________________________________________________________________" << endl;
            break;
        case '-':
            cout << "  |__________________________________________________________________" << endl;
            cout << " |Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            cout << "    __________________________________________________________________" << endl;
            break;
        case '*':
            cout << "_____________________________________________________________________" << endl;
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            cout << "_____________________________________________________________________" << endl;
            break;
        case '/':
            if (num2 != 0)
            {
                cout << "_____________________________________________________________________" << endl;
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                cout << "_____________________________________________________________________" << endl;
            }
            else
            {
                cout << "_____________________________________________________________________" << endl;
                cout << "Error: Division by zero is undefined." << endl;
                cout << "_____________________________________________________________________" << endl;
            }
            break;
        default:
            cout << "_____________________________________________________________________" << endl;
            cout << "Invalid operation. Please use +, -, *, /" << endl;
            cout << "_____________________________________________________________________" << endl;
        }
    }
};
int main()
{
    Calculator obj1;
    obj1.EnterData();
    obj1.Switch();

    return 0;
}
