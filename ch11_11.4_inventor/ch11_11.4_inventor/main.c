#define _CRT_SECURE_NO_WARNINGS 1
#include "inventor.h"

int main(void)
{
	Invrec* inverc = create_subassy_record(10);
	discard_inventory_record(inverc);
	return 0;
}