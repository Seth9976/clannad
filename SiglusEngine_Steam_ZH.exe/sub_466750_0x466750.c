// 函数: sub_466750
// 地址: 0x466750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = *arg1
int32_t* ecx = *(eax_1 + 0x14)
int32_t edi
int32_t var_c = edi
char* edx_2

if (ecx s<= 0 || ecx s> *(eax_1 + 0x74))
    int32_t esi_1 = *(eax_1 + 0x78)
    
    if (esi_1 == 0)
        *(eax_1 + 0x18) = ecx
        edx_2 = **(eax_1 + 0x70)
    else
        int32_t edx_3 = *(eax_1 + 0x7c)
        
        if (ecx s>= edx_3 && ecx s<= *(eax_1 + 0x80))
            edx_2 = *(esi_1 + ((ecx - edx_3) << 2))
            goto label_46678d
        
        *(eax_1 + 0x18) = ecx
        edx_2 = **(eax_1 + 0x70)
else
    edx_2 = *(*(eax_1 + 0x70) + (ecx << 2))
label_46678d:
    
    if (edx_2 == 0)
        *(eax_1 + 0x18) = ecx
        edx_2 = **(eax_1 + 0x70)

ecx.b = *edx_2
char* esi_2 = edx_2

while (ecx.b != 0)
    esi_2 = &esi_2[1]
    
    if (ecx.b == 0x25)
        if (*esi_2 != 0x73)
            break
        
        void* var_10_1 = eax_1 + 0x18
        return sub_749803(arg2, edx_2)
    
    ecx.b = *esi_2

int32_t var_10 = *(eax_1 + 0x34)
int32_t var_14 = *(eax_1 + 0x30)
int32_t var_18 = *(eax_1 + 0x2c)
int32_t var_1c = *(eax_1 + 0x28)
int32_t var_20 = *(eax_1 + 0x24)
int32_t var_24 = *(eax_1 + 0x20)
int32_t var_28 = *(eax_1 + 0x1c)
int32_t var_2c = *(eax_1 + 0x18)
return sub_749803(arg2, edx_2)
