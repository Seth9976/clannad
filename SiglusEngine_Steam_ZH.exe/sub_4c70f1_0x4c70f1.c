// 函数: sub_4c70f1
// 地址: 0x4c70f1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *(arg3 + 0x14)
void* ebx = *(eax_1 + (arg1 << 2))
void* eax_2 = *(eax_1 + (arg2 << 2))
int32_t edi
int32_t var_10 = edi
void* edi_1 = *(ebx + 0x60)
void* const ecx_2 = *(edi_1 + 0x20)
void* const esi = &data_b0018c

if (ecx_2 == 0)
    ecx_2 = &data_b0018c

void* edx = *(*(eax_2 + 0x60) + 0x20)

if (edx != 0)
    esi = edx

int32_t ecx_5

while (true)
    void* eax_3
    eax_3.b = *ecx_2
    edx.b = eax_3.b
    char temp1_1 = *esi
    bool c_1 = eax_3.b u< temp1_1
    
    if (eax_3.b == temp1_1)
        if (edx.b == 0)
            ecx_5 = 0
            break
        
        eax_3.b = *(ecx_2 + 1)
        edx.b = eax_3.b
        char temp5_1 = *(esi + 1)
        c_1 = eax_3.b u< temp5_1
        
        if (eax_3.b == temp5_1)
            ecx_2 += 2
            esi += 2
            
            if (edx.b != 0)
                continue
            
            ecx_5 = 0
            break
    
    bool c_2 = unimplemented  {sbb ecx, ecx}
    ecx_5 = sbb.d(sbb.d(ecx_2, ecx_2, c_1), 0xffffffff, c_2)
    break

if (ecx_5 s<= 0)
    if (ecx_5 s< 0)
        return 0xffffffff
    
    char* esi_2 = *(*(*(eax_2 + 0x60) + 0x14) + 0x18)
    void* ecx_6 = *(*(edi_1 + 0x14) + 0x18)
    int32_t ecx_9
    
    while (true)
        void* eax_7
        eax_7.b = *ecx_6
        edx.b = eax_7.b
        char temp6_1 = *esi_2
        bool c_3 = eax_7.b u< temp6_1
        
        if (eax_7.b == temp6_1)
            if (edx.b == 0)
                ecx_9 = 0
                break
            
            eax_7.b = *(ecx_6 + 1)
            edx.b = eax_7.b
            char temp10_1 = esi_2[1]
            c_3 = eax_7.b u< temp10_1
            
            if (eax_7.b == temp10_1)
                ecx_6 += 2
                esi_2 = &esi_2[2]
                
                if (edx.b != 0)
                    continue
                
                ecx_9 = 0
                break
        
        bool c_4 = unimplemented  {sbb ecx, ecx}
        ecx_9 = sbb.d(sbb.d(ecx_6, ecx_6, c_3), 0xffffffff, c_4)
        break
    
    if (ecx_9 s<= 0)
        if (ecx_9 s< 0)
            return 0xffffffff
        
        int32_t ecx_10 = *(eax_2 + 0x60)
        
        if (edi_1 u<= ecx_10)
            if (edi_1 u< ecx_10)
                return 0xffffffff
            
            int32_t ecx_11 = *(ebx + 0x74)
            int32_t edx_1 = *(eax_2 + 0x74)
            
            if (ecx_11 u< edx_1)
                return 0xffffffff
            
            if (ecx_11 u<= edx_1)
                int32_t ecx_12 = *(ebx + 0x10)
                int32_t edx_2 = *(eax_2 + 0x10)
                bool c_5 = edx_2 u< ecx_12
                
                if (edx_2 == ecx_12 || c_5)
                    return neg.d(sbb.d(eax_2, eax_2, c_5))
                
                return 0xffffffff

return 1
