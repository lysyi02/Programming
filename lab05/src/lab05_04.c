/*  (•ิ_•ิ) Вообще, совершенные числа встречаются не так
    уж и часто, поэтому достаточно ограничится простым:
if (n == 6 ||
    n == 28 ||
    n == 496 ||
    n == 8128 ||
    n == 33550336 ||
    n == 8589869056 ||
    n == 137438691328 ||
    n == 2305843008139952128 ||
    n == 2658455991569831744654692615953842176) is_perfect = 1;
*/

int main() {
  int input_number = 8128;
  int is_perfect = 0;
  int divisors_sum = 1;
  for (int i = 2; i < input_number / 2; i++) {
    if (input_number % i == 0) divisors_sum += i;
  }
  if (input_number == divisors_sum) is_perfect = 1;
  return 0;
}
