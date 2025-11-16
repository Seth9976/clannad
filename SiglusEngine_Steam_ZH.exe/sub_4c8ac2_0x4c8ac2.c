// 函数: sub_4c8ac2
// 地址: 0x4c8ac2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1
int32_t esi_1 = *ecx & 0xfffff
uint32_t temp0 = divu.dp.d(0:(ecx[1]), esi_1)
int32_t edi
int32_t var_c = edi

if (temp0 u> 0)
    int32_t edx_5 = arg2 << 2
    arg1 = temp0
    uint32_t i
    
    do
        int32_t* eax_3 = ecx[2] + edx_5
        int32_t esi_2 = *eax_3
        *eax_3 = eax_3[1]
        *(ecx[2] + edx_5 + 4) = esi_2
        edx_5 += esi_1 << 2
        i = arg1
        arg1 -= 1
    while (i != 1)

int32_t edx_7 = arg2 << 2
int32_t* eax_6 = ecx[4] + edx_7
int32_t esi_3 = *eax_6
*eax_6 = eax_6[1]
int32_t result = ecx[4]
*(result + edx_7 + 4) = esi_3
return result
