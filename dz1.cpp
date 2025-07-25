

//Task 1

/*#include <iostream>
using namespace std;

int main() {
    int Seconds;
    cout << "Enter the number of seconds: ";
    cin >> Seconds;

    int hours = Seconds / 3600;
    int minutes = (Seconds % 3600) / 60;
    int seconds = Seconds % 60;

    cout << "Its " << hours << " hours. " << minutes << " minutes. " << seconds << " seconds." << endl;
    return 0;
}*/

//Task 2

//
//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleOutputCP(65001);
//    setlocale(LC_ALL, "");
//
//    float amount;
//    cout << "Введіть суму (Для прикладу так:12.5): ";
//    cin >> amount;
//
//    int hryvna = int(amount);
//    int kopeyka = int((amount - hryvna) * 100 + 0.5);
//
//    cout << hryvna << " грн. " << kopeyka << " коп." << endl;
//    return 0;
//}

//Task 3

//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleOutputCP(65001);
//    setlocale(LC_ALL, "");
//
//    double distance, timeInput;
//    cout << "Обчислення швидкості бігу." << endl;
//    cout << "Введіть довжину дистанції (метрів) = ";
//    cin >> distance;
//    cout << "Введіть час (хв.сек) = ";
//    cin >> timeInput;
//
//    int minutes = int(timeInput);
//    int seconds = int((timeInput - minutes) * 100 + 0.5); // округлення
//
//    int totalSeconds = minutes * 60 + seconds;
//    double speedKmh = (distance / 1000.0) / (totalSeconds / 3600.0); // км/год
//
//    cout << "Дистанція: " << distance << " м." << endl;
//    cout << "Час: " << minutes << " хв " << seconds << " сек = " << totalSeconds << " сек." << endl;
//    cout << "Ви бігли зі швидкістю " << speedKmh << " км/год." << endl;
//
//    return 0;
//}

//Task 4

//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleOutputCP(65001);
//    setlocale(LC_ALL, "");
//
//    int Days;
//    cout << "Введіть кількість днів: ";
//    cin >> Days;
//
//    int weeks = Days / 7;
//    int days = Days % 7;
//
//    cout << weeks << " тиждень і " << days << " дня." << endl;
//    return 0;
//}