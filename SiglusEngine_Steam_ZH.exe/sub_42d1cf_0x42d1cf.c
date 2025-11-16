// 函数: sub_42d1cf
// 地址: 0x42d1cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
int32_t* edi_1 = arg2
int32_t* esi_1 = arg1 + (sub_42cbde(*edi_1) << 2) + 0x6c

if (*esi_1 != 0)
    int32_t ebx
    int32_t var_14_1 = ebx
    
    while (true)
        int32_t* ecx = *esi_1
        char* eax_1 = *ecx
        char* edi_2 = *edi_1
        int32_t eax_4
        
        while (true)
            ebx.b = *edi_2
            char temp1_1 = *eax_1
            bool c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                if (ebx.b == 0)
                    eax_4 = 0
                    break
                
                ebx.b = edi_2[1]
                char temp5_1 = eax_1[1]
                c_1 = ebx.b u< temp5_1
                
                if (ebx.b == temp5_1)
                    edi_2 = &edi_2[2]
                    eax_1 = &eax_1[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    eax_4 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_4 = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
            break
        
        edi_1 = arg2
        
        if (eax_4 s< 0)
            break
        
        if (eax_4 == 0)
            if (sub_42cc15(*esi_1, edi_1) == 0)
                int32_t var_18_2 = *edi_1
                sub_42ac7a(arg1 + 0x18, arg1 + 0x278, 0x5ef, "'%s' : macro redefinition")
            
            void* ecx_2 = *esi_1
            *esi_1 = *(ecx_2 + 0xc)
            *(ecx_2 + 0xc) = 0
            sub_42b93a(ecx_2, 1)
            break
        
        esi_1 = &ecx[3]
        
        if (*esi_1 == 0)
            break

edi_1[3] = *esi_1
*esi_1 = edi_1
return 0
