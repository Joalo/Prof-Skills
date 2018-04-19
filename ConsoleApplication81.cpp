// ConsoleApplication81.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "math.h"
#include "malloc.h"
#include "time.h"
#include "string.h"
#include "ctype.h"

int num;
int function(char* str);

int main()
{
	
function("I don't know what's wrong with me. I just keep getting to these points where I'm just laying here in my bed and feeling my chest sink down through the mattress and the floor. It makes it very hard to get up. This feeling, like too large an anchor on too small a boat, appears sporadically, and I get jerked downward by it like the girl in the opening scene of Jaws. I never know when it's going to reappear, so I never know when to take a breath. Whenever it hits, I feel like I'm drowning but not in water. It isn't water that I have to tread to stay afloat. I'm surrounded by tiny particles of disappointment and failure and inadequacy that accumulate throughout the hours and days of my life, and, each time my head falls below the surface, I swallow a little bit more of the bitter memories.\n");
printf("%d\n", num);

    return 0;
}
int function(char* str)
{
	int i;
	int length;
	length = strlen(str);
	num = 0;
	for (i = 0; i < length; i++)
	{
		if (tolower(str[i]) == 'a') num++;
			
		if (tolower(str[i]) == 'o') num++;
			
		if	(tolower(str[i]) == 'i')num++;

        if (tolower(str[i]) == 'e') num++;

		if (tolower(str[i]) == 'a') num++;
		
		}

		return num;


}