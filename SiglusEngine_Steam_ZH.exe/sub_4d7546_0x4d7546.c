// 函数: sub_4d7546
// 地址: 0x4d7546
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = __endthreadex(arg2 | arg3)

if (result s>= 0)
    if (arg4 == 0)
        return 0
    
    result = __endthreadex(arg4)
    
    if (result s>= 0)
        void* eax_3 = *(arg1 + 0x10c) + (*(arg1 + 0x118) << 2)
        *(eax_3 + 3) |= 0x10
        return 0

return result
