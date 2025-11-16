// 函数: sub_410270
// 地址: 0x410270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[3]

if (eax != 0)
    void* edx_2 = arg1[2] - eax
    arg1[2] = edx_2
    
    if (edx_2 s> 0)
        int32_t* ecx_1 = *arg1
        _memcpy(ecx_1, eax + ecx_1, edx_2)
    
    arg1[3] = 0

int32_t eax_2 = arg1[2]

if (arg2 s> arg1[1] - eax_2)
    int32_t eax_3 = *arg1
    
    if (eax_3 != 0)
        int32_t eax_4 = _realloc(eax_3, eax_2 + arg2 + 0x1000)
        int32_t ecx_3 = arg1[2]
        arg1[1] = eax_2 + arg2 + 0x1000
        *arg1 = eax_4
        return eax_4 + ecx_3
    
    int32_t eax_6 = _malloc(eax_2 + arg2 + 0x1000)
    arg1[1] = eax_2 + arg2 + 0x1000
    *arg1 = eax_6

return *arg1 + arg1[2]
