// 函数: sub_4c4c20
// 地址: 0x4c4c20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0xffffffff)
    return 0xffffffff

uint32_t nNumberOfBytesToRead = arg7

if (nNumberOfBytesToRead == 0xffffffff)
    nNumberOfBytesToRead = GetFileSize(arg3, nullptr)

SetFilePointer(arg3, arg6, nullptr, FILE_BEGIN)

if (*arg2 == 0)
    sub_4d6960(nNumberOfBytesToRead + 0xf, arg4, arg2, nNumberOfBytesToRead + 0xf, arg5)

int32_t result = 0
int32_t lpBuffer = *arg4
int32_t eax_3 = data_641b64
uint32_t numberOfBytesRead
int32_t ecx_3

if (nNumberOfBytesToRead u< 0x200000)
    ecx_3 = data_641b60
else
    uint32_t numberOfBytesRead_1
    
    do
        if (eax_3 != 0)
            Sleep(0)
        
        ReadFile(arg3, lpBuffer, 0x200000, &numberOfBytesRead, nullptr)
        numberOfBytesRead_1 = numberOfBytesRead
        nNumberOfBytesToRead -= 0x200000
        result += numberOfBytesRead_1
        lpBuffer += 0x200000
        
        if (data_641b64 == 0)
            Sleep(0)
            numberOfBytesRead_1 = numberOfBytesRead
            eax_3 = 0
            ecx_3 = 0
        else
            eax_3 = 0x200000
            ecx_3 = 1
        
        data_641b60 = ecx_3
        data_641b64 = eax_3
        
        if (numberOfBytesRead_1 != 0x200000)
            return result
    while (nNumberOfBytesToRead u>= numberOfBytesRead_1)

int32_t eax_4 = eax_3 + nNumberOfBytesToRead
data_641b64 = eax_4
data_641b60 = ecx_3 + 1

if (eax_4 s>= 0x200000 || ecx_3 + 1 s>= 0x32)
    Sleep(0)

ReadFile(arg3, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr)
result += numberOfBytesRead

if (data_641b64 s>= 0x200000 || data_641b60 s>= 0x32)
    data_641b64 = nNumberOfBytesToRead
    data_641b60 = 1

return result
