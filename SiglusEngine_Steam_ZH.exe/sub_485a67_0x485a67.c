// 函数: sub_485a67
// 地址: 0x485a67
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t esi = arg2
int32_t edi
int32_t var_1c = edi
uint8_t* lpBuffer_1 = sub_482583(esi)
uint8_t* lpBuffer_2 = *esi
int32_t* ecx_1 = *(esi + 0xc)

if (lpBuffer_1 == 0)
    return 0x80004005

char* lpBuffer_5 = lpBuffer_1
arg2 = 0
char i

do
    i = *lpBuffer_5
    lpBuffer_5 = &lpBuffer_5[1]
while (i != 0)

if (WriteFile(*(arg1 + 0x30), lpBuffer_1, lpBuffer_5 - &lpBuffer_5[1] + 1, &arg2, nullptr) != 0)
    char* lpBuffer_3 = lpBuffer_2
    char i_1
    
    do
        i_1 = *lpBuffer_3
        lpBuffer_3 = &lpBuffer_3[1]
    while (i_1 != 0)
    
    if (WriteFile(*(arg1 + 0x30), lpBuffer_2, lpBuffer_3 - &lpBuffer_3[1] + 1, &arg2, nullptr) != 0)
        int32_t* ecx_5 = ecx_1
        
        if (ecx_5 != 0)
            int32_t i_2 = 0
            
            if (*ecx_5 u> 0)
                do
                    uint8_t* lpBuffer_4 = *(ecx_5[3] + (i_2 << 2))
                    uint8_t* lpBuffer
                    uint32_t nNumberOfBytesToWrite
                    uint32_t* lpNumberOfBytesWritten
                    
                    if (*lpBuffer_4 != 0)
                        if (WriteFile(*(arg1 + 0x30), &data_ac7bc1, 1, &arg2, nullptr) == 0)
                            return 0x8007000e
                        
                        int32_t var_20_1 = 0
                        lpNumberOfBytesWritten = &arg2
                        nNumberOfBytesToWrite = 4
                        lpBuffer = lpBuffer_4
                    label_485b75:
                        
                        if (WriteFile(*(arg1 + 0x30), lpBuffer, nNumberOfBytesToWrite, 
                                lpNumberOfBytesWritten, nullptr) == 0)
                            return 0x8007000e
                        
                        ecx_5 = ecx_1
                    else if (*(lpBuffer_4 + 4) != 0)
                        if (WriteFile(*(arg1 + 0x30), &data_ac7bc0, 1, &arg2, nullptr) == 0)
                            return 0x8007000e
                        
                        uint8_t* lpBuffer_6 = *(lpBuffer_4 + 4)
                        char* lpBuffer_7 = lpBuffer_6
                        void* edx_1
                        
                        do
                            edx_1.b = *lpBuffer_7
                            lpBuffer_7 = &lpBuffer_7[1]
                        while (edx_1.b != 0)
                        int32_t var_20_2 = 0
                        lpNumberOfBytesWritten = &arg2
                        nNumberOfBytesToWrite = lpBuffer_7 - &lpBuffer_7[1] + 1
                        lpBuffer = lpBuffer_6
                        goto label_485b75
                    i_2 += 1
                while (i_2 u< *ecx_5)
        
        BOOL eax_13 = WriteFile(*(arg1 + 0x30), &data_ac7bbf, 1, &arg2, nullptr)
        int32_t eax_14 = neg.d(eax_13)
        return (sbb.d(eax_14, eax_14, eax_13 != 0) & 0x7ff8fff2) - 0x7ff8fff2

return 0x8007000e
