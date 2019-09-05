#include <iostream>

#include "cppprac_2.h"

#define LONG_TO_YARDS         220
#define MONTHS_OF_YEAR       12

using namespace std;

void cppprac_print_three_blind_mice_2_3()
{
    cout << "Three blind mice\n";
    return;
}

void cppprac_print_see_how_they_run_2_3()
{
    cout << "See how they run\n";
    return;
}

void cppprac_2_1_func()
{
    cout << "==========================prac2_1 start==========================\n";
    char cName[20] = "LiuKun";
    char cAddress[50] = "Yanjinghangcheng29#Room502";
    cout << "Name : " << cName << "Address : " << cAddress << endl;
    cout << "==========================prac2_1 end==========================\n";
    return;
}

void cppprac_2_2_func()
{
    cout << "==========================prac2_2 start==========================\n";
    WORD32 dwDistByLong = 0;
    WORD32 dwDistByYard = 0;
    cout << "enter the distance by long:";
    cin >> dwDistByLong;
    dwDistByYard = LONG_TO_YARDS*dwDistByLong;
    cout << dwDistByLong << " long = " << dwDistByYard << "yards.\n";
    cout << "==========================prac2_2 end==========================\n";
    return;
}

void cppprac_2_3_func()
{
    cout << "==========================prac2_3 start==========================\n";
    cppprac_print_three_blind_mice_2_3();
    cppprac_print_three_blind_mice_2_3();
    cppprac_print_see_how_they_run_2_3();
    cppprac_print_see_how_they_run_2_3();
    cout << "==========================prac2_3 end==========================\n";
    return;
}

void cppprac_2_4_func()
{
    cout << "==========================prac2_4 start==========================\n";
    WORD32 dwAge = 0, dwMonth = 0;
    cout << "Enter your age: ";
    cin >> dwAge;
    dwMonth = MONTHS_OF_YEAR*dwAge;
    cout << "This age covers : " << dwMonth << " months.\n";
    cout << "==========================prac2_4 end==========================\n";
    return;
}
