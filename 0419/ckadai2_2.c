#include <stdio.h>

int main()
{
  // 整数a~fを定義
  int a, b, c, d, e, f;

  // a~eの入力を求める
  printf("a=");
  scanf("%d", &a);
  printf("b=");
  scanf("%d", &b);
  printf("c=");
  scanf("%d", &c);
  printf("d=");
  scanf("%d", &d);
  printf("e=");
  scanf("%d", &e);

  // 入力された値をもとにfを計算
  f = ((a + b) - (c / d)) * e;

  // 答えを出力
  printf("答えは%dです\n", f);

  return 0;
}

/*
検算
a=2, b=3, c=60, d=14, e=6のとき
a+b=5, c/d=4.285...
((a+b)-(c/d))=0.714...
((a+b)-(c/d))*e=4.285...

60/14を4(余り4)とすると答えは6で一致する。
 */
