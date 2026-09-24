#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	int cont;
	printf("Введите три целых числа: \n");
	scanf("%d %d %d", &A, &B, &C);

	cont = (A % 5 == 0 && B % 5 == 0 && C % 5 == 0);
	printf("Дает разрешение (1 - Да, 0 - Нет): %d\n", cont);
	return 0;
}
