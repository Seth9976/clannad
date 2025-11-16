// 函数: sub_481ef5
// 地址: 0x481ef5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t numberOfBytesWritten = arg1
uint8_t* lpBuffer_1 = *(arg1 + 4)

if (lpBuffer_1 != 0 && *arg1 != 0)
    uint8_t* lpBuffer = lpBuffer_1
    
    while (true)
        if (*(arg1 + 8) s<= 0)
            return 0
        
        if (WriteFile(*arg1, lpBuffer, *(arg1 + 8), &numberOfBytesWritten, nullptr) == 0)
            break
        
        uint32_t numberOfBytesWritten_1 = numberOfBytesWritten
        lpBuffer = &lpBuffer[numberOfBytesWritten_1]
        *(arg1 + 8) -= numberOfBytesWritten_1

return 0x80004005
