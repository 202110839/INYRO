#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int number[10000];
int top_num = -1;
int count=0;
int num;

void push(num){
	number[count] = num;
	count++;
	top_num++;
}

void pop() {
	if (count != 0) {
		count--;
		printf("%d\n", number[count]);
	}
	else
		printf("%d\n", -1);
}

void size() {
	printf("%d\n", count);
}

void empty() {
	if (count != 0)
		printf("%d\n", 0);
	else
		printf("%d\n", 1);
}

void top() {
	if (count == 0) {
		return;
	}
	else {
		printf("%d\n", number[count - 1]);
		return;
	}
}

int main (void){
	int n;
	char stack[10];

	printf("명령의 수 입력: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		printf("함수:");
		scanf("%s", stack);
		if (strcmp(stack, "push") == 0) {
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(stack, "pop")==0){
			pop();
		}
		else if (strcmp(stack, "size") == 0) {
			size();
		}
		else if (strcmp(stack, "empty") == 0) {
			empty();
		}
		else if (strcmp(stack, "top") == 0) {
			top();
		}

	}
}
