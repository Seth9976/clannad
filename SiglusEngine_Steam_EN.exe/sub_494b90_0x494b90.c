// 函数: sub_494b90
// 地址: 0x494b90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = data_20c2e7c

if (result u<= 0x270f)
    void* ecx = result * 9
    
    if (*((ecx << 2) + &data_1b8c890) != 0 && arg2 s< *((ecx << 2) + &data_1b8c8a8))
        int32_t eax_1
        int32_t edx
        edx:eax_1 = sx.q(arg2)
        result = ((eax_1 + (edx & 7)) s>> 3) + *((ecx << 2) + &data_1b8c894)
        int32_t esi_1 = arg2 & 0x80000007
        
        if (esi_1 s< 0)
            esi_1 = ((esi_1 - 1) | 0xfffffff8) + 1
        
        ecx.b = *((esi_1 << 2) + &data_611440)
        ecx.b = not.b(ecx.b)
        *result &= ecx.b

return result
