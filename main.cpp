#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//Zmienne
string imie[5];
float oceny[15];
float wynik;
float srednia;
int liczba1;
int liczba2;
int confirm;
int rule;
int losowanie;
int proba = 0;
char wybor;

int main()
{
    cout << "Jak sie nazywasz ?: ";
    cin >> imie[0];
    Sleep(600);
    system("cls");
    cout << "Witaj " << imie[0] << " !" << endl;
    Sleep(1000);
while(true)
{


    cout << endl;
    cout << "MENU APLIKACJI !" << endl;
    cout << "----------------" << endl;
    cout << "1.Obliczanie Sredniej" << endl;
    cout << "2.Gra Rzut Kostka" << endl;
    cout << "3.Gra odgadywanie Liczby" << endl;
    cout << "4.Wyjscie" << endl;
    cout << endl;


    wybor=getch();
    system("cls");


    switch(wybor)
    {
        case '1':
        cout << "Obliczanie Sredniej!" << endl;
        Sleep(600);
        cout << "Podaj 1 ocene: ";
        cin >> oceny[0];
        cout << "Podaj 2 ocene: ";
        cin >> oceny[1];
        cout << "Podaj 3 ocene: ";
        cin >> oceny[2];
        cout << "Podaj 4 ocene: ";
        cin >> oceny[3];
        cout << "Podaj 5 ocene: ";
        cin >> oceny[4];
        cout << "Podaj 6 ocene: ";
        cin >> oceny[5];
        cout << "Podaj 7 ocene: ";
        cin >> oceny[6];
        cout << "Podaj 8 ocene: ";
        cin >> oceny[7];
        cout << "Podaj 9 ocene: ";
        cin >> oceny[8];
        cout << "Podaj 10 ocene: ";
        cin >> oceny[9];
        cout << "Podaj 11 ocene: ";
        cin >> oceny[10];
        cout << "Podaj 12 ocene: ";
        cin >> oceny[11];
        cout << "Podaj 13 ocene: ";
        cin >> oceny[12];
        cout << "Podaj 14 ocene: ";
        cin >> oceny[13];
        cout << "Podaj 15 ocene: ";
        cin >> oceny[14];
        Sleep(400);
        system("cls");
        wynik = oceny[0] + oceny[1] + oceny[2] + oceny[3] + oceny[4] + oceny[5] + oceny[6] + oceny[7] + oceny[8] + oceny[9] + oceny[10] + oceny[11] + oceny[12] + oceny[13] + oceny[14];
        srednia = wynik / 15;
        cout << "Twoja Srednia to : " << srednia << endl;
        break;

            case '2':
            cout << "Gra Rzut Kostka!" << endl;
            Sleep(700);
            system("cls");
            cout << "Nazwa Gracza 1: ";
            cin >> imie[2];
            system("cls");
            cout << "Nazwa Gracza 2: ";
            cin >> imie[3];
            system("cls");
            cout << "Przetwarzania ..."<< endl;
            Sleep(500);
            system("cls");

            while(confirm!=1)
            {

            cout << "Rzuca gracz " << imie[2] << endl;
            getchar();getchar();

            srand(time(NULL));
            liczba1 = rand()%5+1;

            for(int i=1; i<=3; i++)
            {
                Sleep(700);
                system("cls");
                cout << "Kostka sie toczy..." << endl;
            }

                system("cls");
                cout << "Wypada: \a " << liczba1 << endl;
                getchar();getchar();

                system("cls");
                cout << "Rzuca gracz " << imie[3] << endl;
                getchar();getchar();

                srand(time(NULL));
                liczba2 = rand()%5+1;
                for(int i=1; i<=3; i++)
            {
                Sleep(700);
                system("cls");
                cout << "Kostka sie toczy..." << endl;
            }
                cout << "Wypada: \a" << liczba2 << endl;
                getchar();getchar();
                system("cls");

                cout << "Aby Zakonczyc Wybierz 1: ";
                cin >> confirm;
            }







            break;

            case '3':
                cout << "Gra Losowanie Liczb!" << endl;
                Sleep(1000);
                system("cls");

                    srand(time(NULL));
                    losowanie=rand()%99+1;

                while(rule!=losowanie)
                {
                    cout << "Wybierz " << imie[0] << " liczbe od 1 do 100: ";
                    cin >> rule;

                    system("cls");
                    proba++;

                    if(rule==losowanie)
                    cout << "Brawo Zgadles! za "<<proba << " razem :)"<< endl;

                    else if(rule<losowanie)
                        cout << "Za Malo! :)"<< endl;

                    else if(rule>losowanie)
                        cout << "Za Duzo! :)"<< endl;


                }

                break;

            case '4':
                exit(0);
                break;

                default: cout << "Wybierz Poprawna Liczbe!" << endl;
    }
        getchar();getchar();
    }
}
