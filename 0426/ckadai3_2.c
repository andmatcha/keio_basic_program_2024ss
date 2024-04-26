#include <stdio.h>
#include <math.h>

int main()
{
  // 2次方程式の係数a, b, cを定義
  double a, b, c;

  // a, b, cの入力を求める
  printf("a=");
  scanf("%lf", &a);
  printf("b=");
  scanf("%lf", &b);
  printf("c=");
  scanf("%lf", &c);

  // 解を計算する
  double x1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
  double x2 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;

  // 解を出力
  printf("2次方程式ax^2+bx+c=0の解は%f, %fです.\n", x1, x2);

  return 0;
}
