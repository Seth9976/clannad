// 函数: _malloc
// 地址: 0x10002ced
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 u> 0xffffffe0)
    __callnewh(arg1)
    *__errno() = 0xc
    return 0

int32_t result

while (true)
    HANDLE hHeap = data_1001b094
    
    if (hHeap == 0)
        __FF_MSGBANNER()
        __NMSG_WRITE(0x1e)
        ___crtExitProcess(0xff)
        noreturn
    
    uint32_t dwBytes
    
    dwBytes = arg1 == 0 ? 1 : arg1
    
    result = HeapAlloc(hHeap, HEAP_NONE, dwBytes)
    
    if (result != 0)
        break
    
    if (data_1001b090 == result)
        *__errno() = 0xc
    else if (__callnewh(arg1) != 0)
        continue
    
    *__errno() = 0xc
    break

return result
