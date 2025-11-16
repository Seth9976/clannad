// 函数: sub_4793a0
// 地址: 0x4793a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg5
int32_t edi = *arg4

if (edi s> eax)
    *arg4 = eax
    *arg5 = edi

if (arg3 s>= 0 && arg3 s< data_7031bc && *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) != 0)
    int32_t eax_4 = *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178)
    
    if (eax_4 s> 0)
        int32_t edx_1 = *arg4
        
        if (edx_1 s>= 0)
            int32_t ecx = *arg5
            
            if (ecx s< eax_4)
                *arg6 = ecx - edx_1 + 1
                return 1

return 0
