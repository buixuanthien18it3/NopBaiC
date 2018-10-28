#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char Chu[100];
	printf("Nhap chuoi: ");
	gets(Chu);
	printf("Chuoi vua nhap la: ");
	puts(Chu);
	int Dodai= strlen(Chu);
	printf("So ki tu cua chuoi: %d", Dodai);
}
