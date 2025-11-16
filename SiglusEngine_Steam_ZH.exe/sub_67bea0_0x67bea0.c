// 函数: sub_67bea0
// 地址: 0x67bea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg4
int32_t ecx = arg5

while (edx != arg6 || ecx != arg7)
    arg1 = 1 << ecx.b
    
    if (*arg3 == 0)
        *edx &= not.d(arg1)
    else
        *edx |= arg1
    
    edx = arg4
    
    if (arg5 u>= 0x1f)
        ecx = 0
        edx = &edx[1]
        arg5 = 0
        arg4 = edx
    else
        ecx = arg5 + 1
        arg5 = ecx
