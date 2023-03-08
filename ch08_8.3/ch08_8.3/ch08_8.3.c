#define _CRT_SECURE_NO_WARNINGS 1
/*
	判断参数是否与一个关键字列表中的任何单词匹配，
	并返回匹配的索引值。如果未能找到匹配，函数返回-1
*/
#include <stdio.h>
#include <string.h>
#define N_KEYWORD (sizeof(keyword) / sizeof(keyword[0])

const char* keyword[] = {
	"do",
	"for",
	"if",
	"register",
	"return",
	"switch",
	"while",
	NULL
};


int lookup_keyword(const char* desired_word,
	const char* keyword_table[])
{
	const char** kwp;
	for (kwp = keyword_table; *kwp != NULL; kwp++) {
		/*
			如果这个单词与我们所查找的单词匹配，返回它在表中的位置
		*/
		if (strcmp(desired_word, *kwp) == 0) {
			return kwp - keyword_table;
		}
	}
	return -1;
}

int main(void)
{
	const char* test = "whie";
	int n = lookup_keyword(test, keyword);
	printf("%d\n", n);
	return 0;
}