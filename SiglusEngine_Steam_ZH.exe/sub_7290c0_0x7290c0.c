// 函数: sub_7290c0
// 地址: 0x7290c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *arg1
int32_t ecx = *(edx + 0x14)
char* esi

if (ecx s<= 0 || ecx s> *(edx + 0x74))
    int32_t esi_1 = *(edx + 0x78)
    
    if (esi_1 != 0 && ecx s>= *(edx + 0x7c) && ecx s<= *(edx + 0x80))
        esi = *(esi_1 + ((ecx - *(edx + 0x7c)) << 2))
        goto label_7290f9
    
    *(edx + 0x18) = ecx
    esi = **(edx + 0x70)
else
    esi = *(*(edx + 0x70) + (ecx << 2))
label_7290f9:
    
    if (esi == 0)
        *(edx + 0x18) = ecx
        esi = **(edx + 0x70)

ecx.b = *esi
char* eax_5 = esi

if (ecx.b != 0)
    char i = ecx.b
    
    do
        eax_5 = &eax_5[1]
        
        if (i == 0x25)
            if (*eax_5 != 0x73)
                break
            
            void* var_c_1 = edx + 0x18
            return sub_749803(arg2, esi)
        
        i = *eax_5
    while (i != 0)

int32_t var_c = *(edx + 0x34)
int32_t var_10 = *(edx + 0x30)
int32_t var_14 = *(edx + 0x2c)
int32_t var_18 = *(edx + 0x28)
int32_t var_1c = *(edx + 0x24)
int32_t var_20 = *(edx + 0x20)
int32_t var_24 = *(edx + 0x1c)
int32_t var_28 = *(edx + 0x18)
return sub_749803(arg2, esi)
