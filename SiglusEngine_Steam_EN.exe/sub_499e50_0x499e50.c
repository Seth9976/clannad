// 函数: sub_499e50
// 地址: 0x499e50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_22c
void* result = __security_cookie ^ &var_22c
void* result_2 = result
int32_t i = 0
void* ecx = &data_8c52b8
int32_t i_1 = 0
void* var_220 = &data_8c52b8

do
    if (*(ecx + 0x24) != 0)
        int32_t i_2 = i
        
        if (i == 0xffffffff)
            i_2 = 0
            result = &data_8c52dc
            
            while (*result != 0)
                i_2 += 1
                result += 0x2c
                
                if (i_2 s>= 0x400)
                    i_2 = 0xffffffff
                    break
        
        if (data_7037e8 != 0)
            result = sub_419520(ecx, 1)
            ecx = var_220
            i = i_1
        
        if (i_2 u<= 0x3ff)
            void* result_1 = nullptr
            void* result_5 = nullptr
            char var_218
            sub_4cfd70(&var_218, ecx)
            char* edi_1 = &var_218
            int32_t eax_1 = sub_4d1610(&var_218, 0x5c)
            void var_217
            
            if (eax_1 != 0xffffffff)
                edi_1 = &var_217 + eax_1
            
            int32_t eax_2 = sub_4d1610(edi_1, 0x2e)
            
            if (eax_2 == 0xffffffff)
                eax_2 = sub_4cfc80(edi_1)
                edi_1 -= 1
            
            void* const var_23c_1 = &data_61334c
            char* eax_3 = sub_4c84d0(&edi_1[eax_2], ".%s")
            int32_t edi_3 = data_703190:0xc
            int32_t eax_4
            char* ecx_6
            eax_4, ecx_6 = sub_4c3da0(eax_3, 5, &var_218, 0xd)
            
            if (eax_4 != 1)
                void* eax_9
                
                if (edi_3 != 0xffffffff)
                    eax_9 = sub_4c51f0(eax_4, &var_218, edi_3, nullptr)
                
                if (edi_3 != 0xffffffff && eax_9 != 0)
                    goto label_49a012
                
                int32_t eax_10 = sub_4c3960(&var_218, &data_613350)
                int32_t edi_4 = data_703190:8
                int32_t eax_11
                char* ecx_15
                eax_11, ecx_15 = sub_4c3da0(eax_10, 5, &var_218, 0x19)
                void* eax_12
                
                if (eax_11 != 1 && edi_4 != 0xffffffff)
                    eax_12, ecx_15 = sub_4c51f0(eax_11, &var_218, edi_4, nullptr)
                
                if (eax_11 != 1 && (edi_4 == 0xffffffff || eax_12 == 0))
                    sub_4121e0(0, &var_218)
                    goto label_49a215
                
                char* var_23c_6 = ecx_15
                int32_t var_240_3 = 0x19
                sub_4c5340(&result_5, &var_218, data_703190:8, &result_5, &result_1, ecx_15)
                void* result_6 = result_5
                
                if (result_6 == 0)
                    char* edi_7 = &var_218
                    int32_t eax_19 = sub_4d1610(&var_218, 0x5c)
                    
                    if (eax_19 != 0xffffffff)
                        edi_7 = &var_217 + eax_19
                    
                    int32_t eax_20 = sub_4d1610(edi_7, 0x2e)
                    
                    if (eax_20 == 0xffffffff)
                        eax_20 = sub_4cfc80(edi_7)
                        edi_7 -= 1
                    
                    char* var_23c_8 = &var_218
                    edi_7[eax_20] = 0
                    char* eax_21 = sub_4c84d0(&data_7027c0, "%s.pdt ")
                    
                    if (data_702fc0 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_21, data_72d6ac, data_719b6c, 0x613340, 
                                    &data_7027c0), 
                                data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
                        sub_4a1e40(3)
                        
                        if (data_702fc0 != 0 || data_641ad0 s< 6)
                            MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                            data_641ad0 += 1
                    else if (data_641ad0 s< 6)
                        MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                        data_641ad0 += 1
                    
                    goto label_49a215
                
                sub_4cea50(i_2 * 0x34 + 0xf2e710, i_2 * 0x34 + 0xf2e708, result_1, 
                    i_2 * 0x34 + 0xf2e70c, i_2 * 0x34 + 0xf2e710)
                *(i_2 * 0x34 + 0xf2e704) = 1
                
                if (*(i_2 * 0x2c + &data_8c52b4) == 0)
                    result = result_1
                    *(i_2 * 0x34 + &data_f2e6f8) = result_6
                    *(i_2 * 0x34 + &data_f2e6fc) = result
                    *(i_2 * 0x34 + 0xf2e700) = 0
                else
                    sub_4d6c40(i_2 * 0x34 + &data_f2e6f8, i_2 * 0x34 + &data_f2e6fc)
                    sub_4cf1e0(i_2 * 0x34 + 0xf2e708, i_2 * 0x34 + &data_f2e6f8, result_1, 
                        i_2 * 0x34 + &data_f2e6fc, i_2 * 0x34 + 0xf2e708, i_2 * 0x34 + 0xf2e70c, 
                        i_2 * 0x34 + 0xf2e710, 1)
                    result = sub_4d6c40(&result_5, &result_1)
            else
                char* var_23c_2 = ecx_6
                int32_t var_240_1 = 0xd
                int32_t ecx_7 = data_703190:0xc
                result_1 = nullptr
                result_5 = nullptr
                char* eax_6
                int32_t ecx_8
                eax_6, ecx_8 = sub_4c5340(&result_1, &var_218, ecx_7, &result_1, &result_5, ecx_6)
                char* result_4 = result_5
                
                if (result_4 == 0)
                label_49a012:
                    sub_4121e0(1, &var_218)
                label_49a215:
                    *(i_2 * 0x2c + &data_8c52dc) -= 1
                    sub_4d6c40(i_2 * 0x34 + &data_f2e6f8, i_2 * 0x34 + &data_f2e6fc)
                    result = sub_4997c0(i_2)
                else
                    if (*result_4 == 2)
                        int32_t var_23c_3 = ecx_8
                        sub_426d50(result_4)
                    
                    void* result_3 = result_1
                    result_5 = result_3
                    result_1 = result_4
                    
                    if (result_3 == 0)
                        goto label_49a012
                    
                    if (sub_426f30(result_3, result_4, &var_218, eax_6) == 0)
                        result = sub_4d6c40(&result_5, &result_1)
                    else
                        result = sub_499930(&result_5, var_220, i_2, 0x1869f, 0, 0, &result_5, 
                            &result_1, eax_6, &var_218)
            
            ecx = var_220
            i = i_1
    
    i += 1
    ecx += 0x2c
    var_220 = ecx
    i_1 = i
while (i s< 0x400)

sub_5f02dd(result_2 ^ &var_22c)
return result
