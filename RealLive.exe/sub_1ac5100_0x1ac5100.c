// 函数: sub_1ac5100
// 地址: 0x1ac5100
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void* var_4_1 = arg1
void* var_8 = arg1
EnterCriticalSection(arg1 + 0x1c)
int32_t ebp = *(arg1 + 4)
int32_t result = *(arg1 + 8)

if (result s>= ebp || (*(*(arg1 + 0x10) + (result << 3)) & 1) != 0)
    result = 1
    
    if (ebp s> 1)
        char* eax_3 = *(arg1 + 0x10) + 8
        
        while ((*eax_3 & 1) != 0)
            result += 1
            eax_3 = &eax_3[8]
            
            if (result s>= ebp)
                break
    
    if (ebp s<= 1 || result s>= ebp)
        int32_t pMem = *(arg1 + 0x10)
        HGLOBAL hMem
        
        if (pMem != 0)
            HGLOBAL hMem_1 = GlobalHandle(pMem)
            GlobalUnlock(hMem_1)
            hMem = GlobalReAlloc(hMem_1, (ebp + 0x20) << 3, 0x2002)
        else
            hMem = GlobalAlloc(0x2002, (ebp + 0x20) << 3)
        
        if (hMem == 0)
            GlobalLock(GlobalHandle(*(arg1 + 0x10)))
            sub_1aab087(LeaveCriticalSection(arg1 + 0x1c))
            noreturn
        
        int32_t eax_9 = GlobalLock(hMem)
        int32_t eax_10 = *(arg1 + 4)
        sub_1a917d0(eax_9 + (eax_10 << 3), 0, (eax_10 * 0x1fffffff + ebp + 0x20) << 3)
        *(arg1 + 0x10) = eax_9
        *(arg1 + 4) = ebp + 0x20

if (result s>= *(arg1 + 0xc))
    *(arg1 + 0xc) = result + 1

int32_t eax_13 = *(arg1 + 0x10)
*(eax_13 + (result << 3)) |= 1
*(arg1 + 8) = result + 1
LeaveCriticalSection(arg1 + 0x1c)
return result
