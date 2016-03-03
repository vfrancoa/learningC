#include <stdio.h>

int radius, area;

main()
{
	printf("Enter radius (i.e. 10): ");
	scanf("%d", &radius);
	area = 3.14159 * radius * radius;
	printf("\n\nArea = %d\n", area );
	return 0;
}