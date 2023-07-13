#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int rows = 20;
    const int cols = 34;
    char arr[rows][cols];

    // Initialize the array with spaces
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = ' ';
        }
    }

    // Set the radius and center of the circle
    int radius = 15;
    int centerX = cols / 2;
    int centerY = rows / 2;

    // Place the letters in a circular pattern
    for (int angle = 0; angle <= 360; angle += 15) {
        int x = centerX + radius * cos(angle * M_PI / 180);
        int y = centerY + radius * sin(angle * M_PI / 180);
        arr[y][x] = '*';
    }

    // Print the circular letters
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
