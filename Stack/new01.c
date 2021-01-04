#include <stdio.h>
typedef struct student_t {
	char name[32];
	int id;
} student;
student *get_data(int *, int *); // function prototype: �Լ� ������ ���� ����
void display_data(student *, int); // 
int main()
{
	int a, b = 30, *ap = NULL, *pt = ap;
	int *bp = &b;
	student *student = NULL;
	ap = &a;
	*ap = 10;
	student = get_data(&a, &b); // function call: call by reference and pointer return
	printf("%d, %d, �̸� %s", a, b, student[0].name);
	display_data(student, 2);
	return 0;
}

student *get_data(int *x, int *y) // function definition
{
	student *st = NULL; // static ������, ���� �޸� �Ҵ�� �����͸� ����
	st = (student *)malloc(sizeof(student) * 2); // �迭 ũ�� 2�� �迭 ���� Ȯ��
	strcpy(st[0].name, "�ְ�ȣ");
	st->id = 20145113; //st[0].id == (st + 1)->id == (*(st+1)).id
	strcpy(st[1].name, "���¹�");
	st[1].id = 20135234;
	printf("Function called by reference : %d and %d\n", ++(*x), (*y)++);
	return st; // static ������ ���� �޸� �Ҵ�� �����͸� ��ȯ ����
}
void display_data(student *student, int size)
{
	int i;
	for (i = 0; i < size; i++) printf("�й�: %d, �̸� %s", student[i].id, (student + i)->name);
}

/*#define MAX_STACK_SIZE 100
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void init_stack(StackType *s);
int is_empty(StackType *s);
int is_full(StackType *s);
void push(StackType *s, element item);
element pop(StackType *s);
int check_matching(StackType *in);

int main(void)
{
	//char str[30];
	//printf("���ڿ��� �Է��Ͻÿ� : ");
	//scanf("%s",str);
	StackType *p = "(3+4[2*)";
	if (check_matching(p) == 1)
		printf("%s ��ȣ�˻缺��\n", p);
	else
		printf("%s ��ȣ�˻����\n", p);
	return 0;
}

void init_stack(StackType *s) {
	s->top = -1;
}
// ���� ���� ���� �Լ�
int is_empty(StackType *s) {
	return (s->top == -1);
}
// ��ȭ ���� ���� �Լ�
int is_full(StackType *s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}


void push(StackType *s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else s->data[++(s->top)] = item;
}
// �����Լ�
element pop(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

int check_matching(const char *in)
{
	StackType s;
	char ch, open_ch;
	int i, n = strlen(in); // n= ���ڿ��� ����
	init_stack(&s); // ������ �ʱ�ȭ
	for (i = 0; i < n; i++) {
		ch = in[i]; // ch = ���� ����
		switch (ch) {
		case '(': case '[': case '{':
			push(&s, ch);
		break; case ')': case ']': case '}':
			if (is_empty(&s)) return 0;
			else {
				open_ch = pop(&s);
				if ((open_ch == '(' && ch != ')') ||
					(open_ch == '[' && ch != ']') ||
					(open_ch == '{' && ch != '}')) {
					return 0;
				}
				break;
			}
		}
	}
	if (!is_empty(&s)) return 0; // ���ÿ� ���������� ����
	return 1;
}.*/