// 函数: sub_4c4a00
// 地址: 0x4c4a00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void fileName
sub_4c36f0(&fileName, arg8, arg3, arg9, &fileName)
HANDLE hFile = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, 0x8000080, nullptr)
HANDLE hFile_1 = hFile

if (hFile == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0xffffffff

uint32_t nNumberOfBytesToRead = arg7

if (nNumberOfBytesToRead == 0xffffffff)
    nNumberOfBytesToRead = GetFileSize(hFile, nullptr)
    hFile = hFile_1

char* result

if (nNumberOfBytesToRead == 0)
    result = arg5
else
    SetFilePointer(hFile, arg6, nullptr, FILE_BEGIN)
    
    if (*arg2 == 0)
        sub_4d6960(nNumberOfBytesToRead + 0xf, arg4, arg2, nNumberOfBytesToRead + 0xf, arg5)
    
    int32_t lpBuffer = *arg4
    result = nullptr
    int32_t eax_7 = data_641b64
    uint32_t numberOfBytesRead
    int32_t ecx_3
    
    if (nNumberOfBytesToRead u<= 0x200000)
        ecx_3 = data_641b60
    else
        uint32_t numberOfBytesRead_1
        
        do
            if (eax_7 != 0)
                Sleep(0)
            
            ReadFile(hFile_1, lpBuffer, 0x200000, &numberOfBytesRead, nullptr)
            numberOfBytesRead_1 = numberOfBytesRead
            nNumberOfBytesToRead -= 0x200000
            result = &result[numberOfBytesRead_1]
            lpBuffer += 0x200000
            
            if (data_641b64 == 0)
                Sleep(0)
                numberOfBytesRead_1 = numberOfBytesRead
                eax_7 = 0
                ecx_3 = 0
            else
                eax_7 = 0x200000
                ecx_3 = 1
            
            data_641b60 = ecx_3
            data_641b64 = eax_7
            
            if (numberOfBytesRead_1 != 0x200000)
                goto label_4c4bf4
        while (nNumberOfBytesToRead u> numberOfBytesRead_1)
    
    int32_t eax_8 = eax_7 + nNumberOfBytesToRead
    data_641b64 = eax_8
    data_641b60 = ecx_3 + 1
    
    if (eax_8 s>= 0x200000 || ecx_3 + 1 s>= 0x32)
        Sleep(0)
    
    ReadFile(hFile_1, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr)
    result = &result[numberOfBytesRead]
    
    if (data_641b64 s>= 0x200000 || data_641b60 s>= 0x32)
        data_641b64 = nNumberOfBytesToRead
        data_641b60 = 1
        CloseHandle(hFile_1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result

label_4c4bf4:
CloseHandle(hFile_1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
