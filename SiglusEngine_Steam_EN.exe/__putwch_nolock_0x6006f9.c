// 函数: __putwch_nolock
// 地址: 0x6006f9
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t numberOfCharsWritten = arg1
HANDLE hConsoleOutput = data_63c920

if (hConsoleOutput == 0xfffffffe)
    ___initconout()
    hConsoleOutput = data_63c920

int16_t buffer

if (hConsoleOutput != 0xffffffff
        && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
    BOOL result
    result.w = buffer
    return result

return 0xffff
