// 函数: sub_4c12f9
// 地址: 0x4c12f9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_4c = edi
void* eax_2 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))
int32_t edx = 0
int32_t edi_1 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
int32_t result

if (arg1[0x56] == 0)
    int32_t var_34_2
    int32_t eax_13
    
    if (eax_2 != 0xb)
        if (eax_2 == 6 && edi_1 u< 8)
            *arg3 = edi_1 + 2
            eax_13 = arg1[edi_1 + 0x7e]
            var_34_2 = 3
            goto label_4c148d
        
        result = 0x80004005
    else if (edi_1 u>= arg1[0xa])
        result = 0x80004005
    else
        *arg3 = edi_1
        eax_13 = arg1[edi_1 + 0x86]
        var_34_2 = 1
    label_4c148d:
        int32_t var_2c_1 = 0
        
        if (eax_13 u> 0)
            do
                if (edx == 0)
                    var_2c_1:2.b = 1
                else if (edx == 1)
                    var_2c_1:2.b = 2
                else if (edx == 2)
                    var_2c_1:2.b = 4
                else if (edx == 3)
                    var_2c_1:2.b = 8
                
                edx += 1
            while (edx u< eax_13)
        
        if (var_34_2 != 1)
            if ((arg1[0x33].b & 0x20) != 0)
                var_2c_1:2.b = 0x20
            else if (eax_2 == 6 && (*(arg2 + 3) & 2) != 0)
                var_2c_1:2.b = 0x20
        
        struct DOS_Header* const var_38_1 = nullptr
        
        if ((*(arg2 + 3) & 1) != 0)
            var_38_1 = &__dos_header
        
        result = sub_4d7429(arg1, 0x200001f)
        
        if (result s>= 0)
            result = sub_4d546f(arg1, 0x80000000)
            
            if (result s>= 0)
                if ((arg1[0x33].b & 1) != 0)
                    int32_t var_3c = 0
                    int32_t i = 0
                    bool cond:3_1 = arg1[2] u<= 0
                    int32_t var_18 = 0xffffffff
                    void var_14
                    void* edi_4 = &var_14
                    *edi_4 = 0xffffffff
                    void* edi_5 = edi_4 + 4
                    *edi_5 = 0xffffffff
                    *(edi_5 + 4) = 0xffffffff
                    
                    if (not(cond:3_1))
                        int32_t edi_8 = *(arg2 + 4)
                        int32_t* ecx_15 = arg1[5]
                        
                        do
                            void* eax_15 = *ecx_15
                            
                            if (edi_8 == *(eax_15 + 4) && *(arg2 + 8) == *(eax_15 + 8)
                                    && *(arg2 + 0xc) == *(eax_15 + 0xc))
                                (&var_18)[*(eax_15 + 0x10)] = i
                            
                            i += 1
                            ecx_15 = &ecx_15[1]
                        while (i u< arg1[2])
                    
                    int32_t edx_5 = var_3c
                    
                    for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
                        int32_t eax_18 = (&var_18)[i_1]
                        
                        if (eax_18 != 0xffffffff)
                            (&var_18)[edx_5] = eax_18
                            edx_5 += 1
                    
                    result = (*(*arg1 + 0x70))(&var_18, edx_5, &var_3c, 1)
                
                if ((arg1[0x33].b & 1) == 0 || result s>= 0)
                    result = (*(*arg1 + 0x64))(
                        ((var_34_2 | 0xfffffff8) << 0x14 | (var_34_2 & 0x18)) << 8 | (edi_1 & 0x7ff)
                            | var_38_1, 
                        var_2c_1, 0)
                    
                    if (result s>= 0)
                        result = sub_4d25aa(arg1)
                        
                        if (result s>= 0)
                            result = 0
else if (*(arg2 + 0x6c) == 0xffffffff)
    result = 0
else
    if (eax_2 == 0xffff)
        goto label_4c142c
    
    int32_t var_50_3 = edi_1
    int32_t var_54_1 = *sub_4d67f8(arg1, eax_2)
    void var_28
    sub_74aa1b(&var_28, 0x20, "v_%s%d")
    char var_9_1 = 0
    result = sub_47fcd9(&arg1[0x75], &var_28, *(arg2 + 0xc), 1)
    
    if (result s>= 0)
        arg1[0x7c] += 1
        
        if ((arg1[0x33].b & 1) == 0)
            goto label_4c142c
        
        void* eax_6 = *(arg2 + 0x60)
        
        if (eax_6 == 0 || *(eax_6 + 4) != 6)
            goto label_4c142c
        
        void* edi_2 = *(eax_6 + 0x14)
        
        if (*(edi_2 + 4) != 3)
            goto label_4c142c
        
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
            label_4c142c:
                
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
