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
	struct Student user01={};
		printf("Moi ban nhap ten cua ban:");
		fgets(user01.fullName,100,stdin);
		user01.fullName[strcspn(user01.fullName, "\n")] = '\0';
		printf("Moi ban nhap tuoi cua ban:");
		scanf("%d",&user01.age);
		getchar();
		printf("Moi ban nhap sdt cua ban:");
		fgets(user01.phone,20,stdin);
		user01.phone[strcspn(user01.phone, "\n")] = '\0';
		
	printf("Thong tin hoc sinh:\n");
	printf("Ho va Ten:%s\n",user01.fullName);
	printf("Tuoi:%d\n",user01.age);
	printf("So dien thoai:%s\n",user01.phone);
	
	return 0;
 }

