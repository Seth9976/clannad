// 函数: sub_4cc269
// 地址: 0x4cc269
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x100)
int32_t edi
int32_t var_118 = edi
int32_t var_28 = 1
int32_t i_1 = *eax & 0xfffff
int32_t var_c = 0
int32_t var_2c = 0
int32_t var_24 = 2
int32_t var_20 = 3
void var_10c
void var_cc
int32_t eax_1 = sub_4c73cc(arg1, eax, 0xacbab8, &var_10c, &var_c, &var_cc, &var_2c, i_1, 1)

if (eax_1 != 0)
    return eax_1

var_c = 0
int32_t var_10_1 = 0
int32_t var_14_1 = 0
int32_t var_8_1 = 0

if (i_1 u> 0)
    int32_t eax_2 = *(arg1 + 0x14)
    int32_t var_bc
    void* ecx_2 = *(eax_2 + (var_bc << 2))
    int32_t var_ac
    void* edi_1 = *(eax_2 + (var_ac << 2))
    int32_t edx_2 = *(arg1 + 0x10)
    int32_t eax_6 = *(*(edx_2 + (*(ecx_2 + 4) << 2)) + 4) & 0x100
    
    while (true)
        if (eax_6 != 0 && (*(*(edx_2 + (*(edi_1 + 4) << 2)) + 5) & 1) != 0
                && *(ecx_2 + 8) == 0xffffffff && *(edi_1 + 8) == 0xffffffff)
            long double x87_r7_1 = fconvert.t(1.0)
            long double x87_r6_1 = fconvert.t(*(ecx_2 + 0x20))
            x87_r6_1 - x87_r7_1
            void* eax_8
            eax_8.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            bool p_2
            
            if (not(p_1))
                long double x87_r7_2 = fconvert.t(0.0)
                long double x87_r6_2 = fconvert.t(*(edi_1 + 0x20))
                x87_r6_2 - x87_r7_2
                eax_8.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                p_2 = unimplemented  {test ah, 0x44}
            
            if (p_1 || p_2)
                long double x87_r7_3 = fconvert.t(1.0)
                long double x87_r6_3 = fconvert.t(*(edi_1 + 0x20))
                x87_r6_3 - x87_r7_3
                eax_8.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    long double x87_r7_4 = fconvert.t(0.0)
                    long double x87_r6_4 = fconvert.t(*(ecx_2 + 0x20))
                    x87_r6_4 - x87_r7_4
                    eax_8.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        var_10_1 = 1
                        goto label_4cc38a
            else
                var_c = 1
            label_4cc38a:
                var_8_1 += 1
                
                if (var_8_1 u< i_1)
                    continue
                else
                    if (var_c == 0)
                        break
                    
                    if (var_10_1 == 0)
                        var_14_1 = (i_1 & 0xfffff) | 0x73500000
                        break
        
        return 1
    
    if (var_10_1 != 0)
        var_14_1 = (i_1 & 0xfffff) | 0x73600000

void* eax_15 = sub_49ec23(0x74)
int32_t* var_8_2

if (eax_15 == 0)
    var_8_2 = nullptr
else
    var_8_2 = sub_49e789(eax_15)

if (var_8_2 == 0)
    return 0x8007000e

int32_t eax_18 = sub_49ec6e(var_8_2, var_14_1, i_1 * 2, i_1, 0)
int32_t esi_5

if (eax_18 s< 0)
    esi_5 = eax_18
else
    eax_18 = sub_49e7bf(var_8_2, *(arg1 + 0x100))
    
    if (eax_18 s< 0)
        esi_5 = eax_18
    else
        int32_t eax_20 = i_1 << 2
        int32_t esi_2
        int32_t edi_3
        edi_3, esi_2 = __builtin_memcpy(var_8_2[4], *(*(arg1 + 0x100) + 0x10), eax_20 u>> 2 << 2)
        __builtin_memcpy(edi_3, esi_2, eax_20 & 3)
        int32_t esi_3
        int32_t edi_5
        edi_5, esi_3 = __builtin_memcpy(var_8_2[2], &var_cc, eax_20 u>> 2 << 2)
        int32_t ecx_14 = __builtin_memcpy(edi_5, esi_3, eax_20 & 3)
        int32_t var_11c_2 = ecx_14
        int32_t var_120_2 = ecx_14
        var_120_2.q = fconvert.d(float.t(0))
        int32_t eax_23 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_120_2)
        
        if (eax_23 != 0xffffffff)
            if (i_1 u> 0)
                int32_t ecx_17 = i_1 << 2
                int32_t i
                
                do
                    *(ecx_17 + var_8_2[2]) = eax_23
                    ecx_17 += 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            esi_5 = sub_49eecd(*(arg1 + 0x100), var_8_2)
        else
            esi_5 = 0x8007000e

sub_46cb59(var_8_2, 1)
return esi_5
