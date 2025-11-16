// 函数: sub_10005209
// 地址: 0x10005209
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

enum WIN32_ERROR dwErrCode = GetLastError()
uint32_t* result = sub_10005b3a(data_100172cc)

if (result == 0)
    result = sub_10004212(1, 0x3bc)
    
    if (result != 0)
        if (sub_10005b59(data_100172cc, result) == 0)
            _free(result)
            result = nullptr
        else
            __initptd(result, 0)
            uint32_t eax_3 = GetCurrentThreadId()
            result[1] = 0xffffffff
            *result = eax_3

SetLastError(dwErrCode)
return result
