#include "Square.h"

int square(int l, int F) {
	int s = 0;
	if (F == -1)
		s = l * l;
	else
		s = l * F;
	return s;
}