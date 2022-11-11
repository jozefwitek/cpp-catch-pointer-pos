#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream plik;
    plik.open("C:\\User\\Desktop\\output.txt"); // path for output file
    while (1)
    {
        POINT cursorPos;
        GetCursorPos(&cursorPos);
        float x = 0;
        x = cursorPos.x;
        float y = 0;
        y = cursorPos.y;
        if ((GetKeyState(VK_RETURN) & 0x8000) != 0) // click ENTER button to save X and Y
        {
            cout << "X: "<< x << " || Y: " << y << endl;
            plik << x << " " << y << endl;
            Sleep(100);
        }
        Sleep(100);

        if (GetKeyState(VK_F5)) { // F5 shuts down the program
            plik.close();
            return 0;
        }
    }

}
