// 函数: sub_46de60
// 地址: 0x46de60
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

arg1 = arg6
void* edi_2 = (arg4 + (arg3 << 1)) * 0x650 + &data_72d6b0
int32_t i

do
    if (arg3 s>= 0 && arg3 s< ebx_1)
        int16_t edx = arg1.w
        
        if (arg1 s<= 0)
            edx = 1
        
        *(edi_2 + arg5 * 0x1c + 0x41c) = edx
        arg1 = arg6
    
    arg3 += 1
    edi_2 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
