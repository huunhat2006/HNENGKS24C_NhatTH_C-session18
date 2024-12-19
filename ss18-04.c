#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int id=1;
	int i;
	struct Student{
		char fullName[100];
		int age;
		char phone[20];	
	};
	struct Student user[50];
	for(i=0;i<5;i++) {
		printf("Moi ban nhap ten cua hoc sinh thu %d:",id);
		fgets(user[i].fullName,100,stdin);
		user[i].fullName[strcspn(user[i].fullName, "\n")] = '\0';
		printf("Moi ban nhap tuoi cua hoc sinh thu %d:",id);
		scanf("%d",&user[i].age);
		getchar();
		printf("Moi ban nhap sdt cua hoc sinh thu %d:",id);
		fgets(user[i].phone,20,stdin);
		user[i].phone[strcspn(user[i].phone, "\n")] = '\0';
		id++;
	}
	id=1;
	for(i=0;i<5;i++) {
		printf("ID:%d:\n",id);
		printf("Ho va Ten:%s\n",user[i].fullName);
		printf("Tuoi:%d\n",user[i].age);
		printf("So dien thoai:%s\n",user[i].phone);
		id++;
	}
	return 0;
 }

