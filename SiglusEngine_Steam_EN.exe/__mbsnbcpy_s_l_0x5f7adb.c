// 函数: __mbsnbcpy_s_l
// 地址: 0x5f7adb
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i_3 = arg4

if (i_3 == 0)
    if (arg1 != 0)
        goto label_5f7afe
    
    if (arg2 == arg1)
        return 0
else if (arg1 != 0)
label_5f7afe:
    
    if (arg2 u> 0)
        if (i_3 == 0)
            *arg1 = 0
            return 0
        
        if (arg3 != 0)
            void var_18
            sub_5f1b77(&var_18, arg5)
            int32_t result = 0
            void* var_14
            
            if (*(var_14 + 8) != 0)
                char* ecx_2 = arg1
                char* edx_1 = arg3
                arg4 = arg2
                void* i_2
                
                if (i_3 != 0xffffffff)
                    void* i
                    
                    do
                        i_2.b = *edx_1
                        *ecx_2 = i_2.b
                        ecx_2 = &ecx_2[1]
                        edx_1 = &edx_1[1]
                        bool cond:0_1 = i_2.b == 0
                        i_2 = arg4
                        
                        if (cond:0_1)
                            break
                        
                        void* i_4 = i_2
                        i_2 -= 1
                        arg4 = i_2
                        
                        if (i_4 == 1)
                            break
                        
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    
                    if (i_3 == 0)
                        *ecx_2 = 0
                        ecx_2 = &ecx_2[1]
                else
                    void* i_1
                    
                    do
                        i_2.b = *edx_1
                        *ecx_2 = i_2.b
                        ecx_2 = &ecx_2[1]
                        edx_1 = &edx_1[1]
                        bool cond:1_1 = i_2.b == 0
                        i_2 = arg4
                        
                        if (cond:1_1)
                            break
                        
                        i_1 = i_2
                        i_2 -= 1
                        arg4 = i_2
                    while (i_1 != 1)
                
                if (i_2 == 0)
                    void* ecx_3
                    void* edx_2
                    
                    if (*edx_1 == 0 || i_3 == 1)
                        edx_2 = &ecx_2[0xffffffff]
                        ecx_3 = edx_2
                        arg4 = ecx_3
                        
                        if (edx_2 u>= arg1)
                            void* ebx_1 = edx_2
                            
                            do
                                if (__ismbblead_l(*ebx_1, &var_18) == 0)
                                    break
                                
                                ebx_1 -= 1
                            while (ebx_1 u>= arg1)
                            
                            ecx_3 = ebx_1
                    
                    if ((*edx_1 == 0 || i_3 == 1) && ((edx_2.b - ecx_3.b) & 1) != 0)
                        *edx_2 = 0
                        result = 0x2a
                        *__errno() = 0x2a
                    else if (i_3 != 0xffffffff)
                        *arg1 = 0
                        result = 0x22
                        *__errno() = 0x22
                        __invalid_parameter_noinfo()
                    else
                        void* ecx_5 = arg2
                        
                        if (ecx_5 u<= 1)
                            *(arg1 + ecx_5 - 1) = 0
                        else
                            void* edx_4 = ecx_5 - 2 + arg1
                            void* edi = edx_4
                            
                            if (edx_4 u>= arg1)
                                do
                                    if (__ismbblead_l(*edi, &var_18) == 0)
                                        break
                                    
                                    edi -= 1
                                while (edi u>= arg1)
                                
                                ecx_5 = arg2
                            
                            if (((edx_4.b - edi.b) & 1) == 0)
                                *(arg1 + ecx_5 - 1) = 0
                            else
                                *edx_4 = 0
                        
                        result = 0x50
                else if (ecx_2 - arg1 s>= 2)
                    void* ecx_7 = &ecx_2[0xfffffffe]
                    void* edi_1 = ecx_7
                    
                    if (ecx_7 u>= arg1)
                        do
                            if (__ismbblead_l(*edi_1, &var_18) == 0)
                                break
                            
                            edi_1 -= 1
                        while (edi_1 u>= arg1)
                    
                    if (((ecx_7.b - edi_1.b) & 1) != 0)
                        *ecx_7 = 0
                        result = 0x2a
                        *__errno() = 0x2a
            else
                result = _strncpy_s(arg1, arg2, arg3, i_3)
            
            char var_c
            void* var_10
            
            if (var_c != 0)
                *(var_10 + 0x70) &= 0xfffffffd
            return result
        
        *arg1 = 0

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x16
