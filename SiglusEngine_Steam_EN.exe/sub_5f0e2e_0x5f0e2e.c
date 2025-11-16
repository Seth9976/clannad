// 函数: sub_5f0e2e
// 地址: 0x5f0e2e
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x1028)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t var_1018 = arg2
void* result

if (arg2 != 0)
    int32_t eax_3 = __fileno(arg2)
    
    if (arg2[1] s< 0)
        arg2[1] = 0
    
    void* result_1 = sub_5f4c94(eax_3, 0, FILE_CURRENT)
    
    if (result_1 s< 0)
        result = 0xffffffff
    else
        int32_t eax_5 = eax_3 s>> 5
        int32_t ecx_4 = (eax_3 & 0x1f) << 6
        int32_t eax_6 = arg2[3]
        char var_1028_1 = eax_6.b
        uint32_t i
        i.b = *(ecx_4 + (&data_640ff8)[eax_5] + 0x24)
        i.b *= 2
        i.b s>>= 1
        void* result_3 = result_1
        char var_1009_1 = i.b
        
        if ((eax_6 & 0x108) != 0)
            int32_t esi_2 = *arg2
            uint32_t numberOfBytesRead = arg2[2]
            uint32_t result_2 = esi_2 - numberOfBytesRead
            
            if ((var_1028_1 & 3) != 0)
                if (i.b != 1 || *(ecx_4 + (&data_640ff8)[eax_5] + 0x30) == 0)
                    result_3 = result_1
                    
                    if ((*(ecx_4 + (&data_640ff8)[eax_5] + 4) & 0x80) != 0)
                        for (i = numberOfBytesRead; i u< esi_2; i += 1)
                            if (*i == 0xa)
                                result_2 += 1
                        
                        i.b = var_1009_1
                    
                    goto label_5f1074
                
                uint32_t i_1 = result_2 u>> 1
                
                if (*(var_1018 + 4) != 0)
                    int32_t eax_9 = (&data_640ff8)[eax_5]
                    int32_t eax_10
                    int32_t edx_2
                    eax_10, edx_2 = __lseeki64(eax_3, *(ecx_4 + eax_9 + 0x28), 
                        *(ecx_4 + eax_9 + 0x2c), FILE_BEGIN)
                    int32_t eax_12 = (&data_640ff8)[eax_5]
                    uint8_t buffer[0xfe4]
                    
                    if (eax_10 != *(ecx_4 + eax_12 + 0x28) || edx_2 != *(ecx_4 + eax_12 + 0x2c))
                        result = 0xffffffff
                    else if (ReadFile(*(ecx_4 + eax_12), &buffer, 0x1000, &numberOfBytesRead, 
                            nullptr) == 0)
                        result = 0xffffffff
                    else if (sub_5f4c94(eax_3, result_1, FILE_BEGIN) s< 0)
                        result = 0xffffffff
                    else
                        uint32_t numberOfBytesRead_1 = numberOfBytesRead
                        
                        if (i_1 u> numberOfBytesRead_1)
                            result = 0xffffffff
                        else
                            uint32_t ecx_7 = &buffer
                            
                            if (i_1 != 0)
                                void* edx_3 = &buffer[numberOfBytesRead_1]
                                
                                do
                                    i_1 -= 1
                                    
                                    if (ecx_7 u>= edx_3)
                                        break
                                    
                                    numberOfBytesRead_1.b = *ecx_7
                                    
                                    if (numberOfBytesRead_1.b != 0xd)
                                        ecx_7 += sx.d(*(zx.d(numberOfBytesRead_1.b) + 0x63bd30))
                                    else if (ecx_7 u< edx_3 - 1 && *(ecx_7 + 1) == 0xa)
                                        ecx_7 += 1
                                    
                                    ecx_7 += 1
                                while (i_1 != 0)
                            
                            result = ecx_7 + eax_10 - &buffer
                else
                    result = result_1
            else if ((var_1028_1 & 0x80) != 0)
            label_5f1074:
                
                if (result_3 != 0)
                    if ((var_1028_1 & 1) == 0)
                        goto label_5f11a7
                    
                    if (*(var_1018 + 4) != 0)
                        uint32_t esi_6 = esi_2 - *(var_1018 + 8) + *(var_1018 + 4)
                        int32_t ebx_2 = 0
                        
                        if ((*(ecx_4 + (&data_640ff8)[eax_5] + 4) & 0x80) == 0)
                            result_3 = result_1 - esi_6
                            goto label_5f11a7
                        
                        bool cond:4_1
                        
                        if (sub_5f4c94(eax_3, 0, FILE_END) == result_1)
                            int32_t eax_22 = *(var_1018 + 8) + esi_6
                            int32_t eax_25 = not.d(sbb.d(eax_22, eax_22, eax_22 u< *(var_1018 + 8)))
                                & (eax_22 - *(var_1018 + 8))
                            
                            if (eax_25 u> 0)
                                char* eax_26 = *(var_1018 + 8)
                                
                                do
                                    if (*eax_26 == 0xa)
                                        esi_6 += 1
                                    
                                    eax_26 = &eax_26[1]
                                    ebx_2 += 1
                                while (ebx_2 u< eax_25)
                            
                            cond:4_1 = (*(var_1018 + 0xc) & 0x2000) == 0
                            goto label_5f118c
                        
                        int32_t eax_27
                        eax_27, i = sub_5f4c94(eax_3, result_1, FILE_BEGIN)
                        
                        if (eax_27 s>= 0)
                            if (esi_6 u> 0x200 || (*(var_1018 + 0xc) & 8) == 0)
                                esi_6 = *(var_1018 + 0x18)
                            else
                                esi_6 = 0x200
                                
                                if ((*(var_1018 + 0xc) & 0x400) != 0)
                                    esi_6 = *(var_1018 + 0x18)
                            
                            cond:4_1 = (*(ecx_4 + (&data_640ff8)[eax_5] + 4) & 4) == 0
                        label_5f118c:
                            
                            if (not(cond:4_1))
                                esi_6 += 1
                            
                            i.b = var_1009_1
                            
                            if (i.b == 1)
                                esi_6 u>>= 1
                            
                            result_3 = result_1 - esi_6
                            goto label_5f11a7
                        
                        result = 0xffffffff
                    else
                        result_3 = result_1
                        result_2 = 0
                    label_5f11a7:
                        
                        if (i.b == 1)
                            result_2 u>>= 1
                        
                        result = result_3 + result_2
                else
                    result = result_2
            else
                *__errno() = 0x16
                result = 0xffffffff
        else
            result = result_3 - arg2[1]
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

sub_5f02dd(arg1 ^ &__saved_ebp)
return result
