#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct info of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(char * dog_t);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
