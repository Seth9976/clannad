// 函数: sub_423ec0
// 地址: 0x423ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg2
int32_t* var_218 = esi
char var_210[0x208]
sub_4d67a0(*arg1, &var_210)
void* result = arg1[5]
int32_t var_228 = 0
int32_t* var_26c
int32_t* var_268
int32_t var_224
int32_t* var_21c

if (result == 0 || result == 1)
    int32_t* ecx_23 = arg1[3]
    var_21c = ecx_23
    
    if ((ecx_23.b & 1) != 0)
        ecx_23 += 1
        var_21c = ecx_23
    
    void* eax_28 = arg1[4]
    void* var_214_2 = eax_28
    
    if ((eax_28.b & 1) != 0)
        eax_28 += 1
        var_214_2 = eax_28
    
    int32_t eax_30 = (eax_28 * ecx_23) << 2
    int32_t var_260_3 = 0
    int32_t* var_264_5 = arg1
    sub_4243d0(sub_4d6960(eax_30, &var_224, &var_228, eax_30, "G00_CONVERT_HALF_TMP"), var_21c, 
        var_224, var_214_2, var_26c, var_268)
    int32_t eax_33
    int32_t edx_18
    edx_18:eax_33 = sx.q(var_21c)
    char* ecx_26 = var_224
    int32_t eax_36
    int32_t edx_19
    edx_19:eax_36 = sx.q(var_214_2)
    int32_t edi_6 = (eax_33 - edx_18) s>> 1
    char* eax_38 = (eax_36 - edx_19) s>> 1
    char (* var_274_2)[0x208] = &var_210
    int32_t* edx_20 = var_21c
    esi[3] = edi_6
    esi[4] = eax_38
    sub_4cabd0(eax_38, edx_20, ecx_26, var_214_2, edi_6, eax_38, var_218, &esi[1], 0, nullptr)
    var_218[5] = arg1[5]
    result = sub_4d6c40(&var_228, &var_224)
else if (result == 2)
    BOOL var_240 = 0
    uint32_t var_234 = 0
    BOOL var_238 = 0
    var_21c = nullptr
    sub_4d1c30(result, arg1, esi, 0x18)
    int32_t* edi_1 = &esi[1]
    *esi = 0
    *edi_1 = 0
    int32_t* eax_2 = arg1[1]
    int32_t ebx_1 = 0
    int32_t* var_220_1 = edi_1
    int32_t var_244_1 = 0
    int32_t* ecx_2 = *eax_2
    result = &eax_2[1]
    void* result_1 = result
    
    if (ecx_2 s> 0)
        do
            int32_t i = *result
            int32_t ecx_3 = *(result + 4)
            void* result_3 = result + 8
            void* result_2 = result_3
            bool cond:0_1
            
            if (i == 0)
                cond:0_1 = ecx_3 != 0
            label_424119:
                
                if (cond:0_1)
                    void* result_4 = result_1
                    result_3 = nullptr
                    
                    if (ebx_1 s<= 0)
                        goto label_424122
                    
                    while (*result_4 != i)
                        result_3 += 1
                        result_4 += 8
                        
                        if (result_3 s>= ebx_1)
                            goto label_424122
                    
                    if (result_3 == 0xffffffff)
                        goto label_424122
                    
                    if (*esi != 0)
                        int32_t* esi_4 = *edi_1
                        int32_t edx_15 = 0
                        int32_t edi_4 = *esi_4
                        void* ecx_18 = &esi_4[1]
                        
                        if (edi_4 s<= 0)
                        label_42417d:
                            edi_1 = var_220_1
                        else
                            while (*ecx_18 != 0)
                                edx_15 += 1
                                ecx_18 += 8
                                
                                if (edx_15 s>= edi_4)
                                    goto label_42417d_2
                            
                            if (edx_15 == 0xffffffff)
                            label_42417d_1:
                                edi_1 = var_220_1
                            else
                                int32_t ecx_21 = *esi_4
                                
                                if (result_3 s>= ecx_21)
                                label_42417d_2:
                                    edi_1 = var_220_1
                                else
                                    edi_1 = var_220_1
                                    
                                    if (edx_15 s< ecx_21)
                                        void* ecx_22 = &esi_4[1 + result_3 * 2]
                                        esi_4[1 + edx_15 * 2] = *ecx_22
                                        esi_4[edx_15 * 2 + 2] = neg.d(*(ecx_22 + 4))
                        
                        esi = var_218
                else
                label_424122:
                    var_268 = nullptr
                    var_26c = ecx_2
                    sub_4d24d0(result_3, edi_1, esi, var_26c, 0, 0, "G00_CONVERT_HALF_TMP")
            else
                cond:0_1 = ecx_3 != 0
                
                if (ecx_3 s<= 0)
                    goto label_424119
                
                void* eax_4 = arg1[1] + i
                void* ecx_4 = *(eax_4 + 0xc)
                void* var_22c_1 = ecx_4
                
                if ((ecx_4.b & 1) != 0)
                    ecx_4 += 1
                    var_22c_1 = ecx_4
                
                void* eax_5 = *(eax_4 + 0x10)
                void* var_230_1 = eax_5
                
                if ((eax_5.b & 1) != 0)
                    eax_5 += 1
                    var_230_1 = eax_5
                
                int32_t eax_7 = (eax_5 * ecx_4) << 2
                int32_t var_260_1 = ebx_1
                int32_t* var_264_2 = arg1
                sub_4243d0(sub_4d6960(eax_7, &var_224, &var_228, eax_7, "G00_CONVERT_HALF_TMP"), 
                    var_22c_1, var_224, var_230_1, var_26c, var_268)
                int32_t eax_10
                int32_t edx_4
                edx_4:eax_10 = sx.q(var_22c_1)
                char const* const var_274_1 = "G00_CONVERT_HALF_HALF"
                int32_t eax_13
                int32_t edx_5
                edx_5:eax_13 = sx.q(var_230_1)
                int32_t ebx_3 = (eax_10 - edx_4) s>> 1
                int32_t edi_3 = (eax_13 - edx_5) s>> 1
                sub_4cabd0(&var_240, var_22c_1, var_224, var_230_1, ebx_3, edi_3, &var_240, 
                    &var_234, 0, nullptr)
                sub_4d6c40(&var_228, &var_224)
                int32_t eax_17
                int32_t edx_8
                edx_8:eax_17 = sx.q(*(eax_4 + 0x14))
                int32_t eax_20
                int32_t edx_9
                edx_9:eax_20 = sx.q(*(eax_4 + 0x18))
                int32_t eax_22 = (eax_20 - edx_9) s>> 1
                int32_t* var_294_1 = &var_21c
                void* eax_23 = sub_581fe0(eax_22, ebx_3, var_234, edi_3, 1, 0xffffffff, 0xffffffff, 
                    0xffffffff, 0xffffffff, (eax_17 - edx_8) s>> 1, eax_22, &var_238)
                sub_4d6c40(&var_240, &var_234)
                edi_1 = var_220_1
                var_268 = var_21c
                esi = var_218
                var_26c = ecx_2
                sub_4d24d0(&var_210, edi_1, esi, var_26c, var_268, eax_23, &var_210)
                sub_4d6c40(&var_238, &var_21c)
                ebx_1 = var_244_1
            result = result_2
            ebx_1 += 1
            var_244_1 = ebx_1
        while (ebx_1 s< ecx_2)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
