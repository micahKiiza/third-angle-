#include <iostream>
using namespace std;

int find_third_angle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int a1, a2;
    cout << "Enter two angles of the triangle: ";
    cin >> a1 >> a2;
    cout << "The third angle is: " << find_third_angle(a1, a2) << endl;
    return 0;
}
