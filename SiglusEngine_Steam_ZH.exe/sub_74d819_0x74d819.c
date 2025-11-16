// 函数: sub_74d819
// 地址: 0x74d819
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

enum WIN32_ERROR dwErrCode = GetLastError()
uint32_t* result = sub_74d142(data_b4c494)

if (result == 0)
    result = sub_74cccf(1, 0x3bc)
    
    if (result != 0)
        if (sub_74d161(data_b4c494, result) == 0)
            _free(result)
            result = nullptr
        else
            __initptd(result, 0)
            uint32_t eax_3 = GetCurrentThreadId()
            result[1] = 0xffffffff
            *result = eax_3

SetLastError(dwErrCode)
return result
