// 函数: sub_699e40
// 地址: 0x699e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

EnterCriticalSection(arg1 + 0x10)
int32_t i = 0

if (*(arg1 + 0xc) s> 0)
    do
        if (lstrcmpiW(*(*(arg1 + 4) + (i << 2)), arg2) == 0)
            if (i == 0xffffffff)
                break
            
            if (i s< 0 || i s>= *(arg1 + 0xc))
                RaiseException(0xc000008c, 1, 0, nullptr)
                noreturn
            
            int32_t result = *(*(arg1 + 8) + (i << 2))
            LeaveCriticalSection(arg1 + 0x10)
            return result
        
        i += 1
    while (i s< *(arg1 + 0xc))

LeaveCriticalSection(arg1 + 0x10)
return 0
