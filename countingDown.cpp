#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    for (int i = 10; i >= 1; i--)
    {
        sleep(1);
        system("cls");
        cout << i << endl;

    }
    cout << "I wrote my first project in C++!";

    return 0;
}
