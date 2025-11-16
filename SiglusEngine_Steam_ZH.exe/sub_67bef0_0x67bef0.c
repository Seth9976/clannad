// 函数: sub_67bef0
// 地址: 0x67bef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg9
int32_t* esi = arg8
int32_t ecx = arg5
int32_t edi = arg4

while (edi != arg6 || ecx != arg7)
    char ecx_1 = edx.b
    
    if ((*edi & 1 << ecx.b) == 0)
        *esi &= not.d(1 << ecx_1)
    else
        *esi |= 1 << ecx_1
    
    esi = arg8
    
    if (arg9 u>= 0x1f)
        edx = 0
        esi = &esi[1]
        arg8 = esi
    else
        edx = arg9 + 1
    
    edi = arg4
    arg9 = edx
    
    if (arg5 u>= 0x1f)
        ecx = 0
        edi += 4
        arg5 = 0
        arg4 = edi
    else
        ecx = arg5 + 1
        arg5 = ecx

*arg3 = esi
arg3[1] = edx
return arg3
