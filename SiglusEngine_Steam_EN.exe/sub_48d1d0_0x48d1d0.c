// 函数: sub_48d1d0
// 地址: 0x48d1d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_c4
int32_t eax_1 = __security_cookie ^ &var_c4
int32_t ebx = 0
int32_t esi = *arg4
int32_t edi = esi
char* var_e8_1
char* var_e4_1
HWND eax_5

if (arg3 != 0)
    if (arg2 s>= 0x20)
        sub_48d1a0(arg5)
        int32_t eax_7 = arg2 - 0x20
        
        while (true)
            void var_b0
            
            if (esi s< eax_7)
                sub_4d1c30(eax_7, arg3 + esi, &var_b0, 0x20)
                void* ecx_8 = &var_b0
                int32_t eax_8 = 0
                bool cond:0_1
                
                do
                    int32_t edx_5
                    edx_5.b = *ecx_8
                    
                    if (edx_5.b != 0x40 && edx_5.b != 0xa && edx_5.b != 0x21)
                        goto label_48d2f5
                    
                    eax_8 += 1
                    ecx_8 += 1
                    cond:0_1 = eax_8 != 0x20
                    
                    if (eax_8 s< 0x20)
                        *ecx_8 = 0
                        eax_8 += 1
                        ecx_8 += 1
                        cond:0_1 = eax_8 != 0x20
                        
                        if (eax_8 s< 0x20)
                            *ecx_8 = 0
                        label_48d2f5:
                            eax_8 += 1
                            ecx_8 += 1
                            cond:0_1 = eax_8 != 0x20
                while (cond:0_1)
                
                if (sub_4d1be0(eax_8, arg5, &var_b0, 0x20) == 0)
                    *arg4 = esi
                label_48d41f:
                    
                    if (ebx != 0)
                        int32_t var_d4_1 = ebx
                        char var_90[0x84]
                        sub_4c84d0(&var_90, 0x61a6d4)
                        
                        if (data_702fc0 != 0)
                            sub_55ef70(&var_90, data_72d6ac, data_719b6c, &var_90, 0x61a6f8)
                            sub_55f1e0(&var_90, data_72d6ac, data_719b6c, &var_90, 0x61a6f8)
                            sub_55f390(&var_90, data_72d6ac, data_719b6c, &var_90, 0x61a6f8)
                    
                    sub_5f02dd(eax_1 ^ &var_c4)
                    return 1
                
                eax_7 = arg2 - 0x20
            
            if (edi s>= 0)
                sub_4d1c30(eax_7, arg3 + edi, &var_b0, 0x20)
                void* ecx_11 = &var_b0
                int32_t eax_10 = 0
                bool cond:1_1
                
                do
                    int32_t edx_8
                    edx_8.b = *ecx_11
                    
                    if (edx_8.b != 0x40 && edx_8.b != 0xa && edx_8.b != 0x21)
                        goto label_48d35d
                    
                    eax_10 += 1
                    ecx_11 += 1
                    cond:1_1 = eax_10 != 0x20
                    
                    if (eax_10 s< 0x20)
                        *ecx_11 = 0
                        eax_10 += 1
                        ecx_11 += 1
                        cond:1_1 = eax_10 != 0x20
                        
                        if (eax_10 s< 0x20)
                            *ecx_11 = 0
                        label_48d35d:
                            eax_10 += 1
                            ecx_11 += 1
                            cond:1_1 = eax_10 != 0x20
                while (cond:1_1)
                
                if (sub_4d1be0(eax_10, arg5, &var_b0, 0x20) == 0)
                    *arg4 = edi
                    goto label_48d41f
                
                eax_7 = arg2 - 0x20
            
            esi += 1
            edi -= 1
            
            if (esi s< eax_7 || edi s>= 0)
                ebx += 1
                
                if (ebx s< 0x400)
                    continue
            
            if (data_702fc0 == 0)
                break
            
            eax_5 = sub_55f1e0(
                sub_55ef70(eax_7, data_72d6ac, data_719b6c, &data_61a77c, &data_61a73c), 
                data_72d6ac, data_719b6c, &data_61a77c, &data_61a73c)
            var_e4_1 = &data_61a73c
            var_e8_1 = &data_61a77c
            goto label_48d3ee
        
        goto label_48d40e
    
    if (data_702fc0 != 0)
        eax_5 = sub_55f1e0(
            sub_55ef70(arg2 - 0x20, data_72d6ac, data_719b6c, &data_61a6b4, nullptr), data_72d6ac, 
            data_719b6c, &data_61a6b4, nullptr)
        var_e4_1 = nullptr
        var_e8_1 = &data_61a6b4
        goto label_48d3ee
else if (data_702fc0 != 0)
    eax_5 = sub_55f1e0(sub_55ef70(arg2 - 0x20, data_72d6ac, data_719b6c, &data_61a694, nullptr), 
        data_72d6ac, data_719b6c, &data_61a694, nullptr)
    var_e4_1 = nullptr
    var_e8_1 = &data_61a694
label_48d3ee:
    sub_55f390(eax_5, data_72d6ac, data_719b6c, var_e8_1, var_e4_1)
    sub_4a1e40(3)
label_48d40e:
sub_5f02dd(eax_1 ^ &var_c4)
return 0
