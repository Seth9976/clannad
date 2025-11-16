// 函数: sub_4c20e0
// 地址: 0x4c20e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_c = 0

do
    WaitForSingleObject(data_641b54, 0xffffffff)
    int32_t ebx_1
    
    if (data_641b5c == 0)
        ebx_1 = 0xffffffff
    else
        int32_t var_8_1 = 0
        int32_t i = 0
        int32_t* esi_1 = &data_208cd58
        
        do
            int32_t* ecx_1 = *esi_1
            
            if (ecx_1 == 0 || esi_1[-1] == 0 || esi_1[-2] != 1)
                ebx_1 = var_8_1
            else
                char var_10
                int32_t eax_2 = (*(*ecx_1 + 0x24))(ecx_1, &var_10)
                
                if ((var_10 & 1) == 0 || eax_2 != 0)
                    sub_4c29d0(i)
                    ebx_1 = var_8_1
                else
                    sub_4c1d40(&esi_1[-2])
                    int32_t edx_2
                    
                    if (data_641b5c == 0)
                        edx_2 = 0
                    else
                        int32_t* eax_3 = *esi_1
                        int32_t var_14
                        (*(*eax_3 + 0x10))(eax_3, &var_14, 0)
                        int32_t ecx_4 = esi_1[2]
                        int32_t edx_1 = var_14
                        
                        if (ecx_4 s< edx_1)
                            edx_2 = edx_1 - ecx_4
                        else if (ecx_4 s<= edx_1)
                            edx_2 = 0
                        else
                            edx_2 = edx_1 + esi_1[1] - ecx_4
                    
                    if (*(esi_1[-1] + 0x39c) != 0 || edx_2 s>= esi_1[1] s>> 3)
                        sub_4c1f20(&esi_1[-2], edx_2)
                    
                    if (sub_4c2030(&esi_1[-2]) != 0)
                        sub_4c29d0(i)
                        ebx_1 = var_8_1
                    else
                        ebx_1 = 1
                        var_8_1 = 1
            
            i += 1
            esi_1 = &esi_1[0x60]
        while (i s< 0x40)
        
        if (ebx_1 != 0)
            var_c = 0
        else
            uint32_t eax_10 = timeGetTime()
            
            if (var_c == 0)
                var_c = eax_10
            else if (eax_10 - var_c s>= 0x3e8 && data_641b44 == ebx_1 && data_641b5c != ebx_1)
                int32_t* eax_12 = data_641b58
                char var_18
                
                if ((*(*eax_12 + 0x24))(eax_12, &var_18) == 0 && (var_18 & 1) != 0)
                    int32_t* ecx_9 = data_641b40
                    
                    if (ecx_9 != 0)
                        (*(*ecx_9 + 0x48))(ecx_9)
                        int32_t* eax_15 = data_641b40
                        (*(*eax_15 + 8))(eax_15)
                        data_641b40 = ebx_1
                    
                    int32_t* eax_16 = data_641b58
                    (*(*eax_16 + 0x48))(eax_16)
    
    ReleaseSemaphore(data_641b54, 1, nullptr)
    uint32_t dwMilliseconds
    
    if (ebx_1 == 0xffffffff)
        dwMilliseconds = 0x3e8
    else if (ebx_1 != 0)
        dwMilliseconds = 0x64
    else
        dwMilliseconds = 0x12c
    
    Sleep(dwMilliseconds)
while (data_641b48 == 0)

ExitThread(1)
noreturn
