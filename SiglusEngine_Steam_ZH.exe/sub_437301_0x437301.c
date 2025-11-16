// 函数: sub_437301
// 地址: 0x437301
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_8 = ebx
int32_t edi
int32_t var_10 = edi
int32_t* esi_1 = arg1 + 0x1c
void* edi_2 = *(arg2 + 0x14) + 0x10

if (*esi_1 != 0)
    while (true)
        int32_t eax_1 = *esi_1
        char* ecx_1 = *(edi_2 + 8)
        char* eax_2 = *(eax_1 + 0x10)
        int32_t eax_5
        
        while (true)
            ebx.b = *ecx_1
            char temp1_1 = *eax_2
            bool c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                if (ebx.b == 0)
                    eax_5 = 0
                    break
                
                ebx.b = ecx_1[1]
                char temp5_1 = eax_2[1]
                c_1 = ebx.b u< temp5_1
                
                if (ebx.b == temp5_1)
                    ecx_1 = &ecx_1[2]
                    eax_2 = &eax_2[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    eax_5 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_5 = sbb.d(sbb.d(eax_2, eax_2, c_1), 0xffffffff, c_2)
            break
        
        if (eax_5 s>= 0)
            if (eax_5 s<= 0)
                break
            
            esi_1 = eax_1 + 0xc
        else
            esi_1 = eax_1 + 8
        
        if (*esi_1 == 0)
            break
    
    if (*esi_1 != 0)
        goto label_437393
    
    goto label_43736f

label_43736f:
void*** eax_6 = sub_42cfa1(0x18)
void*** eax_7

if (eax_6 == 0)
    eax_7 = nullptr
else
    eax_7 = sub_46b6a5(eax_6, *(edi_2 + 8), 0, 0, 0)

*esi_1 = eax_7

if (eax_7 != 0)
label_437393:
    void*** eax_8 = sub_42cfa1(0x14)
    uint32_t ebx_1 = 0
    void*** eax_9
    
    if (eax_8 == 0)
        eax_9 = nullptr
    else
        eax_9 = sub_46b602(eax_8, arg2, *(*esi_1 + 0x14), "Stmts")
    
    *(*esi_1 + 0x14) = eax_9
    
    if (eax_9 != 0)
        if (*(*(*esi_1 + 0x14) + 0xc) == 0)
            int32_t* edx_1 = esi_1
            
            if (*esi_1 != 0)
                while (true)
                    void* eax_12 = *edx_1
                    
                    if (eax_12 != 0)
                        int32_t ecx_7 = *(eax_12 + 8)
                        
                        if (ecx_7 != 0)
                            int32_t edi_3 = *(ecx_7 + 0xc)
                            *(ecx_7 + 0xc) = eax_12
                            *(eax_12 + 8) = edi_3
                            *edx_1 = ecx_7
                            continue
                    
                    edx_1 = eax_12 + 0xc
                    ebx_1 += 1
                    
                    if (*edx_1 == 0)
                        break
            
            while (true)
                ebx_1 u>>= 1
                
                if (ebx_1 == 0)
                    break
                
                int32_t* edx_2 = esi_1
                
                if (ebx_1 u> 0)
                    arg2 = ebx_1
                    uint32_t i
                    
                    do
                        void* ecx_8 = *edx_2
                        
                        if (ecx_8 != 0)
                            int32_t eax_13 = *(ecx_8 + 0xc)
                            
                            if (eax_13 != 0)
                                int32_t edi_4 = *(eax_13 + 8)
                                *(eax_13 + 8) = ecx_8
                                *(ecx_8 + 0xc) = edi_4
                                *edx_2 = eax_13
                        
                        edx_2 = *edx_2 + 0xc
                        i = arg2
                        arg2 -= 1
                    while (i != 1)
        
        return 0

return 0x8007000e
