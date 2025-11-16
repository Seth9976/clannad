// 函数: _realloc
// 地址: 0x74be1d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return _malloc(arg2)

uint32_t dwBytes = arg2

if (dwBytes == 0)
    _free(arg1)
    return 0

while (true)
    if (dwBytes u> 0xffffffe0)
        __callnewh(dwBytes)
        *__errno() = 0xc
        break
    
    if (dwBytes == 0)
        dwBytes += 1
    
    int32_t result = HeapReAlloc(data_b955a4, HEAP_NONE, arg1, dwBytes)
    
    if (result != 0)
        return result
    
    if (data_b955a0 == result)
        void* eax_8 = __errno()
        *eax_8 = __get_errno_from_oserr(GetLastError())
        return result
    
    if (__callnewh(dwBytes) == 0)
        void* eax_5 = __errno()
        *eax_5 = __get_errno_from_oserr(GetLastError())
        break

return 0
