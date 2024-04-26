#include <stdio.h>

int main()
{
  int student_number;

  // 学籍番号の入力を求める
  printf("学籍番号を入力してください");
  scanf("%d", &student_number);

  // 桁を分割する
  int upper = student_number / 10000; // 上4桁
  int lower = student_number % 10000; // 下4桁

  // 結果を出力
  printf("上4桁は%04d, 下4桁は%04dです.\n", upper, lower);

  return 0;
}
