
#include <stdio.h>


void push(int * stack, int input, int * sn);
void pop(int * stack, int *outpop, int * sn);


main(){
	int stc[100]; //stack 0~99
	
	int arr2[100]; // ���ÿ��� ���� ���� ������
	int top = 0; // �ֻ��

	int choice=0; // ����

	int temp = 0; // ���ÿ� Ǫ���� ��

	int exit_cnt = 0;
	






	
	do
	{   
		printf("1:push 2:pop 3:exit \n");
		printf("����:");
		scanf_s("%d",&choice);
		
		
		


		switch (choice)
		{
		case 1:
			printf("���ÿ� push �Ұ�:");
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
		printf("������ ����ֽ��ϴ�\n");
	}
	else{

		printf("%d��° ����:%d\n", *sn, *(stack + (*sn - 1)));
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

