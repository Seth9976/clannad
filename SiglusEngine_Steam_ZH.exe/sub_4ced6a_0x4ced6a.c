// 函数: sub_4ced6a
// 地址: 0x4ced6a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x100)
int32_t edx_1 = *eax & 0xfffff
int32_t edi
int32_t var_2c = edi
void* var_1c = arg1
int32_t var_8 = 0

if (edx_1 u> 0)
    int32_t* esi_1 = eax[2]
    int32_t edi_1 = *(arg1 + 0x14)
    int32_t* var_10_1 = &esi_1[edx_1]
    int32_t* var_c_1 = &esi_1[edx_1 * 2]
    
    do
        int32_t eax_5 = esi_1[var_8]
        void* ebx_1 = *(edi_1 + (eax_5 << 2))
        void* ebx_4 = *(edi_1 + (*var_c_1 << 2))
        int32_t eax_7
        
        if (eax_5 == *var_10_1)
            eax_7 = *(ebx_4 + 0x38)
        
        if (eax_5 != *var_10_1 || (eax_7 != *((var_8 << 2) + *(*(arg1 + 0x100) + 8))
                && (eax_7 == 0xffffffff || eax_7 != *(ebx_1 + 0x38)))
                || (*(ebx_4 + 0x3c) ^ 0x80000) != *(ebx_1 + 0x3c))
            return 1
        
        var_8 += 1
        var_c_1 = &var_c_1[1]
        var_10_1 = &var_10_1[1]
        arg1 = var_1c
    while (var_8 u< edx_1)

**(arg1 + 0x100) = (edx_1 & 0xfffff) | 0x70000000
*(*(arg1 + 0x100) + 4) = edx_1
return 0
