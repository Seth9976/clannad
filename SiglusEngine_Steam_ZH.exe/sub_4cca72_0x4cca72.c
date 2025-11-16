// 函数: sub_4cca72
// 地址: 0x4cca72
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_120 = edi
int32_t var_c = 0
int32_t var_20 = 0
int32_t* eax = *(arg1 + 0x100)
int32_t esi_1 = *eax & 0xfffff
int32_t var_1c = 1
int32_t var_18 = 2
int32_t var_14 = 3
int32_t var_12c_1
int32_t var_128_1
void var_114
int32_t var_d4[0x4]
int32_t var_c4[0x4]
int32_t* var_8_1
int32_t eax_7
int32_t eax_17
int32_t (* esi_8)[0x4]
int32_t* edi_1

if (sub_4c73cc(arg1, eax, 0xacc338, &var_114, &var_c, &var_d4, &var_20, esi_1, 1) == 0)
    void* eax_2 = sub_49ec23(0x74)
    
    if (eax_2 == 0)
        var_8_1 = nullptr
        edi_1 = nullptr
    else
        edi_1 = sub_49e789(eax_2)
        var_8_1 = edi_1
    
    if (edi_1 != 0)
        int32_t var_124_1 = 0
        var_128_1 = esi_1
        var_12c_1 = esi_1 * 2
        eax_7 = (esi_1 & 0xfffff) | 0x74600000
    label_4ccb85:
        int32_t eax_14 = sub_49ec6e(edi_1, eax_7, var_12c_1, var_128_1, 0)
        var_c = eax_14
        
        if (eax_14 s< 0)
            sub_46cb59(edi_1, 1)
        else
            int32_t eax_15 = sub_49e7bf(edi_1, *(arg1 + 0x100))
            var_c = eax_15
            
            if (eax_15 s>= 0)
                eax_17 = esi_1 << 2
                int32_t esi_3
                int32_t edi_3
                edi_3, esi_3 =
                    __builtin_memcpy(edi_1[4], *(*(arg1 + 0x100) + 0x10), eax_17 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_3, eax_17 & 3)
                int32_t esi_4
                int32_t edi_5
                edi_5, esi_4 = __builtin_memcpy(var_8_1[2], &var_d4, eax_17 u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_4, eax_17 & 3)
                esi_8 = &var_c4
                goto label_4ccef7
            
            sub_46cb59(edi_1, 1)
    
    return 

if (sub_4c73cc(arg1, *(arg1 + 0x100), 0xacc2d8, &var_114, &var_c, &var_d4, &var_20, esi_1, 1) == 0)
    void* eax_9 = sub_49ec23(0x74)
    
    if (eax_9 == 0)
        var_8_1 = nullptr
        edi_1 = nullptr
    else
        edi_1 = sub_49e789(eax_9)
        var_8_1 = edi_1
    
    if (edi_1 != 0)
        int32_t var_124_2 = 0
        var_128_1 = esi_1
        var_12c_1 = esi_1 * 2
        eax_7 = (esi_1 & 0xfffff) | 0x74700000
        goto label_4ccb85
    
    return 

if (sub_4c73cc(arg1, *(arg1 + 0x100), 0xacc398, &var_114, &var_c, &var_d4, &var_20, esi_1, 1) != 0)
    return 

int32_t edx_5 = *(arg1 + 0x14)
int32_t var_b4[0x4]
void* eax_20 = *(edx_5 + (var_b4[0] << 2))
int32_t edi_6 = *(eax_20 + 0x3c)
var_c = edi_6
int32_t var_a4[0x1c]
int32_t var_34[0x4]

if (edi_6 == 0x80000)
    int32_t eax_21 = 0
    
    if (esi_1 u> 0)
        __builtin_memcpy(&var_20, &var_a4, esi_1 << 2)
        
        do
            var_34[eax_21] = *(*(edx_5 + (var_b4[eax_21] << 2)) + 0x38)
            eax_21 += 1
        while (eax_21 u< esi_1)
    
    goto label_4ccd60

void* edi_8 = *(edx_5 + (var_a4[0] << 2))
int32_t edi_9 = *(edi_8 + 0x3c)

if (edi_9 == 0x80000)
    int32_t eax_22 = 0
    
    if (esi_1 u> 0)
        __builtin_memcpy(&var_20, &var_b4, esi_1 << 2)
        
        do
            var_34[eax_22] = *(*(edx_5 + (var_a4[eax_22] << 2)) + 0x38)
            eax_22 += 1
        while (eax_22 u< esi_1)
    
    goto label_4ccd60

if (esi_1 != 1)
    return 

int32_t eax_23 = *(eax_20 + 0x48)
int32_t* eax_24
int32_t eax_25

if (eax_23 != 0xffffffff)
    eax_24 = *(*(arg1 + 0x18) + (eax_23 << 2))
    eax_25 = *eax_24

