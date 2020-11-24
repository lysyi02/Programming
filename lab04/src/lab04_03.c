int main() {
    float k = 36.123;
    float m = 3.123;
    float n = 369.123;
    float tmp = 0;
    if (k > m) {
        tmp = k;
        k = m;
        m = tmp;
    }
    if (m > n) {
        tmp = m;
        m = n;
        n = tmp;
    }
    if (k > m) {
        tmp = k;
        k = m;
        m = tmp;
    }
    return 0;
}
