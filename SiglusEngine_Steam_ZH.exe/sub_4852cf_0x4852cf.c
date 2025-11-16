// 函数: sub_4852cf
// 地址: 0x4852cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_44 = edi
HANDLE hFile = *(*(arg1 + 8) + 0x30)
uint32_t fileSizeHigh
uint32_t eax_1 = GetFileSize(hFile, &fileSizeHigh)
int32_t ecx_10

if (arg2 == 0)
    void* ecx_12 = *(arg1 + 8)
    int32_t edx_5 = sbb.d(fileSizeHigh, *(ecx_12 + 0x44), eax_1 u< *(ecx_12 + 0x40))
    *(arg1 + 0x44) = eax_1 - *(ecx_12 + 0x40)
    int32_t buffer_1 = *(arg1 + 0x2c)
    *(arg1 + 0x48) = edx_5
    int32_t buffer = 0
    int32_t var_34_1 = 0
    int32_t var_2c_1 = 0
    uint32_t numberOfBytesWritten_1
    BOOL eax_16
    int32_t ecx_13
    eax_16, ecx_13 = WriteFile(hFile, arg1 + 0x24, 8, &numberOfBytesWritten_1, nullptr)
    
    if (eax_16 == 0)
    label_4854eb:
        sub_485159(ecx_13, hFile, eax_1, fileSizeHigh, FILE_BEGIN)
        SetEndOfFile(hFile)
        return 0x8007000e
    
    BOOL eax_17
    eax_17, ecx_13 = WriteFile(hFile, &buffer_1, 8, &numberOfBytesWritten_1, nullptr)
    
    if (eax_17 == 0)
        goto label_4854eb
    
    BOOL eax_20
    eax_20, ecx_13 = WriteFile(hFile, *(arg1 + 0xc) + 8, 0x10, &numberOfBytesWritten_1, nullptr)
    
    if (eax_20 == 0)
        goto label_4854eb
    
    BOOL eax_22
    eax_22, ecx_13 = WriteFile(hFile, arg1 + 0x10, 0x10, &numberOfBytesWritten_1, nullptr)
    
    if (eax_22 == 0)
        goto label_4854eb
    
    BOOL eax_23
    eax_23, ecx_13 = WriteFile(hFile, &buffer, 8, &numberOfBytesWritten_1, nullptr)
    
    if (eax_23 == 0)
        goto label_4854eb
    
    uint8_t* lpBuffer = *(arg1 + 0x30)
    
    if (lpBuffer != 0)
        uint8_t* lpBuffer_1 = lpBuffer
        uint8_t i
        
        do
            i = *lpBuffer_1
            lpBuffer_1 = &lpBuffer_1[1]
        while (i != 0)
        BOOL eax_28
        eax_28, ecx_13 = WriteFile(hFile, lpBuffer, lpBuffer_1 - &lpBuffer_1[1] + 1, 
            &numberOfBytesWritten_1, nullptr)
        
        if (eax_28 == 0)
            goto label_4854eb
    else
        uint8_t buffer_4 = 0
        BOOL eax_24
        eax_24, ecx_10 = WriteFile(hFile, &buffer_4, 1, &numberOfBytesWritten_1, nullptr)
        
        if (eax_24 == 0)
            goto label_48549d
else if (*(arg1 + 0x34) != 0)
    void* ecx = *(arg1 + 8)
    int32_t eax_2 = *(ecx + 0x40)
    int32_t eax_3 = eax_2 + *(arg1 + 0x44)
    int32_t ecx_3 = adc.d(adc.d(*(ecx + 0x44), *(arg1 + 0x48), eax_2 + *(arg1 + 0x44) u< eax_2), 0, 
        eax_3 u>= 0xffffffd0)
    sub_485159(ecx_3, hFile, eax_3 + 0x30, ecx_3, FILE_BEGIN)
    void* eax_5 = *(arg1 + 8)
    int32_t ecx_5 = eax_1 - *(eax_5 + 0x40)
    int32_t edx_3 = sbb.d(sbb.d(fileSizeHigh, *(eax_5 + 0x44), eax_1 u< *(eax_5 + 0x40)), 
        *(arg1 + 0x48), ecx_5 u< *(arg1 + 0x44))
    int32_t buffer_3 = ecx_5 - *(arg1 + 0x44)
    int32_t var_1c_1 = edx_3
    uint32_t numberOfBytesWritten
    BOOL eax_6
    int32_t ecx_7
    eax_6, ecx_7 = WriteFile(hFile, &buffer_3, 8, &numberOfBytesWritten, nullptr)
    
    if (eax_6 == 0)
        sub_485159(ecx_7, hFile, eax_6, 0, FILE_END)
        return 0x8007000e
    
    sub_485159(ecx_7, hFile, 0, 0, FILE_END)
    arg2.d = 0
    int32_t result_1
    
    if (*(arg1 + 0x34) u> 0)
        while (true)
            result_1, ecx_10 = (*(**(*(arg1 + 0x40) + (arg2.d << 2)) + 4))(0)
            
            if (result_1 s< 0)
                break
            
            arg2.d += 1
            
            if (arg2.d u>= *(arg1 + 0x34))
                goto label_485399
        
        goto label_4853e0
    
label_485399:
    int32_t buffer_2 = 0xffffffff
    int32_t var_24_1 = 0xffffffff
    BOOL eax_10
    eax_10, ecx_10 = WriteFile(hFile, &buffer_2, 8, &numberOfBytesWritten, nullptr)
    int32_t result
    
    if (eax_10 == 0)
    label_48549d:
        result = 0x8007000e
    label_4854ac:
        sub_485159(ecx_10, hFile, eax_1, fileSizeHigh, FILE_BEGIN)
        SetEndOfFile(hFile)
        return result
    
    int32_t edi_1 = 0
    
    if (*(arg1 + 0x34) u> 0)
        while (true)
            result_1, ecx_10 = (*(**(*(arg1 + 0x40) + (edi_1 << 2)) + 4))(1)
            
            if (result_1 s< 0)
                break
            
            edi_1 += 1
            
            if (edi_1 u>= *(arg1 + 0x34))
                return 0
        
    label_4853e0:
        result = result_1
        goto label_4854ac
return 0
