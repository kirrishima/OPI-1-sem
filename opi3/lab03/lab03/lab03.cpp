#include <iostream>

int main()
{
   // GormozaMaxim2006
   // ГормозаМаксимСергеевич2006
   // Гормоза2006Maxim

    // в кодировке Windows - 1251
    // 
    // 47 6F 72 6D 6F 7A 61 4D 61 78 69 6D 32 30 30 36
    // D3 EE F0 EC EE E7 C1 D0 E0 CA C8 D3 32 30 30 36
    // D3 EE F0 EC EE E7 32 30 30 36 4D 61 78 69 6D


    // 47 6f 72 6d 6f 7a 61 4d 61 78 69 6d 32 30 30 36

    // d093 d0be d180 d0bc d0be d0b7 d0b0 d09c d0b0 d0ba d181 d0b8 d0bc d0a1 d0b5 d180 d0b3 d0b5 d0b5 d0b2 d0b8 d187 32 30 30 36

    // d093 d0be d180 d0bc d0be d0b7 d0b0 32 30 30 36 4d 61 78 69 6d
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "GormozaMaxim2006";
    char fie[] = "ГормозаМаксимСергеевич2006";
    char lr[] = "Гормоза2006Maxim";
    wchar_t Lfie[] = L"GormozaMaxim2006";
    wchar_t Rfie[] = L"ГормозаМаксимСергеевич2006";
    wchar_t LR[] = L"Гормоза2006Maxim";

    std::cout << hello << lfie << std::endl;
    return 0;
}

