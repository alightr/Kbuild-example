#include <stdio.h>

#include "foo/foo.h"
#include "bar/bar.h"
#include "whiz.h"

int main(int argc, char **argv)
{
	printf("Hello\n");
	whiz();
	foo();
	bar();
	return 0;
}
