#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("정수를 입력하시오:");
	scanf("%d", &a);
	
	if(a<0)
    	a = a*(-1);
	
	printf("절댓값은 %d 입니다. \n", a);
//제가 가리키는곳 보시면 틀린곳을 알려줘요~! 
	return 0;
}
