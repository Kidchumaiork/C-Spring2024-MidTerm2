#include <iostream>
using namespace std;

class mid2_friend_factorial
{
private:
    double n;

public:
    void setN(double number)
    {
        n = number;
    }

    friend class Srisoongnern_mid2;
};

class Srisoongnern_mid2 : public mid2_friend_factorial
{
public:
    void factorial()
    {
        unsigned long long total = 1;
        for (unsigned long long i = n; i > 0; i--)
        {
            total *= i;
        }
        cout << "The Factorial of " << n << " is " << total << '\n';
    }
};

int main()
{
    Srisoongnern_mid2 x1;

    double num;
    cout << "Please enter the value to print the odd Number = ";
    cin >> num;

    x1.setN(num);
    x1.factorial();

    return 0;
}