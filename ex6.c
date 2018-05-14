#include <stdio.h>

//use recursive and write as a function.

int  NchooseK(int n, int k) {
   if (k == 0) {  // NchooseK(n, 0) = 1;
          return 1;
        } else
        if (k == n) {  //NchooseK(n, n) = 1
          return 1;
        } else {                  //NchooseK(n, k) = NchooseK(n-1, k-1) + NchooseK(n-1, k)
          return NchooseK(n-1, k-1) + NchooseK(n-1, k);
        } 
 }

int main() {

//have while loop until read 0 0

int n= 1, k=1;
int result;

while (n != 0 && k >= 0) {

	printf("Enter two integers (for n and k) separated by space:\n");
	scanf("%i %i", &n, &k);  //scans inputs with whitespace in btw

	//call nchoosek and print result
	result = NchooseK(n, k);
	printf("%i\n", result);
} 
}
