#include<stdio.h>
#include<string.h>

struct student{
    int Rollno;
    char Name[20];
    char Department[40];
    int Yearofjoing;
    float score;
};

int main()

{

    struct student s1;
    printf("Enter student 1 details:");
    scanf("%d %s %s %d %f",&s1.Rllno,&s1.Name,&s1.Department,&s1.Yearofjoing,&s1.Scroe);

    struct student s2;
    printf("Enter student 2 details:");
    scanf("%d %s %s %d %f",&s2.Rllno,&s2.Name,&s2.Department,&s2.Yearofjoing,&s2.Scroe);

    struct student s3;
    printf("Enter student 3 details:");
    scanf("%d %s %s %d %f",&s3.Rllno,&s3.Name,&s3.Department,&s3.Yearofjoing,&s3.Scroe);

    struct student s4;
    printf("Enter student 4 details:");
    scanf("%d %s %s %d %f",&s4.Rllno,&s4.Name,&s4.Department,&s4.Yearofjoing,&s4.Scroe);

    struct student s5;
    printf("Enter student 5 details:");
    scanf("%d %s %s %d %f",&s5.Rllno,&s5.Name,&s5.Department,&s5.Yearofjoing,&s5.Scroe);

    printf("%d %s %s %d %f %2f\n",s1.Rollno,s1.Name,s1.Department,s1.Yearofjoing,s1.Scroe);
    printf("%d %s %s %d %f %2f\n",s2.Rollno,s2.Name,s2.Department,s2.Yearofjoing,s2.Scroe);
    printf("%d %s %s %d %f %2f\n",s3.Rollno,s3.Name,s3.Department,s3.Yearofjoing,s3.Scroe);
    printf("%d %s %s %d %f %2f\n",s4.Rollno,s4.Name,s4.Department,s4.Yearofjoing,s4.Scroe);
    printf("%d %s %s %d %f %2f\n",s5.Rollno,s5.Name,s5.Department,s5.Yearofjoing,s5.Scroe);

    return 0;

}

