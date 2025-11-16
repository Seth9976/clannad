// 函数: sub_4c4185
// 地址: 0x4c4185
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_4c = edi
void* eax_2 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))
int32_t eax_4 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
int32_t result

if (arg1[0x56] == 0)
    int32_t var_2c_1
    
    if (eax_2 u> 0xe)
        result = 0x80004005
    else
        switch (eax_2)
            case nullptr
                result = 1
            case 1
                var_2c_1 = 0
            label_4c42db:
                
                if (eax_4 u<= 0xf)
                    goto label_4c42ed
                
                result = 0x80004005
            case 2
                var_2c_1 = 1
                goto label_4c42db
            case 3
                var_2c_1 = 2
                goto label_4c42db
            case 4
                var_2c_1 = 3
                goto label_4c42db
            case 5
                var_2c_1 = 4
                goto label_4c42db
            case 6
                var_2c_1 = 5
                goto label_4c42db
            case 7
                var_2c_1 = 6
                goto label_4c42db
            case 8
                var_2c_1 = 7
                goto label_4c42db
            case 9
                var_2c_1 = 8
                
                if (eax_4 == 0)
                label_4c42ed:
                    int32_t var_2c_2 = var_2c_1 | (eax_4 | 0xffff8000) << 0x10
                    result = sub_4d7429(arg1, 0x1f)
                    
                    if (result s>= 0)
                        result = sub_4d546f(arg1, var_2c_2)
                        
                        if (result s>= 0)
                            if ((arg1[0x33].b & 1) != 0)
                                int32_t var_34 = 0
                                int32_t i = 0
                                bool cond:2_1 = arg1[2] u<= 0
                                int32_t var_18 = 0xffffffff
                                void var_14
                                void* edi_6 = &var_14
                                *edi_6 = 0xffffffff
                                void* edi_7 = edi_6 + 4
                                *edi_7 = 0xffffffff
                                *(edi_7 + 4) = 0xffffffff
                                
                                if (not(cond:2_1))
                                    int32_t edi_10 = *(arg2 + 4)
                                    int32_t* ecx_9 = arg1[5]
                                    
                                    do
                                        void* eax_12 = *ecx_9
                                        
                                        if (edi_10 == *(eax_12 + 4) && *(arg2 + 8) == *(eax_12 + 8)
                                                && *(arg2 + 0xc) == *(eax_12 + 0xc))
                                            (&var_18)[*(eax_12 + 0x10)] = i
                                        
                                        i += 1
                                        ecx_9 = &ecx_9[1]
                                    while (i u< arg1[2])
                                
                                int32_t edx_5 = var_34
                                
                                for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
                                    int32_t eax_15 = (&var_18)[i_1]
                                    
                                    if (eax_15 != 0xffffffff)
                                        (&var_18)[edx_5] = eax_15
                                        edx_5 += 1
                                
                                result = (*(*arg1 + 0x70))(&var_18, edx_5, &var_34, 1)
                            
                            if ((arg1[0x33].b & 1) == 0 || result s>= 0)
                                int32_t var_40
                                int32_t var_3c
                                result = (*(*arg1 + 0x88))(arg2, &var_3c, &var_40)
                                
                                if (result s>= 0)
                                    int32_t eax_18 = var_40
                                    result = (*(*arg1 + 0x64))(
                                        ((eax_18 | 0xfffffff8) << 0x14 | (eax_18 & 0x18)) << 8
                                            | (var_3c & 0x7ff), 
                                        0xf0000, 0)
                                    
                                    if (result s>= 0)
                                        result = (*(*arg1 + 0x60))()
                                        
                                        if (result s>= 0)
                                            result = sub_4d25aa(arg1)
                                            
                                            if (result s>= 0)
                                                if (arg3 == 0)
                                                    result = 0
                                                else
                                                    *arg3 = var_2c_2
                                                    result = 0
                else
                    result = 0x80004005
            case 0xa
                var_2c_1 = 9
                goto label_4c42db
            case 0xb
                var_2c_1 = 0xa
                goto label_4c42db
            case 0xc
                var_2c_1 = 0xb
                goto label_4c42db
            case 0xd
                var_2c_1 = 0xc
                goto label_4c42db
            case 0xe
                var_2c_1 = 0xd
                goto label_4c42db
else if (*(arg2 + 0x6c) == 0xffffffff)
    result = 0
else
    if (eax_2 == 0xffff)
        goto label_4c42b1
    
    int32_t var_50_3 = eax_4
    int32_t var_54_1 = *sub_4d67f8(arg1, eax_2)
    void var_28
    sub_74aa1b(&var_28, 0x20, "v_%s%d")
    char var_9_1 = 0
    result = sub_47fcd9(&arg1[0x75], &var_28, *(arg2 + 0xc), 1)
    
    if (result s>= 0)
        arg1[0x7c] += 1
        
        if ((arg1[0x33].b & 1) == 0)
            goto label_4c42b1
        
        void* eax_6 = *(arg2 + 0x60)
        
        if (eax_6 == 0 || *(eax_6 + 4) != 6)
            goto label_4c42b1
        
        void* edi_2 = *(eax_6 + 0x14)
        
        if (*(edi_2 + 4) != 3)
            goto label_4c42b1
        
        char* eax_7 = *(edi_2 + 0x18)
        char i_2
        
        do
            i_2 = *eax_7
            eax_7 = &eax_7[1]
        while (i_2 != 0)
        char* eax_10 = sub_745f3f(eax_7 - &eax_7[1] + 3)
        
        if (eax_10 != 0)
            int32_t var_50_5 = *(edi_2 + 0x18)
            sub_749803(eax_10, "n_%s")
            int32_t result_1 = sub_47fcd9(&arg1[0x75], eax_10, *(arg2 + 0xc), 1)
            j__free(eax_10)
            
            if (result_1 s>= 0)
                arg1[0x7c] += 1
            label_4c42b1:
                
                if (arg3 == 0)
                    result = 0
                else
                    *arg3 = *(arg2 + 0x6c)
                    result = 0
            else
                result = result_1
        else
            result = 0x8007000e

sub_745f2b(__security_cookie_1)
return result
