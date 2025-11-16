// 函数: sub_48dc00
// 地址: 0x48dc00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t var_c = arg2
int32_t esi = 0

if (arg10 s> 0)
    int32_t eax = arg7
    int32_t ecx = arg6
    
    do
        if (sub_48d600(eax, arg2, arg3, arg4, arg5, ecx, eax, arg8, arg9, arg2, arg4, arg5, 
                0xffffffff, 0) == 0)
            break
        
        arg2 = var_c
        esi += 1
        ecx = 0xffffffff
        eax = 0
        result = 1
    while (esi s< arg10)

return result
