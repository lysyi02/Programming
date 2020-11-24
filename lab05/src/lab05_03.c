int main() {
  int ticket_number = 307253;
  int sum_1 = 0;
  int sum_2 = 0;
  int is_lucky = 0;
  for (int i = 1; i <= 100; i *= 10) {
    sum_1 += ticket_number / i % 10;
  }
  for (int i = 1000; i <= 100000; i *= 10) {
    sum_2 += ticket_number / i % 10;
  }
  if (sum_1 == sum_2) {
    is_lucky = 1;
  }
  return 0;
}

/*Зачем здесь циклы? (⊙_◎)
if (ticket_number / 100000 +
  ticket_number / 10000 % 10 +
  ticket_number / 1000 % 10 ==
  ticket_number / 100 % 10 +
  ticket_number / 10 % 10 +
  ticket_number / 1 % 10 ==) {
  is_lucky = 1;
}
*/
