#include <iostream>

using namespace std;

int main()
{
    // Image width and height
    int width = 256;
    int height = 256;

    // Render
    cout << "P3\n"
         << width << " " << height << "\n"
         << "255\n";

    for (double i = 0; i < height; i++)
    {
        clog << "\rScanlines remaining: " << (height - i) << ' ' << flush;
        for (double j = 0; j < width; j++)
        {
            double r = double(i) / (height - 1);
            double g = double(j) / (width - 1);
            double b = 0;

            cout << int(r * 255) << " " << int(g * 255) << " " << int(b * 255) << " ";
        }
        cout << "\n";
    }
}