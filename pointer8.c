#include <stdio.h>

struct Student {
	char name[30];
	int age;
};

int main() {
	struct Student student1 = {"Ashley G", 19};

	struct Student *ptr = &student1;

	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);

	return 0;
}
