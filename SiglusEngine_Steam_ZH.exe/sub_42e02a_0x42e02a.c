// 函数: sub_42e02a
// 地址: 0x42e02a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t* eax = sub_745f3f(0x14)

if (eax == 0)
    arg2 = nullptr
else
    arg2 = sub_42b8f8(eax, arg2, 0, 0)

int32_t result

if (arg2 == 0)
label_42e294:
    result = 0x8007000e
else
    char* eax_2
    int32_t* ecx_2
    
    if (arg3 != 0)
        ecx_2 = *(arg1 + 0x26c)
        eax_2 = *ecx_2
    
    if (arg3 == 0 || eax_2 u>= ecx_2[1] || *eax_2 != 0x28)
    label_42e1f9:
        void* eax_14 = &arg2[2]
        
        while (true)
            void* eax_15 = *(arg1 + 0x64)
            
            if (eax_15 == 0)
                sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
            else
                __builtin_memcpy(arg1 + 0x278, eax_15 + 0x10, 0x20)
                *(arg1 + 0x64) = *(eax_15 + 0xc)
                *(eax_15 + 0xc) = 0
                void* eax_16 = *(arg1 + 0x26c)
                *(arg1 + 0x288) = *(eax_16 + 0x18)
                *(arg1 + 0x28c) = *(eax_16 + 0x1c)
            
            int32_t eax_19 = *(arg1 + 0x278)
            
            if (eax_19 == 0xc || eax_19 == 0xd)
                *(arg1 + 0x40) = 1
                sub_42d1cf(arg1, arg2)
                arg2 = nullptr
                result = 0
                break
            
            void*** eax_20 = sub_42cfa1(0x30)
            void*** eax_21
            
            if (eax_20 == 0)
                eax_21 = nullptr
            else
                eax_21 = sub_46b809(eax_20, arg1 + 0x278)
            
            *eax_14 = eax_21
            
            if (eax_21 == 0)
                goto label_42e294
            
            eax_14 = &eax_21[3]
            continue
    else
        arg3 = &arg2[1]
        sub_42b68f(ecx_2, *(arg1 + 0x298), arg1 + 0x278)
        
        while (true)
            sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
            
            if (*(arg1 + 0x278) == 9)
                void* i = arg2[1]
                
                while (i != 0)
                    char* esi_1 = *(i + 0x18)
                    char* edi_2 = *(arg1 + 0x280)
                    int32_t ecx_4
                    
                    while (true)
                        char edx_1 = *edi_2
                        ecx_4.b = edx_1
                        char temp1_1 = *esi_1
                        bool c_1 = edx_1 u< temp1_1
                        
                        if (edx_1 == temp1_1)
                            if (ecx_4.b == 0)
                                ecx_4 = 0
                                break
                            
                            edx_1 = edi_2[1]
                            ecx_4.b = edx_1
                            char temp4_1 = esi_1[1]
                            c_1 = edx_1 u< temp4_1
                            
                            if (edx_1 == temp4_1)
                                edi_2 = &edi_2[2]
                                esi_1 = &esi_1[2]
                                
                                if (ecx_4.b != 0)
                                    continue
                                
                                ecx_4 = 0
                                break
                        
                        bool c_2 = unimplemented  {sbb ecx, ecx}
                        ecx_4 = sbb.d(sbb.d(ecx_4, ecx_4, c_1), 0xffffffff, c_2)
                        break
                    
                    if (ecx_4 == 0)
                        int32_t var_14_3 = *(arg1 + 0x280)
                        sub_42aba3(arg1 + 0x18, arg1 + 0x278, 0x5e7, 
                            "duplicate macro parameter '%s'")
                        break
                    
                    i = *(i + 0xc)
                
                void*** eax_9 = sub_42cfa1(0x30)
                void*** eax_10
                
                if (eax_9 == 0)
                    eax_10 = nullptr
                else
                    eax_10 = sub_46b809(eax_9, arg1 + 0x278)
                
                *arg3 = eax_10
                
                if (eax_10 == 0)
                    goto label_42e294
                
                arg3 = &eax_10[3]
                sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
                
                if (*(arg1 + 0x278) == 1)
                    void* edi_5 = arg1 + 0x280
                    void* const esi_3 = &data_af33a0
                    int32_t i_1 = 2
                    bool cond:4_1 = true
                    
                    while (i_1 != 0)
                        char temp5_1 = *esi_3
                        char temp6_1 = *edi_5
                        cond:4_1 = temp5_1 == temp6_1
                        esi_3 += 1
                        edi_5 += 1
                        i_1 -= 1
                        
                        if (temp5_1 != temp6_1)
                            break
                    
                    if (cond:4_1)
                        continue
                    else
                        void* edi_6 = arg1 + 0x280
                        wchar32 const* const esi_4 = U")(;:"
                        int32_t i_2 = 2
                        bool cond:6_1 = true
                        
                        while (i_2 != 0)
                            char temp7_1 = *esi_4
                            char temp8_1 = *edi_6
                            cond:6_1 = temp7_1 == temp8_1
                            esi_4 += 1
                            edi_6 += 1
                            i_2 -= 1
                            
                            if (temp7_1 != temp8_1)
                                break
                        
                        if (cond:6_1)
                            goto label_42e1f9
            
            int32_t ecx_9 = *(arg1 + 0x278)
            
            if (ecx_9 == 0xc || ecx_9 == 0xd)
                *(arg1 + 0x40) = 1
            
            sub_42ae08(arg1 + 0x18, 0x5dc, arg1 + 0x278)
            *(arg1 + 0x44) = 1
            result = 0x80004005
            break

if (arg2 != 0)
    sub_42b93a(arg2, 1)

return result
