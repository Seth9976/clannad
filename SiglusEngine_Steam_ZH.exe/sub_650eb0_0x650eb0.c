// 函数: sub_650eb0
// 地址: 0x650eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0)
    void* esi_1 = data_bac504
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x30c30c31, *(esi_1 + 0x1a0) - *(esi_1 + 0x19c))
    int32_t edx_4 = edx_3 s>> 5
    
    if ((edx_4 u>> 0x1f) + edx_4 s> arg1)
        void* ecx_1 = arg1 * 0xa8 + *(esi_1 + 0x19c)
        int32_t eax_4
        eax_4.b = *(ecx_1 + 0x88) != *(ecx_1 + 0x8c)
        return eax_4

int32_t eax
eax.b = 0
return eax
