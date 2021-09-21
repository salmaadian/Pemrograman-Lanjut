#include <stdio.h>
#include <stdlib.h>

int perpangkatan(int y, int x, int a){
	int total = 1;
	for(a=1; a<=y; a++){
		total = total*x;
	}
	return total;
}
int main()
{
	int x, y, a;
	int total = 1;
	printf("Masukkan angka yang ingin dipangkatkan: ");
	scanf("%i",&x);
	printf("Pangkat yang diinginkan: ");
	scanf("%i",&y);
	perpangkatan(y, x, a);
	total=perpangkatan(y,x,a);
	printf("\nHasil dari bilangan yang telah dipangkatkan adalah %i", total);
}
