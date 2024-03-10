#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << "Enter your text : \n";
    string text;
    getline(cin, text);

    string texts[3];
    int index = 0;
    for (char c : text)
    {
        if (c == ',')
        {
            index++;
        }
        else
        {
            texts[index] += c;
        }
    }
    int count = 0;
    for (string a : texts)
    {
        cout << "index " << count << " : " << a << "\n";
        count++;
    }
    cout << "\n";

    count = 0;
    for (string a : texts)
    {
        if (count != size(texts) - 1)
        {
            cout << a << "@";
            count++;
        }
        else
        {
            cout << a;
        }
    }

    return 0;
}