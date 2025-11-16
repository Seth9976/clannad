// 函数: sub_4cded1
// 地址: 0x4cded1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *(arg1 + 0x100)
int32_t edi
int32_t var_10c = edi
bool cond:0 = (*ecx & 0xfffff) == 1
int32_t i = 0
int32_t var_20 = 0
int32_t var_1c = 1
int32_t var_18 = 2
int32_t var_14 = 3

if (not(cond:0))
    return 1

void var_100
void var_60
int32_t result = sub_4c73cc(arg1, ecx, 0xacbf98, &var_60, &i, &var_100, &var_20, 1, 1)

if (result == 1)
    result = sub_4c73cc(arg1, *(arg1 + 0x100), 0xacbff8, &var_60, &i, &var_100, &var_20, 1, 1)
    
    if (result == 1)
        result = sub_4c73cc(arg1, *(arg1 + 0x100), 0xacc058, &var_60, &i, &var_100, &var_20, 1, 1)
        
        if (result == 1)
            result =
                sub_4c73cc(arg1, *(arg1 + 0x100), 0xacc0b8, &var_60, &i, &var_100, &var_20, 1, 1)

if (result != 0)
    return result

void* ecx_5 = *(*(arg1 + 0x100) + 8)
int32_t edx_1 = *(arg1 + 0x14)
i = 0
int32_t ebx_1 = *(arg1 + 0x10)
int32_t* ecx_6 = ecx_5 + 4

do
    void* edi_1 = *(edx_1 + (*ecx_6 << 2))
    bool p_1
    
    if ((*(*(ebx_1 + (*(edi_1 + 4) << 2)) + 5) & 1) != 0)
        long double x87_r7_1 = fconvert.t(0.0)
        long double x87_r6_1 = fconvert.t(*(edi_1 + 0x20))
        x87_r6_1 - x87_r7_1
        void* eax_5
        eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        p_1 = unimplemented  {test ah, 0x44}
    
    if ((*(*(ebx_1 + (*(edi_1 + 4) << 2)) + 5) & 1) == 0 || p_1 || *(edi_1 + 8) != 0xffffffff)
        return 1
    
    i += 1
    ecx_6 = &ecx_6[1]
while (i u< 1)

int32_t var_e0
void* edx_2 = *(edx_1 + (var_e0 << 2))
i = 0

if (*(edx_2 + 8) == 0xffffffff && (*(*(ebx_1 + (*(edx_2 + 4) << 2)) + 5) & 1) != 0)
    i = 1

for (int32_t* i_1 = nullptr; i_1 u< 4; i_1 = &i_1[1])
    void var_f0
    *(i_1 + *(*(arg1 + 0x100) + 8)) = *(&var_f0 + i_1)
    int32_t ecx_11 = *(arg1 + 0x14)
    int32_t* edi_2 = *(ecx_11 + (*(&var_e0 + i_1) << 2))
    int32_t var_110_1 = ecx_11
    int32_t var_114_1 = ecx_11
    var_114_1.q = fconvert.d(fconvert.t(*(edi_2 + 0x20)))
    int32_t eax_9 = sub_49f544(arg1, edi_2[1], edi_2[3], edi_2[4], var_114_1)
    
    if (eax_9 == 0xffffffff)
        return 0x8007000e
    
    int32_t* eax_10 = *(*(arg1 + 0x14) + (eax_9 << 2))
    sub_49f070(eax_10, edi_2)
    
    if (i != 0)
        *(eax_10 + 0x20) = fconvert.d(fconvert.t(*(eax_10 + 0x20)) * fconvert.t(-1.0))
    else
        if (eax_10[0xe] == 0xffffffff)
            eax_10[0xe] = *(&var_e0 + i_1)
        
        eax_10[0xf] ^= 0x80000
    
    *(*(*(arg1 + 0x100) + 8) + i_1 + 4) = eax_9

return 0
