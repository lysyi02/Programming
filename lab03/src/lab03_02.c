int main() {
   int my_number = 375;
   int result = 100 * (my_number % 10) + 10 * ((my_number / 10) % 10) + (my_number / 100); //Разбиваем число на цифры, собираем его заново в обратном порядке
   return 0;
}
