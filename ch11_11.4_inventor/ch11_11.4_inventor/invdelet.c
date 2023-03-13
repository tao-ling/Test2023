#define _CRT_SECURE_NO_WARNINGS 1
#include "inventor.h"

void discard_inventory_record(Invrec* record)
{
	/*
		删除记录变体部分的内存
	*/
	switch (record->type) {
	case SUBASSY:
		free(record->info.subassy->part);
		free(record->info.subassy);
		break;
	case PART:
		free(record->info.part);
		break;
	}
	/*
		删除记录的主体部分
	*/
	free(record);
}