// 函数: sub_432dde
// 地址: 0x432dde
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_1 = *arg2
int32_t edx = *eax_1
int32_t i_2 = eax_1[4]
int32_t esi = 0
int32_t ecx = eax_1[1]
int32_t edi
int32_t var_20 = edi
int32_t result = 0
int32_t i_3 = i_2

if (arg5 != 0 || i_2 u< 1)
    i_3 = 1
    i_2 = 1

if (ecx s>= 0)
    if (ecx s<= 3)
        int32_t ecx_17 = eax_1[6] * eax_1[5] * i_2
        
        if (edx == 1)
            if (ecx_17 u> 0)
                do
                    int32_t edi_6 = *arg3
                    
                    if (edi_6 == 0)
                        break
                    
                    int32_t ebx_4
                    ebx_4.b = *(*arg4 + (esi << 2)) != 0
                    esi += 1
                    *(*(edi_6 + 8) + 0x18) = ebx_4
                    *arg3 = *(*arg3 + 0xc)
                while (esi u< ecx_17)
            
            *arg4 += ecx_17 << 2
            *arg2 += 0x1c
            return result
        
        if (edx == 2)
            int32_t edx_13 = 0
            
            if (ecx_17 u> 0)
                do
                    int32_t eax_16 = *arg3
                    
                    if (eax_16 == 0)
                        break
                    
                    void* eax_17 = *(eax_16 + 8)
                    *(eax_17 + 0x10)
                    *(eax_17 + 0x18) = *(*arg4 + (edx_13 << 2))
                    edx_13 += 1
                    *arg3 = *(*arg3 + 0xc)
                while (edx_13 u< ecx_17)
            
            *arg4 += ecx_17 << 2
            *arg2 += 0x1c
            return result
        
        if (edx == 3)
            int32_t edi_4 = 0
            
            if (ecx_17 u> 0)
                do
                    int32_t esi_7 = *arg3
                    
                    if (esi_7 == 0)
                        break
                    
                    *(*(esi_7 + 8) + 0x18) = fconvert.d(fconvert.t(*(*arg4 + (edi_4 << 2))))
                    edi_4 += 1
                    *arg3 = *(*arg3 + 0xc)
                while (edi_4 u< ecx_17)
            
            *arg4 += ecx_17 << 2
            *arg2 += 0x1c
            return result
    else
        if (ecx == 4)
            if (edx != 4)
                if (i_2 != 0)
                    while (*arg3 != 0)
                        *arg4 += 4
                        int32_t i_4 = i_2
                        i_2 -= 1
                        *arg3 = *(*arg3 + 0xc)
                        
                        if (i_4 == 1)
                            break
                
            label_432f5c:
                *arg2 += 0x14
            else if (i_2 == 0)
            label_432f5c_1:
                *arg2 += 0x14
            else
                while (true)
                    int32_t* eax_10 = arg3
                    void* ebx = nullptr
                    
                    if (*eax_10 == 0)
                        goto label_432f5c_1
                    
                    int32_t* ecx_2 = arg4
                    char* esi_3 = **ecx_2
                    int32_t edx_1 = 0
                    
                    if (esi_3 != 0)
                        sub_42f25e(&arg5, arg1 + 0x10)
                        char* eax_6 = esi_3
                        char i
                        
                        do
                            i = *eax_6
                            eax_6 = &eax_6[1]
                        while (i != 0)
                        ebx = eax_6 - &eax_6[1] + 1
                        int32_t eax_8 = sub_46b465(data_b97498, ebx, 1)
                        
                        if (eax_8 == 0)
                            result = 0x8007000e
                            sub_42d09d(arg5)
                            break
                        
                        int32_t esi_4
                        int32_t edi_3
                        edi_3, esi_4 = __builtin_memcpy(eax_8, esi_3, ebx u>> 2 << 2)
                        __builtin_memcpy(edi_3, esi_4, ebx & 3)
                        sub_42d09d(arg5)
                        ecx_2 = arg4
                        eax_10 = arg3
                        edx_1 = eax_8
                    
                    *(*(*eax_10 + 8) + 0x18) = edx_1
                    *(*(*eax_10 + 8) + 0x1c) = ebx
                    *ecx_2 += 4
                    int32_t i_5 = i_3
                    i_3 -= 1
                    *eax_10 = *(*eax_10 + 0xc)
                    
                    if (i_5 == 1)
                        goto label_432f5c_1
            
            return result
        
        if (ecx == 5)
            int32_t edi_1 = eax_1[5]
            *arg2 = &eax_1[6]
            
            if (i_2 != 0)
                int32_t i_1
                
                do
                    arg5 = nullptr
                    *arg2 = &eax_1[6]
                    
                    if (edi_1 u> 0)
                        do
                            int32_t result_1 = sub_432dde(arg2, arg3, arg4, 0)
                            result = result_1
                            
                            if (result_1 s< 0)
                                return result
                            
                            arg5 += 1
                        while (arg5 u< edi_1)
                    
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            return result

return 0x80004005
