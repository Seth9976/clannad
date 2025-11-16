// 函数: sub_499a90
// 地址: 0x499a90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_22c
int32_t eax_1 = __security_cookie ^ &var_22c
int32_t esi = arg3
int32_t edi = arg4

if (arg5 == 0)
    goto label_499aff

int32_t eax_2

if (edi != 2)
    eax_2 = sub_49a260(arg2, edi)
    
    if (eax_2 == 0xffffffff)
        goto label_499aff
else
    eax_2 = sub_49a260(arg2, 0)
    
    if (eax_2 == 0xffffffff)
        eax_2 = sub_49a260(arg2, edi - 1)
        
        if (eax_2 == 0xffffffff)
            edi = 0
        label_499aff:
            
            if (esi == 0xffffffff)
                esi = 0
                void* eax_3 = &data_8c52dc
                
                while (*eax_3 != 0)
                    esi += 1
                    eax_3 += 0x2c
                    
                    if (esi s>= 0x400)
                        esi = 0xffffffff
                        break
            
            if (data_7037e8 != 0)
                sub_419520(arg2, 1)
            
            if (esi u<= 0x3ff)
                char* var_224 = nullptr
                int32_t var_228 = 0
                char var_218
                sub_4cfd70(&var_218, arg2)
                sub_4c3960(&var_218, &data_61334c)
                int32_t eax_4 = data_703190:0xc
                int32_t eax_5
                char* ecx_6
                eax_5, ecx_6 = sub_4c3da0(eax_4, 5, &var_218, 0xd)
                
                if (eax_5 != 1)
                    void* eax_14
                    
                    if (eax_4 != 0xffffffff)
                        eax_14 = sub_4c51f0(eax_4, &var_218, eax_4, nullptr)
                    
                    if (eax_4 == 0xffffffff || eax_14 == 0)
                        int32_t eax_16
                        char* ecx_20
                        eax_16, ecx_20 = sub_4c54e0(sub_4c3960(&var_218, &data_613350), &var_218, 
                            data_703190:8, 5, 0x19)
                        
                        if (eax_16 == 0)
                            sub_4121e0(0, &var_218)
                        else
                            char* var_23c_5 = ecx_20
                            int32_t var_240_3 = 0x19
                            sub_4c5340(&var_228, &var_218, data_703190:8, &var_228, &var_224, 
                                ecx_20)
                            
                            if (var_228 != 0)
                                sub_499930(arg5, arg2, esi, edi, arg5, 1, &var_228, &var_224, 0, 0)
                                sub_5f02dd(eax_1 ^ &var_22c)
                                return esi
                            
                            char* edi_1 = &var_218
                            int32_t eax_20 = sub_4d1610(&var_218, 0x5c)
                            void var_217
                            
                            if (eax_20 != 0xffffffff)
                                edi_1 = &var_217 + eax_20
                            int32_t eax_21 = sub_4d1610(edi_1, 0x2e)
                            
                            if (eax_21 == 0xffffffff)
                                eax_21 = sub_4cfc80(edi_1)
                                edi_1 -= 1
                            
                            char* var_23c_6 = &var_218
                            edi_1[eax_21] = 0
                            char* eax_22 = sub_4c84d0(&data_7027c0, "%s.pdt ")
                            
                            if (data_702fc0 != 0)
                                sub_55f390(
                                    sub_55f1e0(
                                        sub_55ef70(eax_22, data_72d6ac, data_719b6c, 0x613340, 
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
                    else
                        sub_4121e0(1, &var_218)
                else
                    char* var_23c_1 = ecx_6
                    int32_t var_240_1 = 0xd
                    int32_t ecx_7 = data_703190:0xc
                    var_228 = 0
                    var_224 = nullptr
                    char* eax_7 = sub_4c5340(&var_228, &var_218, ecx_7, &var_228, &var_224, ecx_6)
                    char* ebx_1 = var_224
                    char* ecx_8 = eax_7
                    char* var_220_2 = ecx_8
                    
                    if (ebx_1 != 0)
                        if (*ebx_1 == 2)
                            char* var_23c_2 = ecx_8
                            sub_426d50(ebx_1)
                            ecx_8 = var_220_2
                        
                        int32_t eax_8 = var_228
                        var_228 = eax_8
                        var_224 = ebx_1
                        
                        if (eax_8 != 0)
                            if (sub_426f30(eax_8, ebx_1, &var_218, ecx_8) == 0)
                                sub_4d6c40(&var_228, &var_224)
                                sub_5f02dd(eax_1 ^ &var_22c)
                                return 0xffffffff
                            
                            sub_499930(arg5, arg2, esi, edi, arg5, 0, &var_228, &var_224, 
                                var_220_2, &var_218)
                            sub_5f02dd(eax_1 ^ &var_22c)
                            return esi
                    
                    sub_4121e0(1, &var_218)
                
                *(esi * 0x2c + &data_8c52dc) -= 1
                sub_4d6c40(esi * 0x34 + &data_f2e6f8, esi * 0x34 + &data_f2e6fc)
                sub_4997c0(esi)
            
            eax_2 = 0xffffffff

sub_5f02dd(eax_1 ^ &var_22c)
return eax_2
