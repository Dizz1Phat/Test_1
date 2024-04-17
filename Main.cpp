#include <iostream>
using namespace std;

int main () {
    cout <<"Hello Wolrd";

    int n;
    cout <<"Nhap so tu nhien tu ban phim: ";
    cin >> n;

    for (int i =0; i<n; i++) {
        int o = 0;
        o += i;
    };

    cout <<"So de quy (n): " <<o;
}
