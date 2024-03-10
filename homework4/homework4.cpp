#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "your text : \n";
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
    for (string s : texts)
    {
        cout << "index " << count << " : " << size(s) << " len"<< "\n";
        count++;
    }

    return 0;
}