#include <stdio.h>


int main(int argc, char *argv[])
{
	//printf ("number of arguments is %d\n" , argc);
	//printf ("arguments itself is %s\n", argv[1]);
	//printf ("arguments itself is %s\n", argv[2]);
	//printf ("arguments itself is %s\n", argv[3]);	
	FILE* file1 =  fopen (argv[1], "r");
	char* name = new char[30];
	int grade;
	fscanf (file1, "%s %d" , name, &grade);
	fclose(file1);
	printf ("name is %s and grade is %d\n", name, grade);
	//fscanf (filepointer"%s %d" , &storagestring, &storageint);
	//fprintf (filepointer, "the number is %d\n", i);
	//fclose (filepointer);
}
