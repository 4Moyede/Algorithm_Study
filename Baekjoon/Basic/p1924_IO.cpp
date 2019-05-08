#include <iostream>
using namespace std;

int main()
{
    int month = 0;
    int day = 0;
    cin >> month >> day;

    switch(month)
    {
        case 12: 
            day += 30;
        case 11:
            day += 31;
        case 10:
            day += 30;
        case 9:
            day += 31;
        case 8:
            day += 31;
        case 7:
            day += 30;
        case 6:
            day += 31;
        case 5:
            day += 30;
        case 4:
            day += 31;
        case 3:
            day += 28;
        case 2:
            day += 31;
        case 1:
        default:
        break;
    }


    int thatDay = (day-1) % 7;
    switch(thatDay)
    {
        case 0:
            cout << "MON\n";
        break;
        case 1:
            cout << "TUE\n";
        break;
        case 2:
            cout << "WED\n";
        break;
        case 3:
            cout << "THU\n";
        break;
        case 4:
            cout << "FRI\n";
        break;
        case 5:
            cout << "SAT\n";
        break;
        case 6:
            cout << "SUN\n";
        break;
        default:
        break;
    }

    return 0;
}