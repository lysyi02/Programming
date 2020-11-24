#define PI 3.1415926

int main() {
    float r = 1.0;
    float result = 0;
    char command = 'v';
    if (command == 'l') {
        result = 2.0 * PI * r;
    }
    if (command == 's') {
        result = PI * r * r;
    }
    if (command == 'v') {
        result = 4.0 * PI * r * r * r / 3.0;
    }

    return 0;
}
