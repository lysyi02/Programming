int main() {
    float my_number = 369.123;
    int integral_part = (int) my_number;
    int fractional_part = (int) (my_number * 1000 - integral_part * 1000);
    float result = 0;
    if (integral_part == 0) {
        /*DIVISION_BY_ZERO*/
        return 0;
    } else {
        result = (float) fractional_part / integral_part;
    }
    result *= 100;
    int tmp = (int) result;
    result = (float) tmp / 100;
    return 0;
}