int32_t eax_30

if (eax_23 == 0xffffffff || (eax_25 & 0xfff00000) != 0x10100000 || (eax_25 & 0xfffff) != esi_1
        || var_c != 0)
    int32_t eax_32 = *(edi_8 + 0x48)
    
    if (eax_32 != 0xffffffff)
        int32_t* eax_33 = *(*(arg1 + 0x18) + (eax_32 << 2))
        int32_t eax_34 = *eax_33
        
        if ((eax_34 & 0xfff00000) == 0x10100000 && (eax_34 & 0xfffff) == 1 && edi_9 == 0)
            var_34[0] = *eax_33[2]
            eax_30 = var_b4[0]
            goto label_4ccd5d
    
    return 

var_34[0] = *eax_24[2]
eax_30 = var_a4[0]
label_4ccd5d:
var_20 = eax_30
label_4ccd60:
int32_t var_8_3 = 0
int32_t var_10_3 = 1
var_c = 1

if (esi_1 u> 0)
    long double x87_r7_1 = fconvert.t(1.0)
    long double x87_r6_1 = fconvert.t(0.0)
    
    do
        int32_t ecx_23 = *(arg1 + 0x14)
        void* edx_12 = *(ecx_23 + (var_d4[var_8_3] << 2))
        
        if ((*(*(*(arg1 + 0x10) + (*(edx_12 + 4) << 2)) + 4) & 0x100) == 0)
            var_c = 0
            var_10_3 = 0
        
        long double x87_r4_1 = fconvert.t(*(edx_12 + 0x20))
        x87_r4_1 - x87_r7_1
        void* eax_42
        eax_42.w = (x87_r4_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            var_c = 0
        
        long double x87_r4_2 = fconvert.t(*(edx_12 + 0x20))
        x87_r4_2 - x87_r6_1
        eax_42.w = (x87_r4_2 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_2, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r4_2 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            var_10_3 = 0
        
        void* ecx_24 = *(ecx_23 + (var_c4[var_8_3] << 2))
        
        if ((*(*(*(arg1 + 0x10) + (*(ecx_24 + 4) << 2)) + 4) & 0x100) == 0)
            var_c = 0
            var_10_3 = 0
        
        long double x87_r4_3 = fconvert.t(*(ecx_24 + 0x20))
        x87_r4_3 - x87_r6_1
        void* eax_46
        eax_46.w = (x87_r4_3 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_3, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r4_3 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            var_c = 0
        
        long double x87_r4_4 = fconvert.t(*(ecx_24 + 0x20))
        x87_r4_4 - x87_r7_1
        eax_46.w = (x87_r4_4 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_4, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r4_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            var_10_3 = 0
        
        var_8_3 += 1
    while (var_8_3 u< esi_1)

if (esi_1 u> 0 && var_c == 0 && var_10_3 == 0)
    return 

void* eax_47 = sub_49ec23(0x74)

if (eax_47 == 0)
    var_8_1 = nullptr
    edi_1 = nullptr
else
    edi_1 = sub_49e789(eax_47)
    var_8_1 = edi_1

if (edi_1 == 0)
    return 

int32_t eax_51 = esi_1 & 0xfffff
int32_t eax_52

if (var_c == 0)
    eax_52 = eax_51 | 0x74700000
else
    eax_52 = eax_51 | 0x74600000

int32_t eax_53 = sub_49ec6e(edi_1, eax_52, esi_1 * 2, esi_1, 0)
var_c = eax_53

if (eax_53 s< 0)
    sub_46cb59(edi_1, 1)
    return 

int32_t eax_54 = sub_49e7bf(edi_1, *(arg1 + 0x100))
var_c = eax_54

if (eax_54 s< 0)
    sub_46cb59(edi_1, 1)
    return 

eax_17 = esi_1 << 2
int32_t esi_6
int32_t edi_12
edi_12, esi_6 = __builtin_memcpy(edi_1[4], *(*(arg1 + 0x100) + 0x10), eax_17 u>> 2 << 2)
__builtin_memcpy(edi_12, esi_6, eax_17 & 3)
int32_t esi_7
int32_t edi_14
edi_14, esi_7 = __builtin_memcpy(var_8_1[2], &var_20, eax_17 u>> 2 << 2)
__builtin_memcpy(edi_14, esi_7, eax_17 & 3)
esi_8 = &var_34
label_4ccef7:
int32_t esi_9
int32_t edi_17
edi_17, esi_9 = __builtin_memcpy(var_8_1[2] + eax_17, esi_8, eax_17 u>> 2 << 2)
__builtin_memcpy(edi_17, esi_9, eax_17 & 3)
sub_49eecd(*(arg1 + 0x100), var_8_1)
sub_46cb59(var_8_1, 1)
