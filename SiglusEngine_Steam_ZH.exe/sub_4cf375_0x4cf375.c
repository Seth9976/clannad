// 函数: sub_4cf375
// 地址: 0x4cf375
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = *(*(arg1 + 0x14) + (arg2 << 2))
int32_t edx = *(eax_1 + 0x54)
int32_t edi
int32_t var_10 = edi

if (edx != 0xffffffff && (*(arg1 + 0x6f) & 0x20) == 0)
    int32_t eax_2 = *(eax_1 + 0x58)
    
    if (edx u<= eax_2)
        int32_t* eax_4 = *(arg1 + 0x18) + (edx << 2)
        
        do
            int32_t* ecx = *eax_4
            
            if ((*ecx & 0xf0000000) == 0x60000000)
                int32_t esi_3 = ecx[1]
                int32_t edi_1 = 0
                
                if (esi_3 u> 0)
                    int32_t* ecx_1 = ecx[2]
                    
                    do
                        if (*ecx_1 == arg2)
                            return 1
                        
                        edi_1 += 1
                        ecx_1 = &ecx_1[1]
                    while (edi_1 u< esi_3)
            
            edx += 1
            eax_4 = &eax_4[1]
        while (edx u<= eax_2)

return 0
