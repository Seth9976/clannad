// 函数: sub_4b6730
// 地址: 0x4b6730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* result = arg5
int32_t* var_410 = arg2
int32_t* result_1 = result
int32_t* edi = arg3

if (arg4 u<= 6)
    if (edi[5] == 2 && *edi != 0)
        result = edi[1]
    
    if (edi[5] != 2 || *edi == 0 || *result s<= 1)
        arg3 = edi[3]
        int32_t ebx_1 = (*U"p@pP")[arg4 * 2]
        
        if (arg3 s>= ebx_1)
            result = edi[4]
        
        if (arg3 s< ebx_1 || result s< (*U"p@pP")[1 + arg4 * 2])
            int32_t var_420_1 = (*U"p@pP")[1 + arg4 * 2]
            int32_t var_424_1 = ebx_1
            int32_t var_428_1 = arg4
            int32_t var_42c_1 = edi[4]
            void* var_430_1 = arg3
            int32_t* result_3 = result_1
            int32_t* result_2 = result_1
            void text
            sub_4c84d0(&text, 0x61c0d0)
            result, arg3 = MessageBoxA(data_7027bc, &text, 0x61c190, MB_OK)
            arg2 = var_410
    
    int32_t i_2 = *((arg4 << 2) + &data_6109f0)
    
    if (i_2 != 0)
        if (i_2 s> 0x20)
            i_2 = 0x20
        
        void* eax_3 = (&data_6109d8)[arg4]
        
        if (i_2 s> 0)
            arg3 = eax_3 + 0xc
            arg2 = &arg2[0x22]
            int32_t i_1 = i_2
            int32_t i
            
            do
                arg2 = &arg2[1]
                arg2[-0x21] = *(arg3 - 4)
                int32_t eax_5 = *arg3
                arg3 += 0x18
                arg2[-1] = eax_5
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        void* var_420_2 = eax_3
        result = sub_423e20(eax_3, arg2, edi, arg3, i_2)
        
        if (*edi != 0)
            result = edi[1]
            int32_t ebx_2 = *result
            
            if (ebx_2 != 0)
                if (ebx_2 s> 0x20)
                    ebx_2 = 0x20
                
                *var_410 = ebx_2
                result.b = ebx_2 == 9
                int32_t ecx_1 = 0
                var_410[1] = result
                
                if (ebx_2 s> 0)
                    int32_t** edx_1 = &var_410[0x22]
                    
                    do
                        result = edi[1]
                        
                        if (ecx_1 s>= 0 && ecx_1 s< *result)
                            void* esi_1 = result[ecx_1 * 2 + 1]
                            
                            if (esi_1 != 0 && result[ecx_1 * 2 + 2] != 0)
                                void* esi_2 = esi_1 + result
                                
                                if (esi_1 != neg.d(result))
                                    edx_1[-0x20] = *(esi_2 + 0x1c)
                                    result = *(esi_2 + 0x20)
                                    *edx_1 = result
                        
                        ecx_1 += 1
                        edx_1 = &edx_1[1]
                    while (ecx_1 s< ebx_2)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
