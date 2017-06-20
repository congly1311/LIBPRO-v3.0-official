#pragma once
#include "Header.h"
int timkiemchuoi(char a[], char b[]) {
	char c[100], d[100];
	char *ret;
	strlwr(strcpy(c, a));
	strlwr(strcpy(d, b));

	ret = strstr(c, d);
	if (ret == NULL) return 0;
	else return 1;
}