// 函数: __putwch_nolock
// 地址: 0x75eb1c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t numberOfCharsWritten = arg1
HANDLE hConsoleOutput = data_b4d37c

if (hConsoleOutput == 0xfffffffe)
    ___initconout()
    hConsoleOutput = data_b4d37c

int16_t buffer

if (hConsoleOutput != 0xffffffff
        && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
    BOOL result
    result.w = buffer
    return result

return 0xffff
