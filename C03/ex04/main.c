#include <string.h>
#include <stdio.h>
char *ft_strstr(char *str, char *to_find);

int main ()
	{
	  char *ptr = "Hola don pepito";
	  char *ptr2 = "Hola don jose";
	  char a;
	  char *ptr3 = &a;
	  
	  ptr3 = ft_strstr(ptr, "la");
	  ptr2 = strstr(ptr, "la");
	  
	  printf("%s\n%s", ptr3, ptr2);
}
