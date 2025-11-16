// 函数: sub_4c35d0
// 地址: 0x4c35d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_641b54, 0xffffffff)

if (data_641b5c != 0)
    void* ebx_1 = &data_208cd50
    int32_t i_1 = 0
    int32_t i
    
    do
        int32_t eax_1 = 0
        int32_t var_c_1 = 0
        
        for (int32_t j = 0; j s< 7; j += 1)
            if (*(ebx_1 + (j << 2) + 0x2c) != 0)
                void* eax_3 = ebx_1 + j * 0x28
                void* edi_1 = eax_3 + 0x64
                
                if (*(eax_3 + 0x6c) != 0xff)
                    int32_t eax_4 = *(edi_1 + 0x24)
                    int32_t ecx_1
                    
                    if (eax_4 == 1)
                        ecx_1 = data_1392710
                    else if (eax_4 == 2)
                        ecx_1 = data_1392ccc
                    else
                        ecx_1 = data_131310c
                    
                    *(edi_1 + 0x1c) += ecx_1 - *(edi_1 + 0x18)
                    int32_t edx_1 = *(edi_1 + 0x1c)
                    *(edi_1 + 0x18) = ecx_1
                    sub_4d1fd0(edi_1, edx_1)
                
                int32_t eax_9 = *(eax_3 + 0x68)
                int32_t ecx_3 = *edi_1
                
                if (eax_9 != ecx_3)
                    *(ebx_1 + (j << 2) + 0x48) = eax_9
                else
                    if (j == 5 && *(ebx_1 + 0x12c) == 0)
                        var_c_1 = 1
                    
                    *(ebx_1 + (j << 2) + 0x48) = ecx_3
                    *(ebx_1 + (j << 2) + 0x2c) = 0
                
                eax_1 = 1
        
        if (eax_1 != 0)
            sub_4c33a0(i_1)
        
        if (var_c_1 != 0)
            sub_4c29d0(i_1)
        
        i = i_1 + 1
        ebx_1 += 0x180
        i_1 = i
    while (i s< 0x40)

return ReleaseSemaphore(data_641b54, 1, nullptr)
