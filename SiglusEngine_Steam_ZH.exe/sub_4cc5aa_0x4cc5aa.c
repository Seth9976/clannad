// 函数: sub_4cc5aa
// 地址: 0x4cc5aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10c = edi
int32_t* eax = *(arg1 + 0x100)
int32_t esi = *eax
int32_t var_8 = 0
int32_t var_20 = 0
int32_t var_10 = 0
int32_t esi_1 = esi & 0xfffff
int32_t var_1c = 1
int32_t var_18 = 2
int32_t var_14 = 3
void var_100
void var_60
int32_t result = sub_4c73cc(arg1, eax, 0xacbc98, &var_60, &var_8, &var_100, &var_20, esi_1, 1)

if (result == 1)
    var_10 = 1
    result =
        sub_4c73cc(arg1, *(arg1 + 0x100), 0xacbcf8, &var_60, &var_8, &var_100, &var_20, esi_1, 1)

if (result != 0)
    return result

int32_t var_c
int32_t var_c_1 = var_c & result
int32_t var_f0[0x4]

if (esi_1 u> 0)
    var_8 = esi_1 << 2
    
    do
        int32_t var_e0[0x20]
        
        if (var_f0[var_c_1] != var_e0[var_c_1])
            return 1
        
        void* ecx_5 = *(*(arg1 + 0x14) + (*(var_8 + *(*(arg1 + 0x100) + 8)) << 2))
        
        if ((*(*(*(arg1 + 0x10) + (*(ecx_5 + 4) << 2)) + 5) & 1) == 0)
            return 1
        
        long double x87_r7_1 = fconvert.t(0.0)
        long double x87_r6_1 = fconvert.t(*(ecx_5 + 0x20))
        x87_r6_1 - x87_r7_1
        void* eax_9
        eax_9.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1 || *(ecx_5 + 8) != 0xffffffff)
            return 1
        
        var_c_1 += 1
        var_8 += 4
    while (var_c_1 u< esi_1)

int32_t eax_10 = 0
int32_t ecx_7 = esi_1 & 0xfffff
int32_t ecx_8

if (var_10 == 0)
    ecx_8 = ecx_7 | 0x73800000
else
    ecx_8 = ecx_7 | 0x73700000

**(arg1 + 0x100) = ecx_8

if (esi_1 u> 0)
    do
        *(*(*(arg1 + 0x100) + 8) + (eax_10 << 2)) = var_f0[eax_10]
        eax_10 += 1
    while (eax_10 u< esi_1)

return 0
