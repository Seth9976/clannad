// 函数: sub_4df370
// 地址: 0x4df370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int16_t eax = (1 << (*(ebx + 0x1a0)).b).w
void* esi = *(ebx + 0x1c0)

if (*(ebx + 0x118) != 0 && *(esi + 0x28) == 0)
    int32_t result = sub_4deea0()
    
    if (result == 0)
        return result

int32_t* eax_3 = *(ebx + 0x18)
void* var_10 = ebx
int32_t var_20 = *eax_3
int32_t edx = eax_3[1]
int32_t ecx_2 = *(esi + 0x10)
void* i = nullptr
int32_t edi
int32_t var_2c = edi
int32_t edi_1 = *(esi + 0xc)
arg1 = nullptr

if (*(ebx + 0x168) s> 0)
    do
        int16_t* eax_4 = *(arg2 + (i << 2))
        
        if (ecx_2 s< 1)
            if (sub_4de6a0(&var_20, edi_1, ecx_2, 1) == 0)
                return 0
            
            int32_t var_18
            edi_1 = var_18
            int32_t var_14
            ecx_2 = var_14
        
        ecx_2 -= 1
        
        if (((edi_1 s>> ecx_2.b).w.b & 1) != 0)
            *eax_4 |= eax
        
        i = arg1 + 1
        arg1 = i
    while (i s< *(ebx + 0x168))

int32_t* ebx_1 = *(ebx + 0x18)
*ebx_1 = var_20
ebx_1[1] = edx
int32_t eax_8 = *(esi + 0x28)
*(esi + 0xc) = edi_1
*(esi + 0x28) = eax_8 - 1
*(esi + 0x10) = ecx_2
return 1
