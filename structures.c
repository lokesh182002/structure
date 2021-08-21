#include<stdio.h>
 struct student
{
	char name[100];
	char roll[110];
	int marks;
};
main()
{
    struct student s1={"ram","20p31ao547",596};
	printf("\n student 1 details:");
	printf("\n name:%s\n roll:%s\n marks:%d",s1.name,s1.roll,s1.marks);
}
