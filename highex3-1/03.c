#include <stdio.h>



typedef struct student {
	char id[20];
	char name[20];
	int year;

}Student;
int main()
{
	Student stu[3] = { {"20160001", "GoGilDong", 1997}, 
	{"20160002", "HongGilDong", 1996}, 
	{"20160003", "KimGilDong", 1995}, };
	Student* p = &stu;
	for (int i = 0; i < 3; i++) {
		printf("%d년생 %s의 학번은 %s입니다.\n",(p+i)->year, (p+i)->name, (p+i)->id );
	}
	return 0;
}