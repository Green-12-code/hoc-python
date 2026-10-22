#include <iostream>
using namespace std;

int main() {
    string name, position, skill;
    int age;

    cout << "=== CB XIN VIEC ===\n\n";

    cout << "Nhap ten: ";
    getline(cin, name);

    cout << "Nhap tuoi: ";
    cin >> age;
    cin.ignore();

    cout << "Ung tuyen vi tri: ";
    getline(cin, position);

    cout << "Ky nang: ";
    getline(cin, skill);

    cout << "\n===== THONG TIN CB =====\n";
    cout << "Ten: " << name << "\n";
    cout << "Tuoi: " << age << "\n";
    cout << "Vi tri ung tuyen: " << position << "\n";
    cout << "Ky nang: " << skill << "\n";

    cout << "\nTrang thai: Da gui don xin viec thanh cong!\n";

    return 0;
}