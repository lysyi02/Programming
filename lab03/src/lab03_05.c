int main() {
    int my_number = 123;
    float result = (float) 100 * (my_number / 100) / (my_number % 10); //Сравниваем первую и последнюю цифру числа
    int foo = (int) result;
    result = (float) foo / 100; //Обрезаем результат до 2-го знака после запятой
    return 0;
}
