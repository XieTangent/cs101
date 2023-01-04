#include <stdio.h>

void print_top () {
  printf ("X'mas tree!\n");
}

void print_truck (int i) {
    for (int j = 1; j <= 1 + 2 * (i - 1); j++) {
    print_spaces(3 + 2 * (i - 1),1);
    printf ("*\n");
    }
}

void print_spaces (int rows, int r) {
    for (int i = 0; i < rows - r; i++) {
    printf (" ");
    }
}

void print_stars (int r) {
    for (int i = 0; i < 1 + 2 * (r - 1); i++) {
    printf ("*");
    }
}

int main () {
    int i = 3;
    int rows = 3 + 2 * (i - 1);
    print_top ();
    for (int j = 1; j <= i; j++) {
    for (int r = 1; r <= 3 + 2 * (j - 1); r++) {
	print_spaces (rows, r);
	print_stars (r);
	printf ("\n");
	}
    }
    print_truck (i);

    return 0;
}
