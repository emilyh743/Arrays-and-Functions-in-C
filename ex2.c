/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], c;
  int i;
  int a;
  //int lowercase, uppercase, digits, other;
  int length;
  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
    
  fgets(text, MAX, stdin);
  length = strlen(text) - 1;
  
  int pal = 1;
  printf("Your input in reverse is:\n");  

  /* Analyse contents of text[]: */
  for (int i = length - 1; i >=0; i--) {
	printf("%c", text[i]);
	a = length - i - 1;
	pal = pal && text[i] == text[a]; 
}
printf("\n");
if (pal)
printf("Found a palindrome!\n");
}
