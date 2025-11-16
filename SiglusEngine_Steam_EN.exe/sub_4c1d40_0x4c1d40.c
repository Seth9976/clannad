// 函数: sub_4c1d40
// 地址: 0x4c1d40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (data_641b5c != 0 && arg1 != 0)
    int32_t* ecx = *(arg1 + 8)
    
    if (ecx != 0 && *(arg1 + 4) != 0)
        (*(*ecx + 0x10))(ecx, &var_8, 0)
        int32_t edx = *(arg1 + 0x1c)
        void* ecx_1 = var_8
        int32_t ecx_2
        
        if (edx s>= ecx_1)
            if (edx s> ecx_1)
                ecx_2 = ecx_1 + *(arg1 + 0xc) - edx
                goto label_4c1d94
            
            ecx_2 = 0
        else
            ecx_2 = ecx_1 - edx
        label_4c1d94:
            
            if (ecx_2 != 0)
                *(arg1 + 0x1c) += ecx_2
                int32_t eax_3 = *(arg1 + 0x1c)
                int32_t edx_1 = *(arg1 + 0xc)
                
                if (eax_3 s>= edx_1)
                    do
                        eax_3 -= edx_1
                    while (eax_3 s>= edx_1)
                    
                    *(arg1 + 0x1c) = eax_3
        
        void* edx_2 = *(arg1 + 4)
        
        if (*(edx_2 + 0x2e) == 0x10)
            ecx_2 s>>= 1
        
        *(arg1 + 0x20) += ecx_2
        
        if (*(arg1 + 0x24) == 0)
            int32_t eax_4 = *(arg1 + 0x20)
            int32_t ecx_3 = *(edx_2 + 0x38c)
            
            if (eax_4 s>= ecx_3)
                *(arg1 + 0x24) = 1
                *(arg1 + 0x20) = eax_4 - ecx_3
        
        if (*(arg1 + 0x24) == 1)
            int32_t eax_6 = *(arg1 + 0x20)
            
            for (int32_t i = *(edx_2 + 0x394); eax_6 s>= i; i = *(edx_2 + 0x394))
                eax_6 -= i
                *(arg1 + 0x20) = eax_6
        
        if (*(arg1 + 0x24) != 0)
            *(arg1 + 0x28) = *(edx_2 + 0x384) + *(arg1 + 0x20)
            return 
        
        *(arg1 + 0x28) = *(edx_2 + 0x380) + *(arg1 + 0x20)
        return 

*(arg1 + 0x28) = 0
