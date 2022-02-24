#include <iostream>
#include <string>
using namespace std;
#define WIDTH 9
#define HEIGHT 3
int main(int argc, char const *argv[])
{
    int table[HEIGHT][WIDTH];
    int r, c;

    for (r = 0; r < HEIGHT; r++)
    {
        for (c = 0; c < WIDTH; c++)
        {
            table[r][c] = (r + 1) * (c + 1);
        }
    }
    for (r = 0; r < HEIGHT; r++)
    {
        for (c = 0; c < WIDTH; c++)
        {
            cout << table[r][c] << ", ";
        }
        cout << endl;
    }
    return 0;
}