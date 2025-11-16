// 函数: __calloc_impl
// 地址: 0x5f6f7d
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || divu.dp.d(0:0xffffffe0, arg1) u>= arg2)
    uint32_t dwBytes = arg1 * arg2
    
    if (dwBytes == 0)
        dwBytes += 1
    
    int32_t i
    
    do
        int32_t result = 0
        
        if (dwBytes u<= 0xffffffe0)
            result = HeapAlloc(data_641100, HEAP_ZERO_MEMORY, dwBytes)
        
        if (dwBytes u<= 0xffffffe0 && result != 0)
            return result
        
        if (data_641738 == 0)
            if (arg3 != 0)
                *arg3 = 0xc
            
            return result
        
        i = __callnewh(dwBytes)
    while (i != 0)
    
    if (arg3 != 0)
        *arg3 = 0xc
else
    *__errno() = 0xc

return 0
