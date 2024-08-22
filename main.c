#include <stdio.h>
#include <unistd.h>

// int main(void)
// {
// 	printf("bla\n");
// 	write(1, "eee", 3);
// }

int main(void)
{
	const int a = 10;
	int *ptr;

	ptr = &a;
	*ptr += 5;
	printf("%d\n", a);
	printf("%d\n", *ptr);
}