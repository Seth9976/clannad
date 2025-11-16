// 函数: sub_5f5bcf
// 地址: 0x5f5bcf
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

enum WIN32_ERROR dwErrCode = GetLastError()
uint32_t* result = sub_5f3693(data_63be70)

if (result == 0)
    result = sub_5f6a6e(1, 0x3bc)
    
    if (result != 0)
        if (sub_5f36b2(data_63be70, result) == 0)
            _free(result)
            result = nullptr
        else
            __initptd(result, 0)
            uint32_t eax_3 = GetCurrentThreadId()
            result[1] = 0xffffffff
            *result = eax_3

SetLastError(dwErrCode)
return result
