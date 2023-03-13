#define _CRT_SECURE_NO_WARNINGS 1
#include "inventor.h"

Invrec* create_subassy_record(int n_parts)
{
	Invrec* new_rec;
	/*
		试图为Invrec部分分配内存
	*/
	new_rec = malloc(sizeof(Invrec));
	if (NULL != new_rec) {
		/*
			内存分配成功，现在存储SUBASSYINFO部分
		*/
		new_rec->info.subassy = 
			(Subassyinfo*)malloc(sizeof(Subassyinfo));
		if (NULL != new_rec->info.subassy) {
			/*
				为零件获取了一个足够大的数组
			*/
			new_rec->info.subassy->part =
				(struct SUBASSYPART*)malloc(n_parts * sizeof(struct SUBASSYPART));
			if (NULL != new_rec->info.subassy->part) {
				/*
					获取内存，填充我们已经知道值得字段，然后返回
				*/
				new_rec->type = SUBASSY;
				new_rec->info.subassy->n_parts = n_parts;
				return new_rec;
			}
			/*
				内存用完了，释放我们原先分配的内存
			*/
			free(new_rec->info.subassy);
		}
		free(new_rec);
	}
	return NULL;
}