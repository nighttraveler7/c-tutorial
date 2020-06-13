#include <stdio.h>

int main(void)
{
	const char *text = "ABC";	// NULL character will automatically be added at the end

	int i = 0;	// counter
	char c;		// current character
	while (1)
	{
		c = *(text + i);
		if (c == (char)NULL) break;	// break if c is null
		printf("%c\n", c);
		i += sizeof(char);		// size of char type
	}

	return 0;
}
