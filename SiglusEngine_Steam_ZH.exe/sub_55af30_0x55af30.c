// 函数: sub_55af30
// 地址: 0x55af30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg4

if (ecx == 0 && arg3 u<= arg1[4])
    return arg3

int32_t ebx = arg1[4]

if (arg3 u< ebx)
    void* ebx_1 = ebx - arg3
    
    if (ecx u<= ebx_1)
        void* i_2 = ebx_1 + 1 - ecx
        int32_t eax_3 = arg1[5]
        int32_t* eax_4
        
        if (eax_3 u< 8)
            eax_4 = arg1
        else
            eax_4 = *arg1
        
        void* eax_5 = eax_4 + (arg3 << 1)
        
        while (true)
            arg3 = eax_5
            
            if (i_2 != 0)
                void* i_1 = i_2
                void* i
                
                do
                    if (*eax_5 == *arg2)
                        ecx = arg4
                        goto label_55afa7
                    
                    eax_5 += 2
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                ecx = arg4
            
            eax_5 = nullptr
        label_55afa7:
            
            if (eax_5 == 0)
                break
            
            if (ecx != 0)
                int16_t* edx_3 = arg2
                int32_t edi_1 = ecx
                void* esi_1 = eax_5
                int16_t temp2_1
                
                while (true)
                    ecx.w = *esi_1
                    temp2_1 = *edx_3
                    
                    if (ecx.w != temp2_1)
                        break
                    
                    esi_1 += 2
                    edx_3 = &edx_3[1]
                    int32_t temp4_1 = edi_1
                    edi_1 -= 1
                    
                    if (temp4_1 == 1)
                        goto label_55afcb
                
                if ((sbb.d(ecx, ecx, ecx.w u< temp2_1) & 0xfffffffe) != 0xffffffff)
                    i_2 += 0xffffffff - ((eax_5 - arg3) s>> 1)
                    ecx = arg4
                    eax_5 += 2
                    continue
            
        label_55afcb:
            int32_t* esi_2 = arg1
            
            if (eax_3 u>= 8)
                esi_2 = *esi_2
            
            return (eax_5 - esi_2) s>> 1

return 0xffffffff
