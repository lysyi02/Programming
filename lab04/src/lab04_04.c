#define POINT_1 -1
#define POINT_2 1

int main() {
    float x = -2.0;
    float y = 0;
    if (x < POINT_1) {
        y = -1 / x;
    } else if (x >= POINT_1 & x <= POINT_2) {
        y = x * x;
    } else {
        y = 1;
    }
    return 0;
}
