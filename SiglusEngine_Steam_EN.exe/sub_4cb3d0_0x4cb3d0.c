// 函数: sub_4cb3d0
// 地址: 0x4cb3d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

do
    WaitForSingleObject(data_702788, 0xffffffff)
    int32_t ebx_1 = 0
    
    for (void* i = &data_20af9e0; i s< 0x20be9e0; i += 0x3c0)
        if (*(i - 0x18c) != 0 && *(i - 0x190) == 3)
            if (*(i - 0x18c) != 0 && *(i - 0x190) == 3)
                int32_t* eax_1 = *(i - 0x184)
                void* i_1 = nullptr
                int32_t var_4c
                void var_48
                void var_44
                
                if ((*(*eax_1 + 0x20))(eax_1, &var_4c, &var_44, &var_48, 0) s< 0)
                label_4cb4a2:
                    
                    if (not(*(i - 8) f<= 0))
                        void* eax_5 = *(i - 0x17c)
                        i_1 = i
                        
                        if ((*(*eax_5 + 0x24))(eax_5, i_1) s>= 0 && not(*i f< *(i - 8)))
                            goto label_4cb4c8
                else
                    int32_t eax_3 = var_4c
                    
                    if (eax_3 != 1)
                        if (eax_3 == 2 || eax_3 == 3)
                            if (*(i - 0x190) == 3)
                                int32_t* eax_4 = *(i - 0x180)
                                (*(*eax_4 + 0x24))(eax_4)
                            
                            *(i - 0x144) = 0xff
                            
                            if (*(i + 0x14) == 0)
                                *(i - 0x190) = 1
                            else
                                sub_4caf70(i - 0x190)
                        
                        goto label_4cb4a2
                    
                label_4cb4c8:
                    int32_t eax_7 = *(i - 0x20)
                    
                    if (eax_7 != 1)
                        if (eax_7 s> 0)
                            *(i - 0x20) = eax_7 - 1
                        
                        if (*(i - 0x18c) != 0)
                            int32_t* eax_10 = *(i - 0x17c)
                            void* var_88_2
                            var_88_2.q = *(i - 0x10)
                            (*(*eax_10 + 0x20))(eax_10, var_88_2, i_1)
                    else
                        if (*(i - 0x190) == 3)
                            int32_t* eax_8 = *(i - 0x180)
                            (*(*eax_8 + 0x24))(eax_8)
                        
                        *(i - 0x144) = 0xff
                        
                        if (*(i + 0x14) == 0)
                            *(i - 0x190) = 1
                        else
                            sub_4caf70(i - 0x190)
            
            ebx_1 = 1
    
    ReleaseSemaphore(data_702788, 1, nullptr)
    uint32_t dwMilliseconds
    
    if (ebx_1 == 0)
        data_1c04204 = 0
        dwMilliseconds = 0x12c
    else
        data_1c04204 = 1
        dwMilliseconds = 0x64
    
    Sleep(dwMilliseconds)
while (data_70277c == 0)

ExitThread(1)
noreturn
