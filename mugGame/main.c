#include <string.h>
#include <stdio.h>

typedef struct _unit {
	char name[20];
	int MaxHp;
	int MaxMp;
	int Hp;
	int Mp;
	int Agi;
	int Str;
	int Dur;
	int Con;
} Unit;

int main() {
	int i, j;
	Unit man[4] = { { "man1", 500, 50, 100, 50, 80, 100, 50, 50 },
				 { "man2", 80, 60, 80, 60, 90, 80, 60, 60 } };

	Unit mon[3] = { {"mon1", 100, 40, 100, 40, 60, 70, 40, 40},
		{"mon2", 70, 30, 70, 30, 50, 50, 60, 60} };




	strcpy(man[2].name, "siwoo");
	man[2].MaxHp = 200;
	man[2].MaxMp = 100;
	man[2].Hp = 200;
	man[2].Mp = 100;
	man[2].Agi = 100;
	man[2].Str = 200;
	man[2].Dur = 100;
	man[2].Con = 200;
	
	char name[20] = {0, };
	char temp[255] = {0, };
	
	
	//printf("name value is %d.\n", sizeof(&sname));
	//printf("strlen(temp) value is %d.\n", sizeof(temp));
	while(1) {
	printf("이름을 입력하세요: ");
	scanf("%s", &temp);
		if(sizeof(name) <= strlen(temp)) {
		/*printf("sizeof(name): %d\n", sizeof(name));
		printf("sizeof(&name): %d\n", sizeof(&name));
		printf("sizeof(temp): %d\n", sizeof(temp));
		printf("sizeof(&temp): %d\n", sizeof(&temp));
		printf("strlen(name): %d\n", strlen(name));
		printf("strlen(&name): %d\n", strlen(&name));
		printf("strlen(temp): %d\n", strlen(temp));
		printf("strlen(&temp): %d\n", strlen(&temp));*/
			

		printf("허용된 범위를 넘었습니다. 다시 입력해주세요.\n");	
	}
		else {
		strcpy(man[3].name, temp);
		printf("4번째 용사 그놈의 이름은 %s 입니다.\n", man[3].name);
		break;
	}

}
/*	else
	{
		strcpy(man[4].name, name);
		printf("4번째 용사의 이름은 %s 입니다.\n", man[4].name);
	}
*/
	/*int scanHp;
	printf("%s\n", "체력은 얼마인가요?");
	scanf("%d", &scanHp);
	man[4].MaxHp = scanHp;
	printf("4번째 용사의 체력은 %d 입니다\n", man[4].MaxHp);
*/
	/*for (i = 0; i < 3; i++)
	{
		printf("%s\n", man[i].name);
		printf("Hp: %d/%d\n", man[i].Hp, man[i].MaxHp);
		printf("Con: %d/%d\n", man[i].Con, man[i].MaxMp);
		printf("Str: %d\n", man[i].Str);
		printf("Agi: %d\n", man[i].Con);
		printf("Dur: %d\n\n", man[i].Dur);
	};

	for (j = 0; j < 3; j++)
	{
		printf("%s\n", mon[j].name);
		printf("Hp: %d/%d\n", mon[j].Hp, mon[j].MaxHp);
		printf("Con: %d/%d\n", mon[j].Con, mon[j].MaxMp);
		printf("Str: %d\n", mon[j].Str);
		printf("Agi: %d\n", mon[j].Con);
		printf("Dur: %d\n\n", mon[j].Dur);
	};



	//printf("%s\n", man[0].name);
	//printf("Hp: %d/%d\n", man[0].Hp, man[0].MaxHp);
	//printf("Con: %d/%d\n", man[0].Con, man[0].MaxMp);
	//printf("Str: %d\n", man[0].Str);
	//printf("Agi: %d\n", man[0].Con);
	//printf("Dur: %d\n\n", man[0].Dur);

	//printf("%s\n", man[1].name);
	//printf("Hp: %d/%d\n", man[1].Hp, man[1].MaxHp);
	//printf("Con: %d/%d\n", man[1].Con, man[1].MaxMp);
	//printf("Str: %d\n", man[1].Str);
	//printf("Agi: %d\n", man[1].Con);
	//printf("Dur: %d\n\n", man[1].Dur);

	//printf("%s\n", mon[0].name);
	//printf("Hp: %d/%d\n", mon[0].Hp, mon[0].MaxHp);
	//printf("Con: %d/%d\n", mon[0].Con, mon[0].MaxMp);
	//printf("Str: %d\n", mon[0].Str);
	//printf("Agi: %d\n", mon[0].Con);
	//printf("Dur: %d\n\n", mon[0].Dur);

	//printf("%s\n", mon[1].name);
	//printf("Hp: %d/%d\n", mon[1].Hp, mon[1].MaxHp);
	//printf("Con: %d/%d\n", mon[1].Con, mon[1].MaxMp);
	//printf("Str: %d\n", mon[1].Str);
	//printf("Agi: %d\n", mon[1].Con);
	//printf("Dur: %d\n\n", mon[1].Dur);
*/
};
