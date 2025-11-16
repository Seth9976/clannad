// 函数: sub_48614a
// 地址: 0x48614a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
uint32_t edi_1 = arg1
void* ecx = *(edi_1 + 0xc)

if ((*(ecx + 0x48) & 0x80) != 0)
    return 0x88760384

if (arg6 == 0)
    return 0x88760385

void* var_8
int32_t eax = sub_4860a7(ecx, arg2, &var_8)

if (eax s< 0)
    return eax

int32_t* hFile = *(*(edi_1 + 0xc) + 0x34)
uint32_t fileSizeHigh
uint32_t eax_2 = GetFileSize(hFile, &fileSizeHigh)
arg1 = arg5
int32_t ecx_1
int32_t esi_1
void*** lpBuffer

if (arg5 == 0)
label_4861d4:
    int128_t* const eax_5 = arg4
    
    if (eax_5 == 0)
        eax_5 = &data_aac190
    
    int32_t eax_6
    eax_6, ecx_1 =
        sub_485d4c(*(edi_1 + 0xc), arg3, eax_5, var_8, eax_2, fileSizeHigh, arg5, &lpBuffer)
    
    if (eax_6 s>= 0)
        void*** lpBuffer_1 = lpBuffer
        int32_t eax_8 = neg.d(lpBuffer_1)
        lpBuffer = sbb.d(eax_8, eax_8, lpBuffer_1 != 0) & &lpBuffer_1[1]
        int32_t eax_11
        int32_t ecx_3
        eax_11, ecx_3 = sub_48647e(edi_1 + 0x38, &lpBuffer)
        
        if (eax_11 != 0)
            *arg6 = lpBuffer_1
            (*lpBuffer_1)[1](lpBuffer_1)
            return 0
        
        sub_485159(ecx_3, hFile, eax_2, fileSizeHigh, FILE_BEGIN)
        SetEndOfFile(hFile)
        
        if (lpBuffer_1 != 0)
            (*lpBuffer_1[1])(1)
        
        return 0x8007000e
    
    esi_1 = eax_6
else
    while (true)
        uint32_t nNumberOfBytesToWrite = 0x7fffffff
        
        if (arg1 u<= 0x7fffffff)
            nNumberOfBytesToWrite = arg1
        
        uint32_t numberOfBytesWritten
        BOOL eax_4
        eax_4, ecx_1 =
            WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr)
        
        if (eax_4 == 0)
            esi_1 = 0x8007000e
            break
        
        lpBuffer += nNumberOfBytesToWrite
        uint32_t temp2_1 = arg1
        arg1 -= nNumberOfBytesToWrite
        
        if (temp2_1 == nNumberOfBytesToWrite)
            goto label_4861d4
sub_485159(ecx_1, hFile, eax_2, fileSizeHigh, FILE_BEGIN)
SetEndOfFile(hFile)
return esi_1
