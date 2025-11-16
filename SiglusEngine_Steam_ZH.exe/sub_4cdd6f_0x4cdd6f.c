// 函数: sub_4cdd6f
// 地址: 0x4cdd6f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_108 = edi
int32_t* eax = *(arg1 + 0x100)
int32_t edi_1 = *eax
int32_t var_8 = 0
int32_t var_1c = 0
int32_t var_c = 0
int32_t edi_2 = edi_1 & 0xfffff
int32_t var_18 = 1
int32_t var_14 = 2
int32_t var_10 = 3
void var_fc
int32_t var_bc[0x4]
int32_t result = sub_4c73cc(arg1, eax, 0xacc1d8, &var_fc, &var_8, &var_bc, &var_1c, edi_2, 1)

if (result == 1)
    var_c = 1
    result =
        sub_4c73cc(arg1, *(arg1 + 0x100), 0xacc258, &var_fc, &var_8, &var_bc, &var_1c, edi_2, 1)

if (result != 0)
    return result

var_8 &= result

if (edi_2 u> 0)
    do
        int32_t edx_1 = var_bc[var_8]
        int32_t var_ac[0x4]
        int32_t ecx_2 = var_ac[var_8]
        int32_t var_9c[0x4]
        int32_t var_8c[0x1c]
        
        if (edx_1 != ecx_2 || ecx_2 != var_9c[var_8] || edx_1 != var_8c[var_8])
            return 1
        
        var_8 += 1
    while (var_8 u< edi_2)

int32_t ecx_4 = edi_2 & 0xfffff
int32_t ecx_5

if (var_c == 0)
    ecx_5 = ecx_4 | 0x74500000
else
    ecx_5 = ecx_4 | 0x74400000

int32_t var_10c_1 = ecx_5
int32_t var_110_2 = ecx_5
var_110_2.q = fconvert.d(float.t(0))
**(arg1 + 0x100) = ecx_5
int32_t eax_3 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_110_2)

if (eax_3 == 0xffffffff)
    return 0x8007000e

int32_t ecx_7 = 0

if (edi_2 u> 0)
    var_8 = edi_2 << 2
    
    do
        int32_t eax_7 = *(*(arg1 + 0x100) + 8)
        int32_t edx_3 = var_bc[ecx_7]
        int32_t ebx_1 = var_8
        var_8 += 4
        *(eax_7 + (ecx_7 << 2)) = edx_3
        ecx_7 += 1
        *(ebx_1 + *(*(arg1 + 0x100) + 8)) = eax_3
    while (ecx_7 u< edi_2)

return 0
