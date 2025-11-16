// 函数: sub_46c900
// 地址: 0x46c900
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0)
    return 

int32_t ebx_1 = data_7031bc

if (arg2 s>= ebx_1)
    return 

void* i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

int32_t edi
int32_t var_10_1 = edi
int32_t eax_1 = arg4 + (arg3 << 1)
void* esi_2 = eax_1 * 0x7a0 + &data_98c1f8
arg1 = eax_1 * 0x650 + 0x72d7a8
void* i

do
    if (arg3 s>= 0 && arg3 s< ebx_1)
        int32_t ebx_2
        
        if (arg5 != 0xffffffff || arg7 != 0xffffffff)
            ebx_2 = 0
        else
            ebx_2 = 1
        
        int32_t edi_2
        
        if (arg6 != 0xffffffff || arg8 != 0xffffffff)
            edi_2 = 0
        else
            edi_2 = 1
        
        *esi_2 += 1
        arg1[-1] = ebx_2
        arg1[1] = arg5
        arg1[2] = arg6
        arg1[3] = arg7
        arg1[4] = arg8
        ebx_1 = data_7031bc
        *arg1 = edi_2
    
    arg3 += 1
    arg1 = &arg1[0x328]
    esi_2 += 0xf40
    i = i_1
    i_1 -= 1
while (i != 1)
