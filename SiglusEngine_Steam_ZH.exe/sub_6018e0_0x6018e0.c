// 函数: sub_6018e0
// 地址: 0x6018e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
int32_t edx_3 = edx_2 s>> 6

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t edx_9
    int32_t i
    
    do
        int32_t* edi_2 = *(arg1 + 0xb4) * 0x15c + *(arg1 + 0xa8)
        HANDLE esi_1 = *edi_2
        
        if (esi_1 != 0)
            WaitForSingleObject(esi_1, 0xffffffff)
        
        int32_t eax_3
        eax_3.b = edi_2[0xe].b
        
        if (esi_1 != 0)
            ReleaseSemaphore(esi_1, 1, nullptr)
            eax_3.b = eax_3.b
        
        if (eax_3.b == 0)
            break
        
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
        int32_t edx_5 = edx_4 s>> 6
        i = i_1 + 1
        i_1 = i
        *(arg1 + 0xb4) = mods.dp.d(sx.q(*(arg1 + 0xb4) + 1), (edx_5 u>> 0x1f) + edx_5)
        int32_t eax_8
        int32_t edx_8
        edx_8:eax_8 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
        edx_9 = edx_8 s>> 6
    while (i s< (edx_9 u>> 0x1f) + edx_9)

sub_605110(*(arg1 + 0xb4) * 0x15c + *(arg1 + 0xa8), arg2, 0)
int32_t eax_11
int32_t edx_10
edx_10:eax_11 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
int32_t edx_11 = edx_10 s>> 6
int32_t ecx_13 = (edx_11 u>> 0x1f) + edx_11
int32_t eax_14
int32_t edx_12
edx_12:eax_14 = sx.q(*(arg1 + 0xb4) + 1)
*(arg1 + 0xb4) = mods.dp.d(edx_12:eax_14, ecx_13)
return divs.dp.d(edx_12:eax_14, ecx_13)
