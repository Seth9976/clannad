// 函数: sub_42d0b4
// 地址: 0x42d0b4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax
int32_t edx
eax, edx = sub_42cbde(arg2)
int32_t* eax_1 = arg1 + (eax << 2) + 0x6c

if (*eax_1 != 0)
    int32_t ebx
    int32_t var_c_1 = ebx
    int32_t edi
    int32_t var_10_1 = edi
    
    while (true)
        int32_t* ecx = *eax_1
        char* esi_1 = *ecx
        char* edi_1 = arg2
        
        while (true)
            ebx.b = *edi_1
            edx.b = ebx.b
            char temp1_1 = *esi_1
            bool c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                if (edx.b == 0)
                    edx = 0
                    break
                
                ebx.b = edi_1[1]
                edx.b = ebx.b
                char temp5_1 = esi_1[1]
                c_1 = ebx.b u< temp5_1
                
                if (ebx.b == temp5_1)
                    edi_1 = &edi_1[2]
                    esi_1 = &esi_1[2]
                    
                    if (edx.b != 0)
                        continue
                    
                    edx = 0
                    break
            
            bool c_2 = unimplemented  {sbb edx, edx}
            edx = sbb.d(sbb.d(edx, edx, c_1), 0xffffffff, c_2)
            break
        
        if (edx s< 0)
            break
        
        if (edx == 0)
            void* ecx_1 = *eax_1
            *eax_1 = *(ecx_1 + 0xc)
            *(ecx_1 + 0xc) = 0
            sub_42b93a(ecx_1, 1)
            break
        
        eax_1 = &ecx[3]
        
        if (*eax_1 == 0)
            break

return 0
