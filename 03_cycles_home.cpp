#include <iostream>
#include <string>
using namespace std;
int main()
{
    char option;
	int i = 0;
    while (true) {
        cout << "Choose option(a, b, c, d, e, f, g, h, i, j): ";
        cin >> option;
        switch (option)
        {
        case 'a':
            i = 0;
            while (i <= 10)
            {
                for (int j = 0; j < i; j++) {
                    cout << "   ";
                }
                for (int x = i; x < 10; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        case 'b':
            i = 0;
            while (i <= 10)
            {
                for (int j = 0; j < i; j++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        case 'c':
            i = 1;
            while (i <= 5) {
                for (int j = 0; j < i - 1; j++) {
                    cout << "   ";
                }
                for (int x = 0; x < 11 - i * 2; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            i = 0;
            while (i < 5) {
                cout << endl;
                i++;
            }
            break;
        case 'd':
            i = 0;
            while (i < 5) {
                cout << endl;
                i++;
            }
            i = 1;
            while (i <= 5) {
                for (int j = 0; j < 5 - i; j++) {
                    cout << "   ";
                }
                for (int x = 0; x < i * 2 - 1; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        case 'e':
            i = 1;
            while (i <= 5) {
                for (int j = 0; j < i - 1; j++) {
                    cout << "   ";
                }
                for (int x = 0; x < 11 - i * 2; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            i = 1;
            while (i <= 5) {
                for (int j = 0; j < 5 - i; j++) {
                    cout << "   ";
                }
                for (int x = 0; x < i * 2 - 1; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        case 'f':
            i = 1;
            while (i <= 5) {
                for (int x = 0; x < i; x++) {
                    cout << " * ";
                }
                for (int x = i; x < 5; x++) {
                    cout << "   ";
                }
                for (int x = 0; x < 5 - i; x++) {
                    cout << "   ";
                }
                for (int x = 0; x < i; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            i = 1;
            while (i <= 5) {
                for (int x = 0; x < 5 - i; x++) {
                    cout << " * ";
                }
                for (int x = 0; x < i; x++) {
                    cout << "   ";
                }
                for (int x = 0; x < i; x++) {
                    cout << "   ";
                }
                for (int x = 0; x < 5 - i; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        case 'g':
            i = 1;
            while (i <= 5) {
                for (int x = 0; x < i; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            i = 1;
            while (i <= 5) {
                for (int x = 0; x < 5 - i; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        case 'h':
            i = 1;
            while (i <= 5) {
                for (int x = 0; x < 10 - i; x++) {
                    cout << "   ";
                }
                for (int x = 0; x < i; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            i = 1;
            while (i <= 5) {
                for (int x = 0; x < i + 5; x++) {
                    cout << "   ";
                }
                for (int x = 0; x < 5 - i; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        case 'i':
            i = 0;
            while (i < 10) {
                for (int j = i; j < 10; j++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            cout << endl;
            break;
        case 'j':
            i = 0;
            while (i <= 10) {
                for (int j = i; j < 10; j++) {
                    cout << "   ";
                }
                for (int x = 0; x < i; x++) {
                    cout << " * ";
                }
                cout << endl;
                i++;
            }
            break;
        default:
            cout << "Invalid option." << endl;
        }
    }




}


