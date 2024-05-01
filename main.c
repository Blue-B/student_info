#include <stdio.h>

student info{
    char name[50];
    char number[20];
    char address[100];
    int student_id;
}

int main(){
	student info infos[3];
	for (int i = 0; i < 3; i++){
		printf("이름:");
		scanf("%s", &infos[i].name);
		printf("번호:");
		scanf("%d", &infos[i]number);
		printf("주소 :");
		getchar()
		fgets(infos[i].nmumber, sizeof(infos[i].nmumber), stdin);
		printf("학번:");
		scanf("%d", &infos[i]student_id);
	}

	for (int i = 0; i < 2; i++){
		printf("이름:%d\n", infos[i].name);
		printf("번호:%s\n", infos[i].nmumber);
        		printf("주소:%s\n", infos[i].address);
        		printf("학번:%s\n", infos[i].student_id);
	}
	return 0;
}