#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
	int i ,length ;
	int flg=0;
    printf("enter string\n");
    scanf("%s",&str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]==str[length-i-1])
        {
            flg=1;
            break;
        }
    }
if (flg==1)
printf("%s is a palindrom",str);
else
printf("%s is not a palintrom ",str);
	
    return 0;
}
