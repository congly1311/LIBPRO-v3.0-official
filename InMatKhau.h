#pragma once
#include "Header.h"
void inmk(char pw[20]) {
	int pas = 0;
	char c;
	while (c = getch()) {
		if (c == '\n' || c == '\r') {
			cout << "\n";
			break;
		}
		else if (c == '\b') {
			cout << "\b \b"; pas--;
		}
		else {
			cout << '*';
			pw[pas] = c;
			pas++;
		}
	}
	for (int i = (pas); i < 20; i++)pw[i] = '\0';
}