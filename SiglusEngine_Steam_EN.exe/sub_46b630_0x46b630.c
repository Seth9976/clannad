// 函数: sub_46b630
// 地址: 0x46b630
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

arg1 = (arg4 + (arg3 << 1)) * 0x650 + 0x72d808
void* i

do
    int32_t edi_1 = arg5
    
    if (arg3 s>= 0 && arg3 s< ebx_1)
        if (arg5 s< 0 || arg5 s> 2)
            edi_1 = 0
        
        *arg1 = edi_1
    
    arg3 += 1
    arg1 = &arg1[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
