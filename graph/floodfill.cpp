#include <iostream>
#include <vector>
using namespace std;

// Function to perform flood fill
void floodFill(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor) {
    int rows = image.size();
    int cols = image[0].size();

    // Base cases: Out of bounds or already visited
    if (sr < 0 || sr >= rows || sc < 0 || sc >= cols || image[sr][sc] != oldColor)
        return;

    // Change color
    image[sr][sc] = newColor;

    // Output the current state of the image
    for (const auto& row : image) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Recursive calls for neighboring pixels
    floodFill(image, sr + 1, sc, newColor, oldColor); // down
    floodFill(image, sr - 1, sc, newColor, oldColor); // up
    floodFill(image, sr, sc + 1, newColor, oldColor); // right
    floodFill(image, sr, sc - 1, newColor, oldColor); // left
}

int main() {
    // Sample image
    vector<vector<int>> image = {
        {1, 1, 1, 1, 0},
        {1, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 1, 1, 0}
    };

    // Starting point for flood fill
    int sr = 2, sc = 2;
    
    // Old color at the starting point
    int oldColor = image[sr][sc];

    // New color for flood fill
    int newColor = 2;

    // Print the initial state of the image
    cout << "Initial state of the image:" << endl;
    for (const auto& row : image) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Perform flood fill
    cout << "Steps of flood fill:" << endl;
    floodFill(image, sr, sc, newColor, oldColor);

    return 0;
}
