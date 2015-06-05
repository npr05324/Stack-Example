
#include <stdio.h>


void push(int * stack, int input, int * sn);
void pop(int * stack, int *outpop, int * sn);


main(){
	int stc[100]; //stack 0~99
	
	int arr2[100]; // 스택에서 팝한 값을 받을곳
	int top = 0; // 최상단

	int choice=0; // 선택

	int temp = 0; // 스택에 푸시할 값

	int exit_cnt = 0;
	






	
	do
	{   
		printf("1:push 2:pop 3:exit \n");
		printf("선택:");
		scanf_s("%d",&choice);
		
		
		


		switch (choice)
		{
		case 1:
			printf("스택에 push 할값:");
			scanf_s("%d", &temp);
			push(stc, temp, &top);
			temp = 0;
			break;
		case 2:
			pop(stc,arr2 ,&top);

			break;

		case 3:
			exit_cnt = 1;
			break;
		default:
			break;

			


		}
	} while (exit_cnt!=1);

	











}

void pop(int * stack, int *outpop, int * sn){
	
	if (*sn == 0)
	{
		printf("스택이 비어있습니다\n");
	}
	else{

		printf("%d번째 스택:%d\n", *sn, *(stack + (*sn - 1)));
		*sn -= 1;

	}
}


void push(int * stack, int input, int * sn){
	if (*sn == 0){
		*stack = input;
		*sn += 1;
	}
	else{
		*(stack + (*sn)) = input;
		*sn += 1;
	}



}

