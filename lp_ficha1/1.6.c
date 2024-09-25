#include <stdio.h>
int main() {
	/*	
		v = média
		q = desvio em relação a media 
	*/
	int a = 1, b = 2, c = 3;
	int v = (1 + 2 + 3) / 3;
	int qa = (a - v), qb = (b - v), qc = (c - v);

	printf(" Introduza os valores: %d, %d, %d \n ", a, b, c );
	printf(" Media de: %d \n ", v );
	printf(" Desvio em relacao a media: %d, %d, %d ", qa, qb, qc );

}