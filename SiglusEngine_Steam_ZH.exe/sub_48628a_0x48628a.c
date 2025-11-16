// 函数: sub_48628a
// 地址: 0x48628a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t esi = arg1
int32_t edi
int32_t var_1c = edi

if ((*(esi + 0x48) & 0x80) != 0)
    return 0x88760384

if (arg6 == 0)
    return 0x88760385

int32_t eax = sub_4860a7(esi, arg2, &arg2)

if (eax s< 0)
    return eax

uint32_t fileSizeHigh
uint32_t eax_1 = GetFileSize(*(esi + 0x34), &fileSizeHigh)
arg1 = arg5
int32_t ecx_2
int32_t edi_1
uint8_t* lpBuffer

if (arg5 == 0)
label_48630f:
    int128_t* const eax_4 = arg4
    
    if (eax_4 == 0)
        eax_4 = &data_aac190
    
    int32_t eax_5
    eax_5, ecx_2 = sub_485d4c(esi, arg3, eax_4, arg2, eax_1, fileSizeHigh, arg5, &lpBuffer)
    
    if (eax_5 s>= 0)
        uint8_t* lpBuffer_1 = lpBuffer
        int32_t eax_7 = neg.d(lpBuffer_1)
        lpBuffer = sbb.d(eax_7, eax_7, lpBuffer_1 != 0) & &lpBuffer_1[4]
        int32_t eax_10
        int32_t ecx_4
        eax_10, ecx_4 = sub_48647e(esi + 0x20, &lpBuffer)
        
        if (eax_10 != 0)
            *arg6 = lpBuffer_1
            (*(*lpBuffer_1 + 4))(lpBuffer_1)
            return 0
        
        sub_485159(ecx_4, *(esi + 0x34), eax_1, fileSizeHigh, FILE_BEGIN)
        SetEndOfFile(*(esi + 0x34))
        
        if (lpBuffer_1 != 0)
            (**(lpBuffer_1 + 4))(1)
        
        return 0x8007000e
    
    edi_1 = eax_5
else
    while (true)
        uint32_t nNumberOfBytesToWrite = arg1
        
        if (nNumberOfBytesToWrite u> 0x7fffffff)
            nNumberOfBytesToWrite = 0x7fffffff
        
        uint32_t numberOfBytesWritten
        BOOL eax_3
        eax_3, ecx_2 = WriteFile(*(esi + 0x34), lpBuffer, nNumberOfBytesToWrite, 
            &numberOfBytesWritten, nullptr)
        
        if (eax_3 == 0)
            edi_1 = 0x8007000e
            break
        
        lpBuffer = &lpBuffer[nNumberOfBytesToWrite]
        uint32_t temp2_1 = arg1
        arg1 -= nNumberOfBytesToWrite
        
        if (temp2_1 == nNumberOfBytesToWrite)
            goto label_48630f
sub_485159(ecx_2, *(esi + 0x34), eax_1, fileSizeHigh, FILE_BEGIN)
SetEndOfFile(*(esi + 0x34))
return edi_1
