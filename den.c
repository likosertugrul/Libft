#include <stdio.h>
#include "libft.h"

struct person
{
	char *name;
	int age;
	float height;
};

int main(void)

{
	struct person first;
	struct person second;

	first.age = 23;
	first.name = "Ertugrul";
	first.height = 172;

	second.age = 23;
	second.name = "Berke";
	second.height = 180;


		printf("%s, %d, %d \n", first.name, first.age, (int)first.height);
		printf("%s, %d, %d \n", second.name, second.age, (int)second.height);

}