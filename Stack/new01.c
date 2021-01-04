#include <stdio.h>
typedef struct student_t {
	char name[32];
	int id;
} student;
student *get_data(int *, int *); // function prototype: 함수 원형에 의한 선언
void display_data(student *, int); // 
int main()
{
	int a, b = 30, *ap = NULL, *pt = ap;
	int *bp = &b;
	student *student = NULL;
	ap = &a;
	*ap = 10;
	student = get_data(&a, &b); // function call: call by reference and pointer return
	printf("%d, %d, 이름 %s", a, b, student[0].name);
	display_data(student, 2);
	return 0;
}

student *get_data(int *x, int *y) // function definition
{
	student *st = NULL; // static 변수나, 동적 메모리 할당용 포인터만 가능
	st = (student *)malloc(sizeof(student) * 2); // 배열 크기 2인 배열 공간 확보
	strcpy(st[0].name, "최경호");
	st->id = 20145113; //st[0].id == (st + 1)->id == (*(st+1)).id
	strcpy(st[1].name, "권태민");
	st[1].id = 20135234;
	printf("Function called by reference : %d and %d\n", ++(*x), (*y)++);
	return st; // static 변수나 동적 메모리 할당된 포인터만 반환 가능
}
void display_data(student *student, int size)
{
	int i;
	for (i = 0; i < size; i++) printf("학번: %d, 이름 %s", student[i].id, (student + i)->name);
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
	//printf("문자열을 입력하시오 : ");
	//scanf("%s",str);
	StackType *p = "(3+4[2*)";
	if (check_matching(p) == 1)
		printf("%s 괄호검사성공\n", p);
	else
		printf("%s 괄호검사실패\n", p);
	return 0;
}

void init_stack(StackType *s) {
	s->top = -1;
}
// 공백 상태 검출 함수
int is_empty(StackType *s) {
	return (s->top == -1);
}
// 포화 상태 검출 함수
int is_full(StackType *s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}


void push(StackType *s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else s->data[++(s->top)] = item;
}
// 삭제함수
element pop(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

int check_matching(const char *in)
{
	StackType s;
	char ch, open_ch;
	int i, n = strlen(in); // n= 문자열의 길이
	init_stack(&s); // 스택의 초기화
	for (i = 0; i < n; i++) {
		ch = in[i]; // ch = 다음 문자
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
	if (!is_empty(&s)) return 0; // 스택에 남아있으면 오류
	return 1;
}.*/