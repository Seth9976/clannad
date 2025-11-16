// 函数: sub_6dc5b0
// 地址: 0x6dc5b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg6 - 1

if (result u> 3)
    return result

if (*(arg3 + 0x2ac) == 0)
    void* (* eax)(void* arg1, void* arg2, char* arg3) = sub_6dc4d0
    int32_t ecx_1 = zx.d(*(arg3 + 0x152)) + 7
    *(arg3 + 0x2ac) = sub_6dc2d0
    *(arg3 + 0x2b0) = sub_6dc310
    *(arg3 + 0x2b4) = sub_6dc3a0
    
    if ((ecx_1 & 0xfffffff8) == 8)
        eax = sub_6dc410
    
    *(arg3 + 0x2b8) = eax

return (*(arg3 + (arg6 << 2) + 0x2a8))(arg2, arg4, arg5)
