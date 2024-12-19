#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	struct Student{
		char fullName[100];
		int age;
		char phone[20];	
	};
	struct Student user01={"Tran Huu Nhat",18,"0342966735"};
	printf("Thong tin hoc sinh:\n");
	printf("Ho va Ten:%s\n",user01.fullName);
	printf("Tuoi:%d\n",user01.age);
	printf("So dien thoai:%s\n",user01.phone);
	
	return 0;
 }

