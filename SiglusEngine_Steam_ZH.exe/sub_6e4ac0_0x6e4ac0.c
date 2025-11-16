// 函数: sub_6e4ac0
// 地址: 0x6e4ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[1] s< 0)
    return 0

void* eax_1 = arg1[3]

if (eax_1 != 0)
    arg1[2] -= eax_1
    void* edx_1 = arg1[2]
    
    if (edx_1 s> 0)
        int32_t* ecx_1 = *arg1
        _memcpy(ecx_1, eax_1 + ecx_1, edx_1)
    
    arg1[3] = 0

int32_t ecx_2 = arg1[2]

if (arg2 s> arg1[1] - ecx_2)
    int32_t eax_5 = *arg1
    uint32_t edi_2 = arg2 + 0x1000 + ecx_2
    int32_t eax_6
    
    if (eax_5 == 0)
        eax_6 = _malloc(edi_2)
    else
        eax_6 = _realloc(eax_5, edi_2)
    
    if (eax_6 == 0)
        sub_6e4a80(arg1)
        return 0
    
    *arg1 = eax_6
    arg1[1] = edi_2

return arg1[2] + *arg1
