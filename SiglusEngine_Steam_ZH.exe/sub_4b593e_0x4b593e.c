// 函数: sub_4b593e
// 地址: 0x4b593e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t edi
int32_t var_24 = edi
int32_t var_18 = 0
void var_14
void* edi_1 = &var_14
*edi_1 = 0
void* edi_2 = edi_1 + 4
*edi_2 = 0
*(edi_2 + 4) = 0
int32_t edx = *(arg2 + 0xc)
int32_t edi_5 = 0

if (edx u> 0)
    int32_t esi_1 = *(arg1 + 0x14)
    int32_t* eax_1 = *(arg2 + 0x10)
    
    do
        int32_t ecx_2 = *(*(esi_1 + (*eax_1 << 2)) + 0x10)
        
        if (ecx_2 u> 3)
            return 0
        
        edi_5 += 1
        eax_1 = &eax_1[1]
        (&var_18)[ecx_2] = 1
    while (edi_5 u< edx)

int32_t ecx_3 = 0
int32_t edx_1 = 1

for (int32_t i = 0; i u< 3; i += 1)
    if ((&var_18)[i] == 0)
        ecx_3 = 1
    else
        edx_1 = 0

if (ecx_3 != 0 && edx_1 == 0)
    return 1

return result
