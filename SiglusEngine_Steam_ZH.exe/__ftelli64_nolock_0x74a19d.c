// 函数: __ftelli64_nolock
// 地址: 0x74a19d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x1024)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t numberOfBytesRead_1 = __fileno(arg1)
uint32_t numberOfBytesRead = numberOfBytesRead_1

if (arg1[1] s< 0)
    arg1[1] = 0

void* result_1
int32_t edx
result_1, edx = __lseeki64(numberOfBytesRead_1, 0, 0, FILE_CURRENT)
int32_t var_1010 = edx
void* result

if (edx s> 0 || (edx s>= 0 && result_1 u>= 0))
    int32_t eax_3 = numberOfBytesRead_1 s>> 5
    int32_t ecx_3 = (numberOfBytesRead_1 & 0x1f) << 6
    int32_t var_1018_1 = eax_3
    eax_3.b = *((&data_b95720)[eax_3] + ecx_3 + 0x24)
    eax_3.b *= 2
    eax_3.b s>>= 1
    char var_1009_1 = eax_3.b
    void* result_3 = result_1
    
    if ((arg1[3] & 0x108) != 0)
        int32_t edi_3 = *arg1
        void* result_2 = edi_3 - arg1[2]
        
        if ((arg1[3].b & 3) != 0)
            if (var_1009_1 == 1)
                result = result_1
            
            if (var_1009_1 != 1 || *((&data_b95720)[var_1018_1] + ecx_3 + 0x30) == 0)
                edx = var_1010
                result_3 = result_1
                
                if ((*((&data_b95720)[var_1018_1] + ecx_3 + 4) & 0x80) != 0)
                    for (char* i = arg1[2]; i u< edi_3; i = &i[1])
                        if (*i == 0xa)
                            result_2 += 1
                
                goto label_74a3ee
            
            uint32_t i_1 = result_2 u>> 1
            
            if (arg1[1] != 0)
                uint32_t numberOfBytesRead_3 = numberOfBytesRead
                int32_t eax_7 = (&data_b95720)[var_1018_1]
                int32_t eax_8
                int32_t edx_7
                eax_8, edx_7 = __lseeki64(numberOfBytesRead_3, *(eax_7 + ecx_3 + 0x28), 
                    *(eax_7 + ecx_3 + 0x2c), FILE_BEGIN)
                int32_t var_1020_1 = edx_7
                int32_t* ecx_6 = (&data_b95720)[var_1018_1]
                uint8_t buffer[0xfe4]
                
                if (eax_8 != ecx_6[(numberOfBytesRead_1 & 0x1f) * 0x10 + 0xa]
                        || edx_7 != ecx_6[(numberOfBytesRead_1 & 0x1f) * 0x10 + 0xb])
                    result = 0xffffffff
                else if (ReadFile(ecx_6[(numberOfBytesRead_1 & 0x1f) * 0x10], &buffer, 0x1000, 
                        &numberOfBytesRead, nullptr) == 0)
                    result = 0xffffffff
                else
                    int32_t eax_12
                    int32_t edx_8
                    eax_12, edx_8 = __lseeki64(numberOfBytesRead_3, result_1, var_1010, FILE_BEGIN)
                    
                    if (edx_8 s> 0 || (edx_8 s>= 0 && eax_12 u>= 0))
                        uint32_t numberOfBytesRead_2 = numberOfBytesRead
                        
                        if (i_1 u> numberOfBytesRead_2)
                            result = 0xffffffff
                        else
                            uint32_t ecx_8 = &buffer
                            
                            if (i_1 != 0)
                                void* edx_9 = &buffer[numberOfBytesRead_2]
                                
                                do
                                    i_1 -= 1
                                    
                                    if (ecx_8 u>= edx_9)
                                        break
                                    
                                    numberOfBytesRead_2.b = *ecx_8
                                    
                                    if (numberOfBytesRead_2.b != 0xd)
                                        ecx_8 += sx.d(*(zx.d(numberOfBytesRead_2.b) + 0xb4cee0))
                                    else if (ecx_8 u< edx_9 - 1 && *(ecx_8 + 1) == 0xa)
                                        ecx_8 += 1
                                    
                                    ecx_8 += 1
                                while (i_1 != 0)
                            
                            result = ecx_8 - &buffer + eax_8
                    else
                        result = 0xffffffff
        else if ((arg1[3].b & 0x80) != 0)
        label_74a3ee:
            
            if ((result_3 | edx) != 0)
                if ((arg1[3].b & 1) == 0)
                    goto label_74a553
                
                if (arg1[1] != 0)
                    uint32_t edi_7 = edi_3 - arg1[2] + arg1[1]
                    int32_t edx_14 = var_1010
                    void* result_4 = result_1
                    
                    if ((*((&data_b95720)[var_1018_1] + ecx_3 + 4) & 0x80) == 0)
                    label_74a53d:
                        
                        if (var_1009_1 == 1)
                            edi_7 u>>= 1
                        
                        result_3 = result_4 - edi_7
                        var_1010 = sbb.d(edx_14, 0, result_4 u< edi_7)
                        goto label_74a553
                    
                    int32_t eax_17
                    int32_t edx_15
                    eax_17, edx_15 = __lseeki64(numberOfBytesRead, 0, 0, FILE_END)
                    edx_14 = var_1010
                    bool cond:9_1
                    
                    if (eax_17 == result_1 && edx_15 == edx_14)
                        int32_t eax_19 = arg1[2] + edi_7
                        int32_t eax_22 =
                            not.d(sbb.d(eax_19, eax_19, eax_19 u< arg1[2])) & (eax_19 - arg1[2])
                        
                        if (eax_22 u> 0)
                            char* eax_23 = arg1[2]
                            int32_t ecx_17 = 0
                            
                            do
                                if (*eax_23 == 0xa)
                                    edi_7 += 1
                                
                                eax_23 = &eax_23[1]
                                ecx_17 += 1
                            while (ecx_17 u< eax_22)
                        
                        cond:9_1 = (arg1[3] & 0x2000) == 0
                        goto label_74a52d
                    
                    int32_t eax_24
                    int32_t edx_16
                    eax_24, edx_16 = __lseeki64(numberOfBytesRead, result_1, edx_14, FILE_BEGIN)
                    
                    if (edx_16 s> 0 || (edx_16 s>= 0 && eax_24 u>= 0))
                        if (edi_7 u> 0x200 || (arg1[3].b & 8) == 0)
                            edi_7 = arg1[6]
                        else
                            edi_7 = 0x200
                            
                            if ((arg1[3] & 0x400) != 0)
                                edi_7 = arg1[6]
                        
                        edx_14 = var_1010
                        cond:9_1 = (*((&data_b95720)[var_1018_1] + ecx_3 + 4) & 4) == 0
                    label_74a52d:
                        result_4 = result_1
                        
                        if (not(cond:9_1))
                            edi_7 += 1
                        
                        goto label_74a53d
                    
                    result = 0xffffffff
                else
                    result_2 = nullptr
                label_74a553:
                    
                    if (var_1009_1 == 1)
                        result_2 u>>= 1
                    
                    result = result_3 + result_2
            else
                result = result_2
        else
            *__errno() = 0x16
            result = 0xffffffff
    else
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(arg1[1])
        result = result_1 - eax_5
else
    result = 0xffffffff

int32_t entry_ebx
sub_745f2b(entry_ebx ^ &__saved_ebp)
return result
