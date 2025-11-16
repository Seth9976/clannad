// 函数: sub_468c90
// 地址: 0x468c90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0)
    return 

int32_t edi_1 = data_7031bc

if (arg2 s>= edi_1)
    return 

void* i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

arg1 = (arg4 + (arg3 << 1)) * 0x650 + &data_72d7fc
void* i

do
    if (arg3 s>= 0 && arg3 s< edi_1 && arg5 u<= 7)
        *(arg1 + (arg5 << 2) + 0x90) += arg6
        *(arg1 + (arg5 << 2) + 0xb0) += arg7
    
    arg3 += 1
    arg1 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
