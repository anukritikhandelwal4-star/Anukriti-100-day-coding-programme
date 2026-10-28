/*\\nQ2 (Operations)
Input two numbers and display operations. Handle division by zero.\\n*/\\n\\n#include <stdio.h>
int main() { float a, b; printf("Enter two numbers: "); if(scanf("%f %f", &a, &b)==2) { printf("Sum: %.2f\\nDiff: %.2f\\nProd: %.2f\\n", a+b, a-b, a*b); if(b!=0) printf("Quot: %.2f\\n", a/b); else printf("Div by zero error\\n"); } return 0; }