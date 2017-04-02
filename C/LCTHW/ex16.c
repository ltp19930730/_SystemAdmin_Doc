#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *name;
	int age;
	int height;
	int weight;
}Person;

Person* Person_create(char *name, int age, int height, int weight)
{
	Person *who = malloc(sizeof(Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who;

}

void Person_destroy(Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(Person *who)
{
	printf("Name: %s\n",who->name);
	printf("\tAge: %d\n",who->age);
	printf("\tHeight: %d\n",who->height);
	printf("\tWeight: %d\n",who->weight);
}

int main(int argc, char *argv[])
{
	
	Person *joe = Person_create(
			"Joe Alex", 32, 64, 140);
	
	Person *frank = Person_create(
			"Frank Blank", 20, 72, 180);
	// print them out and where they are in memory
	printf("Joe is at memory location %p:\n",joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);
    
	//create a struct on stack
	Person tesla;
	tesla.name = "tesla luo";
	tesla.age = 24;
	tesla.height = 178;
	tesla.weight = 83;
 	Person_print(&tesla);
	printf("tesla is %p:\n",&tesla);
	// print null
	//	Person_destroy(NULL);
	// destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}
