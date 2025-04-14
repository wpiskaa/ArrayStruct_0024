#include <iostream>
#include <string>
using namespace std;

struct Weapon
{
    string name;
    int demage;
};

struct Player
{
    string name;
    string id;
    string level;
    Weapon weapone;
};


int main()
{
    Player pl;

    cout << "Masukkan nama player= ";
    getline(cin, pl.name);
    cout << "Masukkan id= ";
    cin >> pl.id;
    cout << "Masukkan level=";
    cin >> pl.level;
    cin.ignore(1);
    cout << "Masukkan Weapon=";
    getline(cin, pl.weapone.name);
    cout << "Masukkan demage=";
    cin >> pl.weapone.demage;


    cout << "Tampilkan Player" << endl;
    cout << "Nama Player=" << pl.name << endl;
    cout << "Id Player=" << pl.id << endl;
    cout << "Level Player=" << pl.level << endl;
    cout << "Nama Weapone=" << pl.weapone.name << endl;
    cout << "Demage Weapone=" << pl.weapone.demage << endl;
}