#include <stdio.h>
#include <string.h>

int main (){

// creating first two string

char string1[27];
char string2[] = "abcdefghijklmnopqrstuvwxyz";

for (int i = 0;i < 26; i++){

	string1[i] = 'a' + i;
}

string1[26] = '\0';

// comparing the strings

if (strcmp(string1, string2) == 0)
	printf("both strings are the same\n");
else 
	printf("the strings are not the same\n");

// updating one string

for (int i = 0; i < 26; i++){

string1[i] = string1[i] - 32;
}

string1[26] = '\0';

//comapring strings to test if different

if(strcmp(string1, string2) == 0)

	printf("both strings are the same\n");
else 
	printf("the strings are not the same\n");

// creating third string

char string3[54];
strcat(string3, string1);
strcat(string3, string2);

// printing all three strings

printf("string 1: %s\n string 2: %s\n string 3: %s\n", string1, string2, string3);

}
