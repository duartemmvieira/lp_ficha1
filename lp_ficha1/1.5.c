#include <stdio.h>

int main() {
	int h, m, s;

	printf("Insira a hora [ hh : mm : ss ]: ");
	scanf_s("%d:%d:%d", &h, &m, &s);

	int total_segundos = (h * 3600) + (m * 60) + s;

	printf("Total : %d segundos\n", total_segundos);

	return 0;
}
