#include "func.h"

void main()
{
	x = 0;
	y = 1;

	calc();

	//out
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f = %.4f\n", f);

	//in
	printf("%s", "x = "); scanf("%lf", &x);
	printf("%s", "y = "); scanf("%lf", &y);

	calc();
	printf("f = %.4f\n", f);

	system("pause");
}
