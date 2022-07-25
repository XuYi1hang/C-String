#include <assert.h>

size_t str_len(const char* str)
{
	assert(NULL != str);	
	const char* temp = str;
	while(*temp) temp++;
	return temp - str;
}

char* str_cpy(char* dest,const char* src)
{
	assert(NULL != dest && NULL != src);	
	char* temp = dest;
	while(*temp++ = *src++);
	return dest;
}

char* str_cat(char* dest,const char* src)
{
	assert(NULL != dest && NULL != src);	
	char* temp = dest;
	while(*temp) temp++;
	while(*temp++ = *src++);
	return dest;
}

int str_cmp(const char* s1,const char* s2)
{
	assert(NULL != s1 && NULL != s2);	
	while(*s1 == *s2 && *s1) s1++,s2++;
	return *s1 - *s2;
}