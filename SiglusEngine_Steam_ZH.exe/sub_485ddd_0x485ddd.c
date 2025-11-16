// 函数: sub_485ddd
// 地址: 0x485ddd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_28 = edi
int32_t var_18 = 0
uint32_t numberOfBytesWritten = 0

if (WriteFile(*(arg1 + 0x30), arg2 + 8, 0x10, &numberOfBytesWritten, nullptr) != 0)
    uint8_t* lpBuffer_1 = *(arg2 + 4)
    char* lpBuffer_4 = lpBuffer_1
    void* edx_1
    
    do
        edx_1.b = *lpBuffer_4
        lpBuffer_4 = &lpBuffer_4[1]
    while (edx_1.b != 0)
    
    if (WriteFile(*(arg1 + 0x30), lpBuffer_1, lpBuffer_4 - &lpBuffer_4[1] + 1, 
            &numberOfBytesWritten, nullptr) != 0)
        int32_t* edi_2 = *(arg2 + 0x1c)
        
        if (edi_2 != 0)
            int32_t i = 0
            
            if (*edi_2 u> 0)
                do
                    if (WriteFile(*(arg1 + 0x30), &data_ac7bc1, 1, &numberOfBytesWritten, nullptr)
                            == 0)
                        return 0x8007000e
                    
                    int32_t eax_7 = sub_485a67(arg1, *(edi_2[3] + (i << 2)))
                    var_18 = eax_7
                    
                    if (eax_7 s< 0)
                        return eax_7
                    
                    i += 1
                while (i u< *edi_2)
        
        if (WriteFile(*(arg1 + 0x30), &data_ac7bbf, 1, &numberOfBytesWritten, nullptr) != 0)
            if (*(arg2 + 0x24) != 0)
                int32_t* eax_12 = *(arg2 + 0x20)
                int32_t* var_14_2 = eax_12
                
                if (eax_12 != 0)
                    arg2 = nullptr
                    
                    if (*eax_12 u> 0)
                        while (true)
                            int32_t* eax_15 = *(eax_12[3] + (arg2 << 2))
                            uint8_t* lpBuffer_8 = &eax_15[1]
                            int32_t i_1 = 4
                            bool cond:5_1 = true
                            uint8_t* lpBuffer_3 = lpBuffer_8
                            int128_t* const edi_4 = &data_aac190
                            uint32_t* lpNumberOfBytesWritten = &numberOfBytesWritten
                            
                            while (i_1 != 0)
                                int32_t temp1_1 = *lpBuffer_8
                                int32_t temp2_1 = *edi_4
                                cond:5_1 = temp1_1 == temp2_1
                                lpBuffer_8 = &lpBuffer_8[4]
                                edi_4 += 4
                                i_1 -= 1
                                
                                if (temp1_1 != temp2_1)
                                    break
                            
                            uint8_t* lpBuffer
                            uint32_t nNumberOfBytesToWrite
                            uint32_t* lpNumberOfBytesWritten_1
                            
                            if (cond:5_1)
                                if (WriteFile(*(arg1 + 0x30), &data_ac7bc0, 1, 
                                        lpNumberOfBytesWritten, nullptr) == 0)
                                    return 0x8007000e
                                
                                uint8_t* lpBuffer_6 = *eax_15
                                char* lpBuffer_7 = lpBuffer_6
                                char i_2
                                
                                do
                                    i_2 = *lpBuffer_7
                                    lpBuffer_7 = &lpBuffer_7[1]
                                while (i_2 != 0)
                                int32_t var_2c_3 = 0
                                lpNumberOfBytesWritten_1 = &numberOfBytesWritten
                                nNumberOfBytesToWrite = lpBuffer_7 - &lpBuffer_7[1] + 1
                                lpBuffer = lpBuffer_6
                            else
                                if (WriteFile(*(arg1 + 0x30), &data_ac7bc1, 1, 
                                        lpNumberOfBytesWritten, nullptr) == 0)
                                    return 0x8007000e
                                
                                uint8_t* lpBuffer_2 = *eax_15
                                char* lpBuffer_5 = lpBuffer_2
                                char i_3
                                
                                do
                                    i_3 = *lpBuffer_5
                                    lpBuffer_5 = &lpBuffer_5[1]
                                while (i_3 != 0)
                                
                                if (WriteFile(*(arg1 + 0x30), lpBuffer_2, 
                                        lpBuffer_5 - &lpBuffer_5[1] + 1, &numberOfBytesWritten, 
                                        nullptr) == 0)
                                    return 0x8007000e
                                
                                int32_t var_2c_2 = 0
                                lpNumberOfBytesWritten_1 = &numberOfBytesWritten
                                nNumberOfBytesToWrite = 0x10
                                lpBuffer = lpBuffer_3
                            
                            if (WriteFile(*(arg1 + 0x30), lpBuffer, nNumberOfBytesToWrite, 
                                    lpNumberOfBytesWritten_1, nullptr) == 0)
                                return 0x8007000e
                            
                            arg2 += 1
                            
                            if (arg2 u>= *var_14_2)
                                break
                            
                            eax_12 = var_14_2
                
                if (WriteFile(*(arg1 + 0x30), &data_ac7bbf, 1, &numberOfBytesWritten, nullptr) == 0)
                    return 0x8007000e
                
                return var_18
            
            if (WriteFile(*(arg1 + 0x30), &data_ac7bbe, 1, &numberOfBytesWritten, nullptr) != 0)
                return var_18

return 0x8007000e
