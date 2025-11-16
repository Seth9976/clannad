// 函数: sub_6d4650
// 地址: 0x6d4650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edx

if ((*(arg1 + 0x78) & 0x100000) == 0)
    if ((*(arg1 + 0x74) & 0x8000) != 0 && *(arg1 + 0x11c) != 0)
        noreturn sub_6d47a0(arg1, edx) __tailcall
    
    noreturn sub_6d42e0(arg1, edx) __tailcall

if ((*(arg1 + 0x74) & 0x8000) != 0 && *(arg1 + 0x11c) != 0)
    return sub_6d47e0(arg1, edx) __tailcall

return sub_6d4470(arg1, edx) __tailcall
