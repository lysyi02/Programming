int main() {
    double original_a = 3; //Так как заданий несколько - необходимо хранить оригинальное значение а
    double a;

    a = original_a;
    a *= a;
    a *= a; //a^4

    a = original_a;
    a *= a;
    a *= a;
    a *= a; //a^8

    a = original_a;
    a = a*a*a;
    a *= a; //a^6

    a = original_a;
    a *= a;
    double b = a*a;
    a = b*b*a; //a^10

    return 0;
}

