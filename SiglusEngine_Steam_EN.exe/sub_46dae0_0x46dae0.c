// 函数: sub_46dae0
// 地址: 0x46dae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0)
    return 

int32_t ebx_1 = data_7031bc

if (arg2 s>= ebx_1)
    return 

int32_t i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

int32_t esi_1 = (arg4 + (arg3 << 1)) * 0x650
int32_t i

do
    if (arg3 s>= 0 && arg3 s< ebx_1)
        int32_t eax_3 = arg6
        
        if (eax_3 s<= 0)
            eax_3 = 1
        
        *(arg5 * 0x1c + &data_72d998 + esi_1 + 0x16) = eax_3.w
        
        if (arg7 != 0xffffffff)
            *(arg5 * 0x1c + &data_72d998 + esi_1 + 0x18) = arg7.b
    
    arg3 += 1
    esi_1 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
