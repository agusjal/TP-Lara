#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <string.h>
#include <string>
#include <windows.h>
#include <stdio.h>
#include "funciones.h"
using namespace std;
//#include "ui.h"
//#include "rlutil.h"
//using namespace rlutil;

int main(){
    setlocale(LC_ALL, "Spanish");
    system("color 70");
    SetConsoleTitle("   -    LARA   -   ");

    cout<<endl;
    cout<<"....##..........###....########.....###......"<<endl;
    cout<<"....##.........##.##...##.....##...##.##....."<<endl;
    cout<<"....##........##...##..##.....##..##...##...."<<endl;
    cout<<"....##.......##.....##.########..##.....##..."<<endl;
    cout<<"....##.......#########.##...##...#########..."<<endl;
    cout<<"....##.......##.....##.##....##..##.....##..."<<endl;
    cout<<"....########.##.....##.##.....##.##.....##..."<<endl;

    cout<<endl<<"      Laboratorio de computacion II"<<endl<<endl<<endl;
    cout<<"    Integrandes:"<<endl;
    cout<<"              -Larroca Javier Agustin"<<endl;
    cout<<"              -Vasquez Elmer "<<endl<<endl<<endl<<endl;

    system("pause");
    system("cls");
    menuPrincipal();
    return 0;
}
