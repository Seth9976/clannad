// 函数: sub_46bfd0
// 地址: 0x46bfd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0)
    return 

int32_t edi_1 = data_7031bc

if (arg2 s>= edi_1)
    return 

int32_t i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

int32_t* esi_2 = (arg4 + (arg3 << 1)) * 0x650 + 0x72d748
int32_t i

do
    if (arg3 s>= 0 && arg3 s< edi_1)
        arg1 = arg5
        
        if (arg5 != 0)
            arg1 = 1
        
        *esi_2 = arg1
    
    arg3 += 1
    esi_2 = &esi_2[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
