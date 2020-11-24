int main() {
    float x = -0.5;
    if (x < 0) x = -x; // здесь получаем |x|
    float y = x - 1;
    if (y < 0) y = -y; // а здесь |y|
    return 0;
}
