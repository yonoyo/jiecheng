#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int add(int j){
	int sum = 0;
	int k = 1;
	for (int i = 1; i <= j; i++){
		k= i*k;
		sum += k;
	}
	return sum;
}
int main() {
	int n = 0;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	printf("%d\n", add(n));
		system("pause");
	return 0;
}
