#include <stdio.h>
#include <string.h>

int contains(char str1[], char str2[])
{
	for(int i=0; i < strlen(str1); i++)
    {
        	int j = 0;
        	for(int k=i; j < strlen(str2); j++,k++)
            {
           		 if (str1[k] != str2[j]) {
                		break;
            		}
        	}
        if (j == strlen(str2)) {
            return 1;
        }
    }
    return 0;
}

int main()
{
	printf("%d\n", contains("Aymen", "men"));
	return 0;
}
