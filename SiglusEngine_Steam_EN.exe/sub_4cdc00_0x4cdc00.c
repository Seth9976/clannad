// 函数: sub_4cdc00
// 地址: 0x4cdc00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = data_20beb64
int32_t buffer_1 = data_1c04424
int32_t edx = data_20beb68
HANDLE hFile = data_1c04428
uint32_t ebx = 0x60
uint32_t numberOfBytesWritten_2 = 0x60
uint32_t i

do
    uint32_t nNumberOfBytesToWrite = eax_2[2]
    
    if (nNumberOfBytesToWrite != 0)
        uint8_t* lpBuffer = *eax_2
        buffer_1 += nNumberOfBytesToWrite
        data_1c04424 = buffer_1
        
        if (hFile != 0xffffffff)
            if (lpBuffer != 0)
                SetFilePointer(hFile, 0, nullptr, FILE_END)
            
            uint32_t numberOfBytesWritten_1
            WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten_1, nullptr)
            buffer_1 = data_1c04424
            hFile = data_1c04428
            edx = data_20beb68
        
        ebx = numberOfBytesWritten_2
        data_1c04420 = buffer_1
    
    edx = mods.dp.d(sx.q(edx + 1), 0x60)
    data_20beb68 = edx
    eax_2 = (edx << 5) + &data_20bee70
    i = ebx
    ebx -= 1
    data_20beb64 = eax_2
    numberOfBytesWritten_2 = ebx
while (i != 1)
int32_t buffer = buffer_1 + 0x26

if (hFile != 0xffffffff)
    SetFilePointer(hFile, 4, nullptr, FILE_BEGIN)
    WriteFile(hFile, &buffer, 4, &numberOfBytesWritten_2, nullptr)
    buffer_1 = data_1c04424
    hFile = data_1c04428

buffer = buffer_1

if (hFile != 0xffffffff)
    SetFilePointer(hFile, 0x2a, nullptr, FILE_BEGIN)
    uint32_t numberOfBytesWritten
    WriteFile(hFile, &buffer, 4, &numberOfBytesWritten, nullptr)

MMTIME pmmt
pmmt.wType = 4
uint32_t result = waveInGetPosition(data_1c04434, &pmmt, 0xc)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
