/*
������� 4. �����
��� ����� �������
�������� ���������, ������� ������ � ������� ���������� ������� ������������� �����. 
��� ������������ ����� ����������� ������ ������������� ������ �|�, � ��� �������������� � ����� �-�. 
����� ������������ ������ ������ � ������ �����.
*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int width, height;
    cout << "������� ������ � ������ ����� ";
    cin >> width >> height;

    cout << "|";
    for (int j = 0; j<width-2; ++j){
        cout << "-";
    }
    cout << "|" << endl;

    for (int i=0; i<height-2; ++i){
        cout << "|";
        for (int j=0; j<width-2; ++j){
            cout << " ";
        }
        cout << "|" << endl;
    }

    cout << "|";
    for (int j = 0; j<width-2; ++j){
        cout << "-";
    }
    cout << "|" << endl;
}