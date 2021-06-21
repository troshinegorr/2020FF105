#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    char SimChar;
    int SimCode;

    cout << "Enter any character and press ENTER: ";
    cin >> SimChar;
    SimCode = int(SimChar);
    cout << SimChar << " (" << SimCode << ")" << endl;
    cout << "Previous character: " <<
        char(SimCode - 1) <<
        " (" << SimCode - 1 << ")" << endl;
    cout << "Next character: " <<
        char(SimCode + 1) <<
        " (" << SimCode + 1 << ")" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}


