#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i, a;
  char buf[MAX_BUF];

  do {
    fgets(buf, MAX_BUF, stdin);
    len = strlen(buf);
    
    for (int i = 0; i < len; i++) {
	if (buf[i] == 'a' || buf[i] == 'A')
	   letter_frequency[0]++;
	if (buf[i] == 'b' || buf[i] == 'B')
           letter_frequency[1]++;
	if (buf[i] == 'c' || buf[i] == 'C')
           letter_frequency[2]++;
	if (buf[i] == 'd' || buf[i] == 'D')
           letter_frequency[3]++;
	if (buf[i] == 'e' || buf[i] == 'E')
           letter_frequency[4]++;
	if (buf[i] == 'f' || buf[i] == 'F')
           letter_frequency[5]++;
	if (buf[i] == 'g' || buf[i] == 'G')
           letter_frequency[6]++;
	if (buf[i] == 'h' || buf[i] == 'H')
           letter_frequency[7]++;
	if (buf[i] == 'i' || buf[i] == 'I')
           letter_frequency[8]++;
	if (buf[i] == 'j' || buf[i] == 'J')
           letter_frequency[9]++;
	if (buf[i] == 'k' || buf[i] == 'K')
           letter_frequency[10]++;
	if (buf[i] == 'l' || buf[i] == 'L')
           letter_frequency[11]++;
	if (buf[i] == 'm' || buf[i] == 'M')
           letter_frequency[12]++;
	if (buf[i] == 'n' || buf[i] == 'N')
           letter_frequency[13]++;
	if (buf[i] == 'o' || buf[i] == 'O')
           letter_frequency[14]++;
	if (buf[i] == 'p' || buf[i] == 'P')
           letter_frequency[15]++;
	if (buf[i] == 'q' || buf[i] == 'Q')
           letter_frequency[16]++;
	if (buf[i] == 'r' || buf[i] == 'R')
           letter_frequency[17]++;
	if (buf[i] == 's' || buf[i] == 'S')
           letter_frequency[18]++;
	if (buf[i] == 't' || buf[i] == 'T')
           letter_frequency[19]++;
	if (buf[i] == 'u' || buf[i] == 'U')
           letter_frequency[20]++;
	if (buf[i] == 'v' || buf[i] == 'V')
           letter_frequency[21]++;
	if (buf[i] == 'w' || buf[i] == 'W')
           letter_frequency[22]++;
	if (buf[i] == 'x' || buf[i] == 'X')
           letter_frequency[23]++;
	if (buf[i] == 'y' || buf[i] == 'Y')
           letter_frequency[24]++;
	if (buf[i] == 'z' || buf[i] == 'Z')
           letter_frequency[25]++;
    }

  } while (len > 1);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
}
