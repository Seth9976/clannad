// 函数: sub_408304
// 地址: 0x408304
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_5c = edi
int32_t* edi_1 = arg1
int32_t result = 0
int32_t* var_24 = nullptr
int32_t* var_28 = nullptr
int32_t var_2c = 0
int32_t* var_50 = edi_1
int32_t var_44
(*(*edi_1 + 0x28))(edi_1, &var_44)
int32_t var_34 = 0

if (var_44 u> 0)
    int32_t* var_38_1 = arg3
    int32_t* ebx_1 = arg2 + 8
    
    do
        int32_t result_1 = (*(*edi_1 + 0x2c))(edi_1, var_34, &var_24)
        result = result_1
        
        if (result_1 s< 0)
            goto label_408597
        
        if (var_2c u>= arg4)
            result = 0x8876086c
            goto label_408597
        
        int32_t* eax_3 = var_24
        int32_t var_3c
        void* var_20
        int32_t result_2 = (*(*eax_3 + 0x18))(eax_3, &var_3c, &var_20)
        result = result_2
        
        if (result_2 s< 0)
            goto label_408597
        
        if (var_3c u< 0x2c)
            goto label_408590
        
        int32_t* eax_4 = var_20
        ebx_1[-2] = *eax_4
        var_20 = &eax_4[1]
        int32_t ecx_3 = eax_4[1]
        var_20 = &eax_4[2]
        ebx_1[-1] = ecx_3
        int32_t ecx_4 = eax_4[2]
        var_20 = &eax_4[3]
        *ebx_1 = ecx_4
        int32_t ecx_5 = eax_4[3]
        var_20 = &eax_4[4]
        ebx_1[1] = ecx_5
        int32_t ecx_6 = eax_4[4]
        var_20 = &eax_4[5]
        ebx_1[0xe] = ecx_6
        int32_t ecx_7 = eax_4[5]
        var_20 = &eax_4[6]
        ebx_1[6] = ecx_7
        int32_t ecx_8 = eax_4[6]
        var_20 = &eax_4[7]
        ebx_1[7] = ecx_8
        int32_t ecx_9 = eax_4[7]
        ebx_1[9] = fconvert.s(float.t(1))
        var_20 = &eax_4[8]
        ebx_1[8] = ecx_9
        int32_t ecx_10 = eax_4[8]
        var_20 = &eax_4[9]
        ebx_1[0xa] = ecx_10
        int32_t ecx_11 = eax_4[9]
        var_20 = &eax_4[0xa]
        ebx_1[0xb] = ecx_11
        int32_t ecx_12 = eax_4[0xa]
        ebx_1[0xd] = fconvert.s(float.t(1))
        ebx_1[0xf] = 0
        ebx_1[2] = fconvert.s(float.t(0))
        var_20 = &eax_4[0xb]
        int32_t* eax_16 = var_24
        ebx_1[3] = fconvert.s(float.t(0))
        ebx_1[4] = fconvert.s(float.t(0))
        ebx_1[0xc] = ecx_12
        ebx_1[5] = fconvert.s(float.t(1))
        int32_t var_40
        (*(*eax_16 + 0x28))(eax_16, &var_40)
        int32_t var_30_1 = 0
        
        if (var_40 u> 0)
            while (true)
                int32_t* eax_17 = var_24
                int32_t result_3 = (*(*eax_17 + 0x2c))(eax_17, var_30_1, &var_28)
                result = result_3
                
                if (result_3 s< 0)
                    goto label_408597
                
                int32_t* eax_18 = var_28
                void var_18
                int32_t result_4 = (*(*eax_18 + 0x20))(eax_18, &var_18)
                result = result_4
                
                if (result_4 s< 0)
                    goto label_408597
                
                int32_t i = 4
                void* const edi_2 = &data_ab5568
                void* esi_1 = &var_18
                bool cond:7_1 = false
                
                while (i != 0)
                    int32_t temp1_1 = *esi_1
                    int32_t temp2_1 = *edi_2
                    cond:7_1 = temp1_1 != temp2_1
                    esi_1 += 4
                    edi_2 += 4
                    i -= 1
                    
                    if (temp1_1 != temp2_1)
                        break
                
                if (cond:7_1)
                    int32_t i_1 = 4
                    void* const edi_5 = &data_ac3774
                    void* esi_5 = &var_18
                    bool cond:9_1 = false
                    
                    while (i_1 != 0)
                        int32_t temp3_1 = *esi_5
                        int32_t temp4_1 = *edi_5
                        cond:9_1 = temp3_1 != temp4_1
                        esi_5 += 4
                        edi_5 += 4
                        i_1 -= 1
                        
                        if (temp3_1 != temp4_1)
                            break
                    
                    if (not(cond:9_1) && arg3 != 0)
                        int32_t result_6 = sub_407d9b(var_28, var_38_1)
                        result = result_6
                        
                        if (result_6 s< 0)
                            goto label_408597
                else
                    int32_t* eax_19 = var_28
                    char* var_48
                    int32_t result_5 = (*(*eax_19 + 0x18))(eax_19, &var_3c, &var_48)
                    result = result_5
                    
                    if (result_5 s< 0)
                        goto label_408597
                    
                    char* eax_20 = var_48
                    void* edx_1 = &eax_20[1]
                    char i_2
                    
                    do
                        i_2 = *eax_20
                        eax_20 = &eax_20[1]
                    while (i_2 != 0)
                    
                    if (eax_20 - edx_1 + 1 != var_3c)
                        goto label_408590
                    
                    int32_t eax_22 = sub_745f3f(eax_20 - edx_1 + 1)
                    ebx_1[0xf] = eax_22
                    
                    if (eax_22 == 0)
                        result = 0x8007000e
                        goto label_408597
                    
                    int32_t esi_4
                    int32_t edi_4
                    edi_4, esi_4 = __builtin_memcpy(eax_22, var_48, (eax_20 - edx_1 + 1) u>> 2 << 2)
                    __builtin_memcpy(edi_4, esi_4, (eax_20 - edx_1 + 1) & 3)
                
                int32_t* eax_24 = var_28
                
                if (eax_24 != 0)
                    (*(*eax_24 + 8))(eax_24)
                    var_28 = nullptr
                
                var_30_1 += 1
                
                if (var_30_1 u>= var_40)
                    edi_1 = var_50
                    break
        
        if (arg3 != 0 && *var_38_1 == 0)
            int32_t result_7 = sub_407f4d(&ebx_1[-2], var_38_1)
            result = result_7
            
            if (result_7 s< 0)
                goto label_408597
        
        int32_t* eax_28 = var_24
        
        if (eax_28 != 0)
            (*(*eax_28 + 8))(eax_28)
            var_24 = nullptr
        
        var_2c += 1
        var_38_1 = &var_38_1[3]
        ebx_1 = &ebx_1[0x12]
        var_34 += 1
    while (var_34 u< var_44)

if (var_2c != arg4)
label_408590:
    result = 0x80004005

label_408597:
int32_t* eax_31 = var_24

if (eax_31 != 0)
    (*(*eax_31 + 8))(eax_31)
    var_24 = nullptr

int32_t* eax_32 = var_28

if (eax_32 != 0)
    (*(*eax_32 + 8))(eax_32)

sub_745f2b(__security_cookie_1)
return result
