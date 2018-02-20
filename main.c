#include <stdio.h>
#include <stdlib.h>

int is_valid_id(long long  id)
{
	int c11, c10, c9, c8, c7, c6, c5, c4, c3, c2, c1;

	c1 = id % 10;
	c2 = id / 10 % 10;
	c3 = id / 100 % 10;
	c4 = id / 1000 % 10;
	c5 = id / 10000 % 10;
	c6 = id / 100000 % 10;
	c7 = id / 1000000 % 10;
	c8 = id / 10000000 % 10;
	c9 = id / 100000000 % 10;
	c10 = id / 1000000000 % 10;
	c11 = id / 10000000000;


	int rule1 = (c2 == (7 * (c11 + c9 + c7 + c5 + c3) - (c4 + c6 + c8 + c10)) % 10);
	int rule2 = (c1 == (c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11) % 10);

	if (c11 >= 10 || id<=10000000000 ){
		printf("\nHatali Tc kimlik numarasi girdiniz");
		return 0;
	}

	if (c11&&rule1&&rule2)
		return 1;
	else
		return 0;
	
}


int main()
{
	long long x;

	while (1){
		printf("\nTc kimlik numarasi giriniz:");
		scanf("%lld", &x);
		if (is_valid_id(x))
			printf("\n%lld--->Tc kimlik numarasi gecerlidir.\n",x);
		else
			printf("\n%lld--->Tc kimlik numarasi gecerli degildir.\n",x);
	}
	system("pause");
	
}
