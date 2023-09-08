#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
void printCharacter(char c) {
    putchar(c);
    if (c != '9')
    {
	    putchar(',');
	    putchar(' ');
    }
}

int main(void)
{
	printCharacter('0');
	printCharacter('1');
	printCharacter('2');
	printCharacter('3');
	printCharacter('4');
	printCharacter('5');
	printCharacter('6');
	printCharacter('7');
	printCharacter('8');
	printCharacter('9');
	putchar('\n');
	return (0);
}
