// 函数: sub_46b540
// 地址: 0x46b540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t esi = arg2
int32_t edi = arg3

if (edi s> esi)
    arg1 = edi
    edi = esi
    esi = arg1

if (edi s< 0)
    return 

int32_t ecx = data_7031bc

if (esi s>= ecx)
    return 

int32_t i_1 = esi - edi + 1

if (i_1 s<= 0)
    return 

int32_t edx = arg5
void* ebx_2 = (arg4 + (edi << 1)) * 0x650 + &data_72d828
int32_t i

do
    if (edi s>= 0 && edi s< ecx)
        arg1 = edx
        
        if (edx != 0)
            arg1 = 1
        
        if (*ebx_2 != arg1)
            *ebx_2 = arg1
            sub_466220(arg1, arg6, ebx_2 + 0x148, arg7, arg8, arg9, arg10, arg11, arg12, arg13, 
                arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21)
            ecx = data_7031bc
            edx = arg5
    
    edi += 1
    ebx_2 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
