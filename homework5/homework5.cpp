#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ValidNames[5] = {"Mamad", "Ali", "Abol", "Reza"};
    cout << "UserName : ";
    string user;
    cin >> user;
    bool IsLogin = false;
    for (string name : ValidNames)
    {
        if (name == user)
        {
            cout << "welcome " << name<< "\n";
            IsLogin = true;
        }
    }
    if (!IsLogin)
    {
        ValidNames[5] = user;
        cout << user << " added";
    }
    return 0;
}