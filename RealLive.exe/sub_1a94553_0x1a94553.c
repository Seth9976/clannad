// 函数: sub_1a94553
// 地址: 0x1a94553
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

sub_1a976dc(0x19)
uint32_t CodePage = sub_1a94700(arg1)
int32_t result

if (CodePage != data_1c09058)
    if (CodePage == 0)
    label_1a946df:
        sub_1a9477d()
    else
        void* edx_1 = nullptr
        void* eax = &data_1bf9d98
        
        while (true)
            if (*eax == CodePage)
                void* i = nullptr
                int32_t esi_2 = edx_1 * 0x30
                *__builtin_memset(0x1c091e0, 0, 0x100) = 0
                char* ebx_1 = esi_2 + 0x1bf9da8
                
                do
                    char* ecx_2 = ebx_1
                    
                    if (*ebx_1 != 0)
                        do
                            edx_1.b = ecx_2[1]
                            
                            if (edx_1.b == 0)
                                break
                            
                            uint32_t eax_2 = zx.d(*ecx_2)
                            uint32_t edi_5 = zx.d(edx_1.b)
                            
                            if (eax_2 u<= edi_5)
                                edx_1.b = *(i + 0x1bf9d90)
                                
                                do
                                    *(eax_2 + 0x1c091e1) |= edx_1.b
                                    eax_2 += 1
                                while (eax_2 u<= edi_5)
                            
                            ecx_2 = &ecx_2[2]
                        while (*ecx_2 != 0)
                    
                    i += 1
                    ebx_1 = &ebx_1[8]
                while (i u< 4)
                
                data_1c090dc = 1
                data_1c09058 = CodePage
                int32_t eax_4 = sub_1a9474a(CodePage)
                data_1c090d0 = *(esi_2 + 0x1bf9d9c)
                void* edi_6 = &data_1c090d4
                void* esi_4 = esi_2 + 0x1bf9da0
                *edi_6 = *esi_4
                data_1c092e4 = eax_4
                *(edi_6 + 4) = *(esi_4 + 4)
                break
            
            eax += 0x30
            edx_1 += 1
            
            if (eax u>= 0x1bf9e88)
                CPINFO cPInfo
                BOOL eax_1
                uint32_t edx_2
                eax_1, edx_2 = GetCPInfo(CodePage, &cPInfo)
                
                if (eax_1 != 1)
                    if (data_1c07714 != 0)
                        goto label_1a946df
                    
                    result = 0xffffffff
                    goto label_1a946f3
                
                data_1c092e4 = 0
                bool cond:2_1 = cPInfo.MaxCharSize u<= 1
                *__builtin_memset(0x1c091e0, 0, 0x100) = 0
                data_1c09058 = CodePage
                
                if (cond:2_1)
                    data_1c090dc = 0
                else
                    if (cPInfo.LeadByte[0] != 0)
                        var_15
                        void* ecx_1 = &var_15
                        
                        do
                            edx_2.b = *ecx_1
                            
                            if (edx_2.b == 0)
                                break
                            
                            for (uint32_t i_1 = zx.d(*(ecx_1 - 1)); i_1 u<= zx.d(edx_2.b); i_1 += 1)
                                *(i_1 + 0x1c091e1) |= 4
                            
                            ecx_1 += 2
                        while (*(ecx_1 - 1) != 0)
                    
                    for (void* i_2 = 1; i_2 u< 0xff; i_2 += 1)
                        *(i_2 + 0x1c091e1) |= 8
                    
                    data_1c092e4 = sub_1a9474a(CodePage)
                    data_1c090dc = 1
                
                data_1c090d0 = 0
                void* edi_9 = &data_1c090d4
                *edi_9 = 0
                *(edi_9 + 4) = 0
                goto label_1a946e4
    
label_1a946e4:
    sub_1a947a6()

result = 0
label_1a946f3:
__unlock(0x19)
return result
