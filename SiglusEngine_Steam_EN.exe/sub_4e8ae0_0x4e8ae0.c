// 函数: sub_4e8ae0
// 地址: 0x4e8ae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
int32_t var_10 = esi
int32_t* edi = arg3

if (esi s> 0)
    if (esi != 1)
        int32_t edx = esi - 1
        int32_t* eax_2 = nullptr
        int32_t* var_14 = nullptr
        int32_t var_8 = edx
        
        if (edx s> 0)
            arg3 = &edi[5]
            int32_t* esi_1 = edi
            int32_t ebx_1 = 1
            void* var_c_1 = arg3
            
            do
                if (esi_1[1] s>= 2)
                    sub_4e73a0(eax_2, *esi_1, esi_1[1], esi_1[2], esi_1)
                    int32_t edx_2 = var_8
                    esi_1[1] = esi_1[3]
                    
                    if (ebx_1 s< edx_2)
                        void* ecx_2 = var_c_1
                        int32_t i_2 = edx_2 - ebx_1
                        int32_t i
                        
                        do
                            int32_t eax_4 = *(ecx_2 - 4)
                            ecx_2 += 8
                            *(ecx_2 - 0x14) = eax_4
                            *(ecx_2 - 0x10) = *(ecx_2 - 8)
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        edx_2 = var_8
                    
                    edx = edx_2 - 1
                    int32_t eax_7 = var_10 - 1
                    var_8 = edx
                    var_10 = eax_7
                    
                    if (eax_7 == 1)
                        goto label_4e8bf1
                    
                    esi_1 -= 8
                    eax_2 = var_14 - 1
                    ebx_1 -= 1
                    arg3 = var_c_1 - 8
                
                eax_2 += 1
                arg3 += 8
                esi_1 = &esi_1[2]
                var_14 = eax_2
                ebx_1 += 1
                var_c_1 = arg3
            while (eax_2 s< edx)
            
            esi = var_10
        
        void* esi_2 = esi - 1
        
        if (esi_2 s<= 0)
            return 0
        
        while (true)
            sub_4e73a0(eax_2, *edi, edi[1], edi[2], edi)
            edi[1] = edi[3]
            
            if (esi_2 s> 1)
                void* eax_10 = &edi[5]
                void* i_3 = esi_2 - 1
                void* i_1
                
                do
                    int32_t ecx_6 = *(eax_10 - 4)
                    eax_10 += 8
                    *(eax_10 - 0x14) = ecx_6
                    *(eax_10 - 0x10) = *(eax_10 - 8)
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            esi_2 -= 1
            eax_2 = esi_2 + 1
            
            if (eax_2 == 1)
                break
            
            if (esi_2 s<= 0)
                return 0
        
    label_4e8bf1:
        *arg4 = *edi
        return 1
    
    *arg4 = *edi

return 1
