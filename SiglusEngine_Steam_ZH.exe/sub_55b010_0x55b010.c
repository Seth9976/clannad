// 函数: sub_55b010
// 地址: 0x55b010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg3
void** ebx = arg1
int32_t result = ebx[4]

if (edx == 0)
    if (result u> 0xffffffff)
        return 0xffffffff
    
    return result

if (edx u<= result)
    int32_t eax = result - edx
    
    if (eax u> 0xffffffff)
        eax = 0xffffffff
    
    void** ecx
    
    if (ebx[5] u< 8)
        ecx = ebx
    else
        ecx = *ebx
    
    void* edi_1 = ecx + (eax << 1)
    int16_t* ecx_1 = arg2
    uint32_t eax_1 = zx.d(*ecx_1)
    uint32_t var_8_1 = eax_1
    
    while (true)
        if (*edi_1 == eax_1.w)
            int32_t esi_1 = edx
            int16_t* edx_1 = ecx_1
            void* eax_2 = edi_1
            int16_t temp1_1
            
            if (arg3 u> 0)
                while (true)
                    ecx_1.w = *eax_2
                    temp1_1 = *edx_1
                    
                    if (ecx_1.w != temp1_1)
                        break
                    
                    eax_2 += 2
                    edx_1 = &edx_1[1]
                    int32_t temp3_1 = esi_1
                    esi_1 -= 1
                    
                    if (temp3_1 == 1)
                        goto label_55b082
            
            if (arg3 u<= 0 || (sbb.d(eax_2, eax_2, ecx_1.w u< temp1_1) & 0xfffffffe) == 0xffffffff)
            label_55b082:
                
                if (ebx[5] u>= 8)
                    ebx = *ebx
                
                return (edi_1 - ebx) s>> 1
        
        if (edi_1 == sub_52e3b0(ebx))
            break
        
        edx = arg3
        edi_1 -= 2
        eax_1 = var_8_1
        ecx_1 = arg2

return 0xffffffff
