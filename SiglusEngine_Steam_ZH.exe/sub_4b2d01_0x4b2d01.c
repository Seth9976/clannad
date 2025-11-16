// 函数: sub_4b2d01
// 地址: 0x4b2d01
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_68 = edi
void* eax_2 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))
int32_t eax_4 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
int32_t result

if (arg1[0x56] == 0)
    int32_t var_38 = 0
    int32_t var_2c_1
    
    if (eax_2 u> 0x12)
        result = 0x80004005
    else
        switch (eax_2)
            case nullptr
                result = 1
            case 1
                var_2c_1 = 0
            label_4b2e7a:
                
                if (eax_4 u<= 0xf)
                    goto label_4b2e8c
                
                result = 0x80004005
            case 2
                var_2c_1 = 1
                goto label_4b2e7a
            case 3
                var_2c_1 = 2
                goto label_4b2e7a
            case 4
                var_2c_1 = 3
                goto label_4b2e7a
            case 5
                var_2c_1 = 4
                goto label_4b2e7a
            case 6
                var_2c_1 = 5
                goto label_4b2e7a
            case 7
                var_2c_1 = 6
                goto label_4b2e7a
            case 8
                var_2c_1 = 7
                goto label_4b2e7a
            case 9
                var_2c_1 = 8
                
                if (eax_4 == 0)
                label_4b2e8c:
                    int32_t var_2c_2 = var_2c_1 | (eax_4 | 0xffff8000) << 0x10
                    struct DOS_Header* const var_48_1 = nullptr
                    
                    if ((*(arg2 + 3) & 1) != 0)
                        var_48_1 = &__dos_header
                    
                    result = sub_4d7429(arg1, 0x1f)
                    
                    if (result s>= 0)
                        result = sub_4d546f(arg1, var_2c_2)
                        
                        if (result s>= 0)
                            int32_t var_44
                            int32_t var_3c
                            
                            if ((*(*(arg1[4] + (*(arg2 + 4) << 2)) + 4) & 0x10) == 0)
                                result = (*(*arg1 + 0x84))(arg2, &var_3c, &var_44, &var_38)
                                
                                if (result s>= 0)
                                    var_38 = 0
                                label_4b2ff3:
                                    int32_t var_4c_1 = 0
                                    int32_t i = 0
                                    bool cond:5_1 = arg1[2] u<= 0
                                    int32_t var_5c = 0xffffffff
                                    void var_58
                                    void* edi_7 = &var_58
                                    *edi_7 = 0xffffffff
                                    void* edi_8 = edi_7 + 4
                                    *edi_8 = 0xffffffff
                                    *(edi_8 + 4) = 0xffffffff
                                    
                                    if (not(cond:5_1))
                                        int32_t edi_11 = *(arg2 + 4)
                                        int32_t* ecx_14 = arg1[5]
                                        
                                        do
                                            void* eax_23 = *ecx_14
                                            
                                            if (edi_11 == *(eax_23 + 4)
                                                    && *(arg2 + 8) == *(eax_23 + 8)
                                                    && *(arg2 + 0xc) == *(eax_23 + 0xc))
                                                (&var_5c)[*(eax_23 + 0x10)] = i
                                            
                                            i += 1
                                            ecx_14 = &ecx_14[1]
                                        while (i u< arg1[2])
                                    
                                    int32_t edx_5 = var_4c_1
                                    
                                    for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
                                        int32_t eax_26 = (&var_5c)[i_1]
                                        
                                        if (eax_26 != 0xffffffff)
                                            (&var_5c)[edx_5] = eax_26
                                            edx_5 += 1
                                    
                                    int32_t var_30
                                    result = (*(*arg1 + 0x70))(&var_5c, edx_5, &var_30, var_38)
                                    
                                    if (result s>= 0)
                                        char var_2e
                                        
                                        if ((var_2c_2 & 0x7fffffff) == (*(*arg1 + 0x50))(4, 0))
                                            var_2e |= 0xf
                                        
                                        if ((arg1[0x1c].b & 0x40) == 0 && (
                                                (arg1[0x33].b & 0x20) != 0
                                                || (*(arg2 + 3) & 2) != 0))
                                            char var_2e_2 = (var_2e & 0xef) | 0x20
                                        
                                        int32_t eax_30 = var_44
                                        result = (*(*arg1 + 0x64))(
                                            ((eax_30 | 0xfffffff8) << 0x14 | (eax_30 & 0x18)) << 8
                                                | (var_3c & 0x7ff) | var_48_1, 
                                            var_30, 0)
                                        
                                        if (result s>= 0)
                                            result = (*(*arg1 + 0x60))()
                                            
                                            if (result s>= 0)
                                                result = sub_4d25aa(arg1)
                                                
                                                if (result s>= 0)
                                                    if (arg3 != 0)
                                                        *arg3 = var_2c_2
                                                    
                                                    result = 0
                            else
                                var_38 |= arg1[0x1c] << 0x19 s>> 0x1f
                                result = (*(*arg1 + 0x88))(arg2, &var_3c, &var_44)
                                
                                if (result s>= 0)
                                    goto label_4b2ff3
                else
                    result = 0x80004005
            case 0xa
                var_2c_1 = 9
                goto label_4b2e7a
            case 0xb
                var_2c_1 = 0xa
                goto label_4b2e7a
            case 0xc
                var_2c_1 = 0xb
                goto label_4b2e7a
            case 0xd
                var_2c_1 = 0xc
                goto label_4b2e7a
            case 0xe
                var_2c_1 = 0xd
                goto label_4b2e7a
            case 0xf, 0x10
                result = 0x80004005
            case 0x11
                var_2c_1 = 0x80000000
                var_38 = 1
                goto label_4b2e7a
            case 0x12
                var_2c_1 = 0x80000000
                goto label_4b2e7a
