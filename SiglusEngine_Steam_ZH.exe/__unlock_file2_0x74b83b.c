// 函数: __unlock_file2
// 地址: 0x74b83b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0x14)
    return LeaveCriticalSection(arg2 + 0x20)

*(arg2 + 0xc) &= 0xffff7fff
return __unlock(arg1 + 0x10)
