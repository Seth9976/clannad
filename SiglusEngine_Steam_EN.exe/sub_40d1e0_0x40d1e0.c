// 函数: sub_40d1e0
// 地址: 0x40d1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg5
int32_t ebx = 0

if (i_1 s> 0)
    int32_t* ecx_1 = arg3
    int32_t* eax_1 = arg3
    int32_t i
    
    do
        if (*(arg4 - arg3 + eax_1) != 0)
            ebx += 1
            *ecx_1 = *eax_1
            ecx_1 = &ecx_1[1]
        
        eax_1 = &eax_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (ebx != 0)
        return sub_40d240(arg1, arg2, arg3, ebx)

return 0
