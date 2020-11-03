int main() {
    int my_number = 1234; //Задаём исходное число
    int p = 8; //Задаём систему исчисления
    int result = (my_number / 1000) * (p * p * p) + 
		(my_number / 100 % 10) * (p * p) + 
		(my_number / 10 % 10) * p + 
		(my_number % 10); //Вычисляем по формуле
    return 0;
}

