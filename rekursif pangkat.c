#include <stdio.h>
#include <math.h>

int pangkat (int x, int y)
{
	if(y==0)
	{
		return 1;
	}
	else
	{
		return x*pangkat(x, y-1);
	}
}
main()
{
	int x, y;
	printf("Masukkan angka yang ingin dipangkatkan: ");
	scanf("%i",&x);
	printf("Pangkat yang diinginkan: ");
	scanf("%i",&y);
	printf("\nHasil dari bilangan yang telah dipangkatkan adalah %i", pangkat (x,y));
	getch();
	return x,y;
}
