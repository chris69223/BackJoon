#include <stdio.h>

typedef struct city 
{
	int num;
	char station[10];
	struct city* link;

} City;

int main()
{
	City line[4] = {{ 01,"Seoul", NULL }, { 02,"Daejeon", NULL },
		{ 02,"Daegu", NULL }, { 04,"Busan", NULL }
};
	City* p = line;
	//(*p).link=p->link
	line[0].link = &line[1];
	line[1].link = &line[2];
	line[2].link = &line[3];
	line[3].link = NULL;
	printf("%d번째 역 : %s -> %d번째 역 : %s\n-> %d번째 역 : %s -> %d번째 역: %s\n",
			p->num, p->station, p->link->num, p->link->station, p->link->link->num, p->link->link->station, 4, p->link->link->link->station );
	return 0;
}
