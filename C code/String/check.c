#include<stdio.h>

int main()
{
	// declaring string
	char str[50];
	
	// reading string
	scanf("%s",str);
	
	// print string
	printf("%s",str);

	return 0;
}

########################################################
// C program to illustrate how to
// pass string to functions
#include<stdio.h>

void printStr(char str[])
{
	printf("String is : %s",str);
}

int main()
{
	// declare and initialize string
	char str[] = "GeeksforGeeks";
	
	// print string by passing string
	// to a different function
	printStr(str);
	
	return 0;
}

#########################################
The gets() function can also be used to read character string with white spaces
##############################################
If you don't want to change the strings, then you could simply do

const char *a[2];
a[0] = "blah";
a[1] = "hmm";

If you do want to be able to change the actual string content, the you have to do something like

char a[2][14];
strcpy(a[0], "blah");
strcpy(a[1], "hmm");