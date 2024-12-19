#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main()
{
    cpp_int num1;
    cpp_int num2;

    cout << "Enter two large integers:" << endl;
    cin >> num1 >> num2;

    cpp_int sum = num1 + num2;

    if (sum % 2 == 0)
    {
        cout << "BLACK" << endl;
    }
    else
    {
        cout << "WHITE" << endl;
    }

    return 0;
}