else if (*(arg2 + 0x6c) == 0xffffffff)
    result = 0
else
    if (eax_2 == 0xffff)
        goto label_4b2e4f
    
    char const* const var_74_1
    
    if ((*(*(arg1[4] + (*(arg2 + 4) << 2)) + 4) & 0x10) == 0)
        int32_t var_6c_4 = eax_4
        int32_t var_70_2 = *sub_4d67f8(arg1, eax_2)
        var_74_1 = "o_%s%d"
    else
        int32_t var_6c_3 = eax_4
        int32_t var_70_1 = *sub_4d67f8(arg1, eax_2)
        var_74_1 = "v_%s%d"
    
    void var_28
    sub_74aa1b(&var_28, 0x20, var_74_1)
    char var_9_1 = 0
    result = sub_47fcd9(&arg1[0x75], &var_28, *(arg2 + 0xc), 1)
    
    if (result s>= 0)
        arg1[0x7c] += 1
        
        if ((arg1[0x33].b & 1) == 0)
            goto label_4b2e4f
        
        void* eax_9 = *(arg2 + 0x60)
        
        if (eax_9 == 0 || *(eax_9 + 4) != 6)
            goto label_4b2e4f
        
        void* edi_2 = *(eax_9 + 0x14)
        
        if (*(edi_2 + 4) != 3)
            goto label_4b2e4f
        
        char* eax_10 = *(edi_2 + 0x18)
        char i_2
        
        do
            i_2 = *eax_10
            eax_10 = &eax_10[1]
        while (i_2 != 0)
        char* eax_13 = sub_745f3f(eax_10 - &eax_10[1] + 3)
        
        if (eax_13 != 0)
            int32_t var_6c_6 = *(edi_2 + 0x18)
            sub_749803(eax_13, "n_%s")
            int32_t result_1 = sub_47fcd9(&arg1[0x75], eax_13, *(arg2 + 0xc), 1)
            j__free(eax_13)
            
            if (result_1 s>= 0)
                arg1[0x7c] += 1
            label_4b2e4f:
                
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
