// 函数: sub_46dca0
// 地址: 0x46dca0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2

if (arg3 s> esi)
    arg1 = arg3
    arg3 = esi
    esi = arg1

if (arg3 s< 0)
    return 

int32_t ebx_1 = data_7031bc

if (esi s>= ebx_1)
    return 

int32_t i_1 = esi - arg3 + 1

if (i_1 s<= 0)
    return 

int32_t edi_1 = (arg4 + (arg3 << 1)) * 0x650
int32_t ecx = arg3
int32_t i

do
    if (ecx s>= 0 && ecx s< ebx_1)
        int32_t eax_3 = arg6
        
        if (eax_3 s<= 0)
            eax_3 = 1
        
        *(arg5 * 0x24 + &data_72da24 + edi_1 + 0x18) = eax_3.w
        arg1 = arg7
        
        if (arg1 s< 0)
            arg1 = 0
        
        *(arg5 * 0x24 + &data_72da24 + edi_1 + 0x1c) = arg1
    
    ecx += 1
    edi_1 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
