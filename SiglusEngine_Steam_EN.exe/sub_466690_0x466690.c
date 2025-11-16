// 函数: sub_466690
// 地址: 0x466690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
*(arg3 + 4) = 0
int32_t result = arg5 + arg6 + arg7 + arg8 + arg9

if (result s> 0)
    int32_t edx = 0
    
    if (esi s< 0)
        edx = neg.d(esi)
        esi = 0
    
    *(arg3 + 4) = result
    result.b = arg4
    arg3[0x11] = result.b
    *(arg3 + 0x1c) = arg7
    *(arg3 + 0x20) = arg8
    *(arg3 + 0x24) = arg9
    result = arg10
    *(arg3 + 0xc) = edx
    *arg3 = 1
    *(arg3 + 8) = esi
    
    if (result s<= 0)
        result = 0
    
    arg3[0x10] = 1
    *(arg3 + 0x14) = arg5
    *(arg3 + 0x18) = arg6
    *(arg3 + 0x28) = result.w

return result
