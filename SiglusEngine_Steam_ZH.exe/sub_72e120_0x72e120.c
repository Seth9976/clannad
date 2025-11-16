// 函数: sub_72e120
// 地址: 0x72e120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1b0)
int32_t eax = 1 << (*(arg1 + 0x184)).b

if (*(arg1 + 0xfc) != 0 && *(esi + 0x28) == 0)
    char eax_1 = sub_72dc30(arg1)
    
    if (eax_1 == 0)
        return eax_1

int32_t* eax_2 = *(arg1 + 0x18)
int32_t edx = *(esi + 8)
int32_t ecx_2 = *(esi + 0xc)
int32_t i = 0
int32_t ebx = *eax_2
int32_t eax_3 = eax_2[1]
int32_t var_10 = arg1
int32_t var_20 = ebx
int32_t esi_1

if (*(arg1 + 0x14c) s<= 0)
    esi_1 = eax_3
else
    do
        int16_t* ebx_1 = *(arg2 + (i << 2))
        
        if (ecx_2 s< 1)
            if (sub_72da40(arg2, edx, &var_20, ecx_2, 1) == 0)
                return 0
            
            int32_t var_18
            edx = var_18
            int32_t var_14
            ecx_2 = var_14
        
        ecx_2 -= 1
        
        if (((edx s>> ecx_2.b).b & 1) != 0)
            *ebx_1 |= eax.w
        
        i += 1
    while (i s< *(arg1 + 0x14c))
    
    esi_1 = eax_3
    ebx = var_20

**(arg1 + 0x18) = ebx
*(*(arg1 + 0x18) + 4) = esi_1
*(esi + 0x28) -= 1
*(esi + 8) = edx
*(esi + 0xc) = ecx_2
void* eax_11
eax_11.b = 1
return eax_11
