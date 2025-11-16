// 函数: sub_40c680
// 地址: 0x40c680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = nullptr
void* var_8 = nullptr
int32_t eax
int32_t ecx
int32_t edx
int32_t* result = sub_5f1ac0(eax, edx, ecx, 1, 0x714)
void* ecx_1 = *(arg1 + 0x1c)
*result = sub_410bd0(arg2, 0x18)
result[1] = sub_410bd0(arg2, 0x18)
result[2] = sub_410bd0(arg2, 0x18) + 1
result[3] = sub_410bd0(arg2, 6) + 1
result[4] = sub_410bd0(arg2, 8)
int32_t i = 0

if (result[3] s> 0)
    arg1 = &result[5]
    
    do
        uint32_t ebx_1 = sub_410bd0(arg2, 3)
        
        if (sub_410bd0(arg2, 1) != 0)
            ebx_1 |= sub_410bd0(arg2, 5) << 3
        
        *arg1 = ebx_1
        ebx = var_8 + sub_40c660(ebx_1)
        i += 1
        var_8 = ebx
        arg1 += 4
    while (i s< result[3])

if (ebx s> 0)
    void* ebp = &result[0x45]
    arg1 = ebx
    bool cond:1_1
    
    do
        *ebp = sub_410bd0(arg2, 8)
        ebp += 4
        cond:1_1 = arg1 != 1
        arg1 -= 1
    while (cond:1_1)

int32_t i_1 = *(ecx_1 + 0x18)

if (result[4] s< i_1)
    int32_t eax_21 = 0
    
    if (ebx s<= 0)
        return result
    
    void* ecx_5 = &result[0x45]
    
    while (*ecx_5 s< i_1)
        eax_21 += 1
        ecx_5 += 4
        
        if (eax_21 s>= ebx)
            return result

sub_40c4c0(result)
return 0
