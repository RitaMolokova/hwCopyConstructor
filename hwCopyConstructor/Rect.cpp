#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect(){
    h = w = 0;
}

Rect::Rect(int height, int width){
    h = height;
    w = width;
}

void Rect::Input(){
    cout << "Height: ";
    cin >> h;
    cout << "Width: ";
    cin >> w;
}

void Rect::Output() {
    cout << "Height: " << h << endl;
    cout << " Width: " << w << endl;
}