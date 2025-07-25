
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "");
    
    /*int chislo(10);
    cout << "Chislo: " << chislo << endl;
    int example('c');
    cout << "Char: " << example << endl;
    int count{ 'c' };
    cout << "Char2: " << count << endl;
    unsigned int error{ -123 };
    cout << "Char3: " << error << endl;*/

    /*int a = 10;
    int b = 200;
    float c = 10.5f;
    double d = 2.0f;


    int sum = a + b;
    double div = c / d;

    cout << "Sum:" << sum << endl;
    cout << "DIV:" << div << endl;
    
    int h = 10;
    int v = 3;

    int ost = 10 % 3;
    cout << ost << endl;*/


    //int size = 0;
    //int width = 1;

    //size++; // теж саме що і size + 1
    //width++;
    //++width;
    //int current = width++;//current = width + 1
    //int next = ++width;

    //cout << "size:" << size << endl;
    //cout << "widht:" << width << endl;

    //cout << "current:" << current << endl;
    //cout << "next:" << next << endl;

    /*float zep;
    cout << "Ведіть загальну суму угод менеджера: " << endl;
    cin >> zep;
    float totalzep;
    totalzep = 100 + (zep * 0.05);
    cout << "Загальна сума зарплати буде:" << totalzep << "$" << endl;*/

    /*double SGB;
    double VBPS;
    
    cout << "Введіть розмір файлу в гігабайтах: ";
    cin >> SGB;
    cout << "Введіть швидкість інтернету в бітах за секунду: ";
    cin >> VBPS;

    double SBITS = SGB * 1073741824 * 8;
    int timesec = SBITS / VBPS;

    int hour = timesec / 3600;
    int min = (timesec % 3600) / 60;
    int sec = timesec % 60;
    
    cout <<"Час завантаження:" << hour << "год." << min << "хв." << sec << "секунд." << endl;*/

    int num(0);
    cout << "Введіть число: ";
    cin >> num;

    if (num > 0)
        cout << "Число додатнє";
    else if (num<0)
        cout << "Число відємне";
    else if (num==0)
        cout << "Число дорівнює 0";



    return 0;
}

