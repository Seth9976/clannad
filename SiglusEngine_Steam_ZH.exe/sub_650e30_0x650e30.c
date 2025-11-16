// 函数: sub_650e30
// 地址: 0x650e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s< 0)
    return 

void* ecx = data_bac504
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x30c30c31, *(ecx + 0x1a0) - *(ecx + 0x19c))
int32_t edx_1 = edx s>> 5

if ((edx_1 u>> 0x1f) + edx_1 s<= arg1 || arg2 s< 0)
    return 

void* esi_3 = data_bac504
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x30c30c31, *(ecx + 0x1a0) - *(esi_3 + 0x19c))
int32_t edx_3 = edx_2 s>> 5

if ((edx_3 u>> 0x1f) + edx_3 s> arg2)
    int32_t edx_4 = *(esi_3 + 0x19c)
    sub_64e7b0(arg2 * 0xa8 + edx_4, arg1 * 0xa8 + edx_4)
