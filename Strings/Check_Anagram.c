#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int count=0;
	printf("Enter 1st String\n");
	fgets(s1,100,stdin);
	printf("Enter 2nd String\n");
	fgets(s2,100,stdin);
	int k1=strlen(s1)-1;
	int k2=strlen(s2)-1;
	if(k1==k2)
	{
		for(int i=0;i<k1;i++)
		{
			for(int j=0;j<k2;j++)
			{
				if(s1[i]==s2[j])
				{
					count++;
					break;
				}
			}
		}
		if(count==k1)
		{
			printf("String is Anagram");
		}
		else
		{
			printf("String is not Anagram");
		}
	}
	else
		{
			printf("String is not Anagram");
		}
	return 0;
}