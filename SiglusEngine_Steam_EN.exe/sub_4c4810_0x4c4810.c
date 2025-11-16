// 函数: sub_4c4810
// 地址: 0x4c4810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = 0

if (arg3 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void fileName
sub_4c36f0(&fileName, arg6, arg3, arg7, &fileName)
HANDLE eax_6 = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, 0x8000080, nullptr)

if (eax_6 == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0xffffffff

uint32_t nNumberOfBytesToRead = GetFileSize(eax_6, nullptr)

if (nNumberOfBytesToRead != 0)
    if (*arg2 == 0)
        sub_4d6960(nNumberOfBytesToRead + 0xf, arg4, arg2, nNumberOfBytesToRead + 0xf, arg5)
    
    result = 0
    int32_t lpBuffer = *arg4
    int32_t eax_10 = data_641b64
    uint32_t numberOfBytesRead
    int32_t ecx_3
    
    if (nNumberOfBytesToRead u<= 0x200000)
        ecx_3 = data_641b60
    else
        uint32_t numberOfBytesRead_1
        
        do
            if (eax_10 != 0)
                Sleep(0)
            
            ReadFile(eax_6, lpBuffer, 0x200000, &numberOfBytesRead, nullptr)
            numberOfBytesRead_1 = numberOfBytesRead
            nNumberOfBytesToRead -= 0x200000
            result += numberOfBytesRead_1
            lpBuffer += 0x200000
            
            if (data_641b64 == 0)
                Sleep(0)
                numberOfBytesRead_1 = numberOfBytesRead
                eax_10 = 0
                ecx_3 = 0
            else
                eax_10 = 0x200000
                ecx_3 = 1
            
            data_641b60 = ecx_3
            data_641b64 = eax_10
            
            if (numberOfBytesRead_1 != 0x200000)
                goto label_4c49d0
        while (nNumberOfBytesToRead u> numberOfBytesRead_1)
    
    int32_t eax_11 = eax_10 + nNumberOfBytesToRead
    data_641b64 = eax_11
    data_641b60 = ecx_3 + 1
    
    if (eax_11 s>= 0x200000 || ecx_3 + 1 s>= 0x32)
        Sleep(0)
    
    ReadFile(eax_6, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr)
    result += numberOfBytesRead
    
    if (data_641b64 s>= 0x200000 || data_641b60 s>= 0x32)
        data_641b64 = nNumberOfBytesToRead
        data_641b60 = 1

label_4c49d0:
CloseHandle(eax_6)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
