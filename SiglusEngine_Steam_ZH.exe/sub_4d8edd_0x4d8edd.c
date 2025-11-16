// 函数: sub_4d8edd
// 地址: 0x4d8edd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 u> arg6 && arg6 == 1 && **(arg1[0x40] + 8) == *arg4)
    return sub_4d8e04(arg1, arg2, 0)

int32_t* edx_1 = arg1[5]
int32_t* ebx_1 = arg3
*arg4
*ebx_1
int32_t edi
int32_t var_40_1 = edi
int32_t result
int32_t* var_14
int32_t var_c_1

if (*(edx_1[*ebx_1] + 4) != *(edx_1[*arg4] + 4))
label_4d8f5d:
    var_c_1 = 0
label_4d9029:
    int32_t edi_12 = 0
    
    if (arg5 u> 0)
        do
            arg6 = 1
            
            if (edi_12 + 1 u< arg5)
                void* ecx_10 = &arg4[edi_12]
                int32_t eax_16 = arg1[5]
                int32_t var_8_1 = edi_12 + 1
                void* ecx_11 = ecx_10 + 4
                
                while (*(*(eax_16 + (*ecx_11 << 2)) + 0x10) == *(*(eax_16 + (*ecx_10 << 2)) + 0x10))
                    arg6 += 1
                    var_8_1 += 1
                    ecx_11 += 4
                    
                    if (var_8_1 u>= arg5)
                        break
                
                ebx_1 = arg3
            
            result = sub_4d75f7(arg1, arg2, &ebx_1[edi_12], arg6, &arg4[edi_12], nullptr, nullptr, 
                arg6, arg7, arg7, arg7, 0)
            
            if (result s< 0)
                return result
            
            edi_12 += arg6
        while (edi_12 u< arg5)
    
    if (var_c_1 == 0)
        result = 0
    else
        result = sub_4d75f7(arg1, 1, var_14, arg5, ebx_1, nullptr, nullptr, arg5, 0, 0, 0, 0)
        
        if (result s>= 0)
            result = 0
else
    int32_t* edx_4 = arg1[5]
    
    if (*(edx_4[*ebx_1] + 8) != *(edx_4[*arg4] + 8))
        goto label_4d8f5d
    
    int32_t* edx_7 = arg1[5]
    int32_t eax_7 = *(edx_7[*ebx_1] + 0xc)
    
    if (eax_7 != *(edx_7[*arg4] + 0xc))
        goto label_4d8f5d
    
    int32_t ecx_6 = 0
    bool c_1 = 0 u< arg5
    
    if (c_1)
        do
            arg6 = 0
            
            if (ecx_6 u> 0)
                eax_7 = arg1[5]
                
                while (*(*(eax_7 + (arg4[ecx_6] << 2)) + 0x10)
                        != *(*(eax_7 + (ebx_1[arg6] << 2)) + 0x10))
                    arg6 += 1
                    
                    if (arg6 u>= ecx_6)
                        break
                
                if (arg6 u< ecx_6)
                    break
            
            ecx_6 += 1
        while (ecx_6 u< arg5)
        
        c_1 = ecx_6 u< arg5
    
    int32_t eax_9 = neg.d(sbb.d(eax_7, eax_7, c_1))
    var_c_1 = eax_9
    
    if (eax_9 == 0)
        goto label_4d9029
    
    int32_t ecx_7 = 0
    int32_t edi_6 = 0
    
    if (arg5 u> 0)
        do
            int32_t eax_12 = *(*(arg1[5] + (ebx_1[ecx_7] << 2)) + 0x10)
            
            if (edi_6 u<= eax_12)
                edi_6 = eax_12 + 1
            
            ecx_7 += 1
        while (ecx_7 u< arg5)
    
    int32_t var_34[0x4]
    result = (*(*arg1 + 0x80))(arg1[0x3f], &var_34, edi_6, 0, 0)
    int32_t ecx_9 = 0
    
    if (result s>= 0)
        int32_t var_24[0x4]
        
        if (arg5 u> 0)
            int32_t eax_14 = arg1[5]
            
            do
                var_24[ecx_9] =
                    var_34[*(*(eax_14 + (*(&var_24 + ebx_1 - &var_24 + (ecx_9 << 2)) << 2)) + 0x10)]
                ecx_9 += 1
            while (ecx_9 u< arg5)
        
        var_14 = ebx_1
        ebx_1 = &var_24
        arg3 = &var_24
        goto label_4d9029
return result
