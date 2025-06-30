#include <stdio.h>

typedef struct student{
    int ID;
    char name[50];
    float grade[5];
}x;

int main(){
     x student[4];
float Total;

float Average;
    

for(int i=1; i<=4 ;i++){
    printf("Enter the details of student %d",i);
    printf("Enter ID");
    scanf("%d",&student[i].ID);
    printf("Enter name:");
    scanf("%s",student[i].name);
    printf("Enter grades:");
    for(int j=0;j<5;j++){
        scanf("%f",&student[i].grade[j]);
    }
}

for(int i=1;i<=4;i++){
    for(int j=0;j<5;j++){
     Total+=student[i].grade[j];
     Average=Total/5;
    }
printf("%s",student[i].name);
printf("(ID:%d):",student[i].ID);
printf("Total=%f,Average=%f",Total,Average);
}

return 0;
}



