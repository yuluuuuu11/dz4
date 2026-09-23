#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (A % 5 == 0 && B % 5 == 0 && C % 5 == 0)
		printf("Диспетчерская система дает разрешение на погрузку");
	else 
		printf("Диспетчерская система не дает разрешение на погрузку");
	return 0;
}