/*
Задание 4. Рамка
Что нужно сделать
Напишите программу, которая рисует с помощью символьной графики прямоугольную рамку. 
Для вертикальных линий используйте символ вертикального штриха «|», а для горизонтальных — дефис «-». 
Пусть пользователь вводит ширину и высоту рамки.
*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int width, height;
    cout << "Введите ширину и высоту рамки ";
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