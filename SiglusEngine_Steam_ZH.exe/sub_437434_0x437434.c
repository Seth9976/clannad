// 函数: sub_437434
// 地址: 0x437434
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_8 = ebx
int32_t edi
int32_t var_10 = edi
void* edi_1 = *(arg2 + 0x1c)

if (edi_1 != 0)
    while (true)
        char* eax_2 = *(edi_1 + 0x10)
        char* esi_1 = *(arg1 + 8)
        int32_t eax_5
        
        while (true)
            ebx.b = *esi_1
            char temp1_1 = *eax_2
            bool c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                if (ebx.b == 0)
                    eax_5 = 0
                    break
                
                ebx.b = esi_1[1]
                char temp5_1 = eax_2[1]
                c_1 = ebx.b u< temp5_1
                
                if (ebx.b == temp5_1)
                    esi_1 = &esi_1[2]
                    eax_2 = &eax_2[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    eax_5 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_5 = sbb.d(sbb.d(eax_2, eax_2, c_1), 0xffffffff, c_2)
            break
        
        if (eax_5 == 0)
            return *(edi_1 + 0x14)
        
        if (eax_5 s>= 0)
            edi_1 = *(edi_1 + 0xc)
        else
            edi_1 = *(edi_1 + 8)
        
        if (edi_1 == 0)
            break

return 0
