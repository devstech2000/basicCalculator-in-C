#include <stdio.h>

int main(void) {
  double firstNum, secondNum, resultAll;
  char op;

  printf("Gebe hier deine Rechnung ein:\n");
  scanf("%lf%c%lf", &firstNum, &op, &secondNum);

  if (op == '+') {
    resultAll = firstNum + secondNum;
  } else if (op == '-') {
    resultAll = firstNum - secondNum;
  } else if (op == '*') {
    resultAll = firstNum * secondNum;
  } else if (op == '/') {
    resultAll = firstNum / secondNum;
  }

  printf("Dein Ergebnis ist: ");
  printf("%.3lf", resultAll);
  return 0;
}
