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
    Player pl[3];
    for(int i=0;i<3; i++){
        cout << "Masukkan nama player= ";
        getline(cin, pl[i].name);
        cout << "Masukkan id= ";
        cin >> pl[i].id;
        cout << "Masukkan level=";
        cin >> pl[i].level;
        cin.ignore();
        cout << "Masukkan Weapon=";
        getline(cin, pl[i].weapone.name);
        cout << "Masukkan demage=";
        cin >> pl[i].weapone.demage;
        cin.ignore();
    }
    cout << endl;
    cout << "Tampilkan Player" << endl;
    for(int i=0;i<3; i++){
        cout << "Nama Player=" << pl[i].name << endl;
        cout << "Id Player=" << pl[i].id << endl;
        cout << "Level Player=" << pl[i].level << endl;
        cout << "Nama Weapone=" << pl[i].weapone.name << endl;
        cout << "Demage Weapone=" << pl[i].weapone.demage << endl;
    }
}