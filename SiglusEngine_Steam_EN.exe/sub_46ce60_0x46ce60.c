// 函数: sub_46ce60
// 地址: 0x46ce60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1

if (arg1 s< 0 || arg1 s>= data_7031bc)
    return 

int32_t eax = arg2 + (arg1 << 1)
void* ecx = eax * 0x650

if (*(ecx + &data_72d6bc) != 5)
    return 

void* esi_1 = eax * 0x7a0
int32_t eax_1
eax_1.b = arg2 != 0
sub_4b8e80(eax_1, ecx + 0x72d784, esi_1 + 0x98bf8c, data_131310c, eax_1)
*(esi_1 + &data_98c1f8) += 1
