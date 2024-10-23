#include <stdio.h>
#include "libft.h"
typedef enum
{
	bay,
	bayan,
}cinsiyet;

typedef enum
{
	pazartesi,
	sali,
	carsamba,
	persembe,
	cuma,
	cumartesi,
	pazar,
}gunler;
typedef struct
{
	int yas;
	char *name;
	cinsiyet c;
	gunler tatil;
}insan;

int emeklimi(insan *birey)
{
	if (birey -> c == bay && birey -> yas >= 55)
		return 1;

	if (birey -> c == bayan && birey -> yas >= 50)
		return 1;

	return 0;
}


int main(void)
{
	int a;
	insan ali;
	insan *veli;
	veli = (insan *)malloc(sizeof(insan));
	veli -> name = "Veli";
	veli -> yas = 20;
	veli -> c = 0;
	veli -> tatil = 6;
	ali.name = "Ali";
	ali.yas = 65;
	ali.tatil = 6;
	ali.c = bay;
	printf("%s, %d, %u, %u \n", ali.name, ali.yas, ali.tatil, ali.c);
	printf("%s, %d, %u, %u \n", veli->name, veli->yas, veli->tatil, veli->c);

	printf("Ali emeklli mi: %d \n", emeklimi(&ali));
	printf("Veli emeklli mi: %d \n", emeklimi(veli));
}
