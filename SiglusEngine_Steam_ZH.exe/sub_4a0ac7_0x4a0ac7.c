// 函数: sub_4a0ac7
// 地址: 0x4a0ac7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg3
int32_t edi
int32_t var_8 = edi

if (arg2 == i)
    return 1

void* eax_2 = *(*(arg1 + 0x14) + (i << 2))

if ((*(*(*(arg1 + 0x10) + (*(eax_2 + 4) << 2)) + 4) & 2) == 0)
    return 0

int32_t* esi_2 = *(*(arg1 + 0x18) + (*(eax_2 + 0x48) << 2))

if ((*esi_2 & 0xfff00000) != 0x10000000)
    goto label_4a0b4f

int32_t ebx_1 = esi_2[3]
int32_t eax_6 = 0

if (ebx_1 u> 0)
    int32_t* ecx_3 = esi_2[4]
    
    while (*ecx_3 != i)
        eax_6 += 1
        ecx_3 = &ecx_3[1]
        
        if (eax_6 u>= ebx_1)
            break

if (sub_4a0ac7(arg2, *(esi_2[2] + (eax_6 << 2))) == 0)
    i = arg3
label_4a0b4f:
    
    if ((*esi_2 & 0xfff00000) != 0x20500000)
        return 0
    
    int32_t ecx_6 = esi_2[3]
    int32_t ebx_2 = 0
    
    if (ecx_6 u> 0)
        int32_t* eax_10 = esi_2[4]
        
        while (*eax_10 != i)
            ebx_2 += 1
            eax_10 = &eax_10[1]
            
            if (ebx_2 u>= ecx_6)
                break
    
    if (sub_4a0ac7(arg2, *(esi_2[2] + (ebx_2 << 2))) == 0
            && sub_4a0ac7(arg2, *(esi_2[2] + ((esi_2[3] + ebx_2) << 2))) == 0)
        return 0

return 1
