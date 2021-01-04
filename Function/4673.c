#include <stdio.h>
#include <stdlib.h>

int selfnumber(int n);

int main()
{
	int ary[10000];
	for (int i = 0; i < 1000; i++)
	{
		ary[i]=selfnumber(i);
	}
	for (int i = 0; i < 1000; i++)
	{
		if(ary[i]!=)
	}
	return 0;
	
}

int selfnumber(int a)
{
	if (a < 10)
		return 2 * a;
	else if (a < 100)
		return a + a / 10 + a % 10;
	else if (a < 1000)
		return (a + (a / 100) + ((a % 100) / 10) + a % 10);
	//else if (a <= 10000)
		//return(a + (a / 1000) + (a % 1000 / 100) + ((a % 100) / 10) + a % 10);

}

