#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int flightSpeed;
    int flightHeight;
    std::cout << "Скорость полета составляет: ";
    std::cin >> flightSpeed;
    std::cout << "Высота полета составляет: ";
    std::cin >> flightHeight;
    if (flightSpeed < 750 || flightSpeed > 850 || flightHeight < 9000 || flightHeight > 9500) {
        std::cout << "Скорректируйте эшелон!";
    } else {
        std::cout << "Эшелон верный";
    }
}
