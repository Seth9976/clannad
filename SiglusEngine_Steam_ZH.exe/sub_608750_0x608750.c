// 函数: sub_608750
// 地址: 0x608750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_2 = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc

if (i_2 s> 0)
    int32_t esi_2 = 0
    int32_t i
    
    do
        void* ecx_1 = *(arg1 + 0x144) + esi_2
        
        if (*(ecx_1 + 0xa0) != 0)
            sub_5eb310(ecx_1)
        
        esi_2 += 0x15fc
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0x4fba3d0b, *(arg1 + 0x43c) - *(arg1 + 0x438))
int32_t edx_4 = edx_3 s>> 0xb
int32_t i_3 = (edx_4 u>> 0x1f) + edx_4

if (i_3 s> 0)
    int32_t esi_3 = 0
    int32_t i_1
    
    do
        sub_5d6940(*(arg1 + 0x438) + esi_3)
        esi_3 += 0x19b0
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return sub_5aeb30(arg1 + 0x4cc) __tailcall
