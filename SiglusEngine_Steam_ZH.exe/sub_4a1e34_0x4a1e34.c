// 函数: sub_4a1e34
// 地址: 0x4a1e34
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_49f69d(arg1, arg2)

if (eax == 0xffffffff)
    return 0x8007000e

int32_t edi
int32_t var_1c_1 = edi
void* edi_1 = *(*(arg1 + 0x18) + (eax << 2))
sub_49e7bf(edi_1, arg2)
int32_t esi_1 = arg2[3]
int32_t var_8_1 = 0

if (esi_1 u> 0)
    int32_t* eax_2 = arg2[4]
    int32_t ecx_2 = *eax_2
    int32_t* var_c_1 = eax_2
    
    do
        if (sub_4a143a(arg1, ecx_2, *var_c_1) == 0)
            break
        
        var_8_1 += 1
        var_c_1 = &var_c_1[1]
    while (var_8_1 u< esi_1)

int32_t result

if (var_8_1 == esi_1)
    result = 0
else
    int32_t eax_5 = sub_49f5a4(arg1, (esi_1 & 0xfffff) | 0x10000000, 0xffffffff, 0xffffffff)
    
    if (eax_5 != 0xffffffff)
        int32_t* esi_4 = *(*(arg1 + 0x18) + (eax_5 << 2))
        sub_49e7bf(esi_4, arg2)
        int32_t i = 0
        
        if (*(edi_1 + 0xc) u> 0)
            do
                int32_t ecx_8 = esi_4[4]
                int32_t var_20_4 = ecx_8
                int32_t var_24_2 = ecx_8
                var_24_2.q = fconvert.d(float.t(0))
                int32_t esi_6 = i << 2
                *(esi_6 + ecx_8) = *(esi_6 + *(edi_1 + 0x10))
                *(esi_6 + esi_4[2]) =
                    sub_49f544(arg1, *(arg1 + 0x88), 0xffffffff, 0xffffffff, var_24_2)
                *(esi_6 + *(edi_1 + 0x10)) = *(esi_6 + esi_4[2])
                
                if (*(esi_6 + *(edi_1 + 0x10)) == 0xffffffff)
                    goto label_4a1ec5
                
                int32_t eax_12 = *(arg1 + 0x14)
                sub_49f12c(*(eax_12 + (*(esi_6 + *(edi_1 + 0x10)) << 2)), 
                    *(eax_12 + (*(esi_6 + arg2[4]) << 2)))
                int32_t eax_13 = *(arg1 + 0x14)
                *(*(eax_13 + (*(esi_6 + *(edi_1 + 0x10)) << 2)) + 0x14) =
                    *(*(eax_13 + (*(esi_6 + arg2[4]) << 2)) + 0x14)
                int32_t eax_15 = *(arg1 + 0x14)
                i += 1
                *(*(eax_15 + (*(esi_6 + *(edi_1 + 0x10)) << 2)) + 0x18) =
                    *(*(eax_15 + (*(esi_6 + arg2[4]) << 2)) + 0x18)
                int32_t eax_17 = *(arg1 + 0x14)
                **(eax_17 + (*(esi_6 + *(edi_1 + 0x10)) << 2)) =
                    **(eax_17 + (*(esi_6 + arg2[4]) << 2))
            while (i u< *(edi_1 + 0xc))
        
        result = sub_4a1581(arg1, esi_4)
        
        if (result s>= 0)
            *esi_4 = 0
            result = 0
    else
    label_4a1ec5:
        result = 0x8007000e

return result
