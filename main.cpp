#include <iostream>
using namespace std;
int main() {
    //Image

    int img_w = 256;
    int img_h = 256;

    cout << "P3\n" << img_w << ' ' << img_h << "\n255\n";

    for (int j = 0; j < img_h; j++){
        for(int i = 0; i < img_w; i++){
            auto r = double(i) / (img_w - 1);
            auto g = double(j) / (img_h - 1);
            auto b = 0.0;
            auto dec = 255.999;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            cout << ir << ' ' << ig << ' ' << ib << '\n';

        }
    }
    return 0;
}
