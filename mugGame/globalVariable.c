
#include <stdio.h>

int global = 10;
//user();

int user()
{
	int User_local = 30;

	User_local= User_local + 20;
	printf("user()에서 User_local + 20 출력= %d\n", User_local);

	global = global + 15;
	printf("user()에서 global + 15 출력 = %d\n\n", global);
}

int main() {
	int Main_local = 20;
	printf("main()에서 Main_local 출력 = %d\n\n", Main_local);

	user();
	printf("main()에서 global 출력 = %d\n", global);
	user();
	Main_local = Main_local + 5;
	printf("main()에서 Main_local + 5 출력 = %d\n", Main_local);
	global = global + 10;
	printf("main()에서 global + 10 출력 = %d\n", global);
}
