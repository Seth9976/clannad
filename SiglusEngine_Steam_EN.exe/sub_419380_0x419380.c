// 函数: sub_419380
// 地址: 0x419380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
int32_t ecx = *arg1

if (ecx s<= 1)
    void* eax = arg1[3]
    int32_t ecx_1 = 0
    
    if (data_12dc4bc != 0)
        ecx_1 = 0x1a
        
        if (esi != 0)
            esi = 1
    
    int32_t eax_1 = sub_4e8000(eax, *(eax + 0x20), ecx_1 + 0x19, esi, &data_704898)
    int32_t eax_2 = neg.d(eax_1)
    return neg.d(sbb.d(eax_2, eax_2, eax_1 != 0))

uint32_t ebx
ebx.b = 0
int32_t var_8 = arg1[2]
int32_t i_1 = 0

if (ecx s> 0)
    int32_t i
    
    do
        ebx = zx.d(ebx.b)
        
        if (sub_419380() == 0)
            ebx = 1
        
        i = i_1 + 1
        var_8 += 0x10
        i_1 = i
    while (i s< *arg1)

int32_t result
result.b = ebx.b == 0
return result
