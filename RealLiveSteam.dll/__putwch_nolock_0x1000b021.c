// 函数: __putwch_nolock
// 地址: 0x1000b021
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

uint32_t numberOfCharsWritten = arg1
HANDLE hConsoleOutput = data_10017ed0

if (hConsoleOutput == 0xfffffffe)
    ___initconout()
    hConsoleOutput = data_10017ed0

int16_t buffer

if (hConsoleOutput != 0xffffffff
        && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
    BOOL result
    result.w = buffer
    return result

return 0xffff
