#include <iostream>

using namespace std;

int main() {
    int ascII[] = {77, 111, 104, 97, 109, 109, 97, 100, 32, 72, 111, 115, 115, 101, 105, 110, 32, 86, 97, 102, 97, 101, 105, 32, 78, 97, 115, 97, 98};
cout << "MyName: \n";
    for (int i : ascII) {
        cout << char(i); 
    }
    return 0;
}
