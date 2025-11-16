// 函数: sub_475310
// 地址: 0x475310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
int32_t esi = data_7031bc * 2

if (esi s> 0)
    void* eax = &data_72d6bc
    
    do
        int32_t edx_1 = *eax
        
        if (edx_1 == 8 && *(eax - 8) == 0)
            return 1
        
        if (edx_1 == 9)
            return 2
        
        ecx += 1
        eax += 0x650
    while (ecx s< esi)

return 0
