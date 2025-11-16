// 函数: sub_43f941
// 地址: 0x43f941
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_38 = edi
void* var_14 = nullptr
void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_2c = 0
void* var_30 = nullptr

if (arg2 == 0 || arg2[1] != 3)
    return nullptr

void* ebx_1 = &arg2[4]
void* eax_1 = *(arg1 + 0x18)
void* var_c_1 = ebx_1
void*** eax_2

if (eax_1 == 0)
    eax_2 = nullptr
else
    eax_2 = *(eax_1 + 0x1c)

char ecx = 6

if (arg4 != 0)
    ecx = 0x16

int32_t esi_1 = 0
int32_t eax_3 = sub_43be42(arg1, 2, ebx_1, eax_2, arg3, *(arg1 + 0x10), ecx, &var_14, &var_18)

if (eax_3 s>= 0)
    if (eax_3 == 0)
        esi_1 = 1
    
    if (arg4 != 0)
        goto label_43f9ea
    
    if (esi_1 != 0)
    label_43fa69:
        void* esi_2 = arg3
        int32_t* var_20_1 = &var_2c
        void** var_24_1 = &var_30
        void* eax_9 = *(var_14 + 0x24)
        
        while (true)
            void* var_10_1 = eax_9
            
            if (eax_9 == 0)
                if (esi_2 == 0)
                label_43fc1d:
                    
                    if (var_10_1 == 0)
                        void*** eax_37 = sub_42cfa1(0x50)
                        void*** esi_3
                        
                        if (eax_37 == 0)
                            esi_3 = nullptr
                        else
                            int32_t ecx_21
                            ecx_21.b = var_1c != 0
                            esi_3 = sub_46bee5(eax_37, 0, ecx_21 + 0x19, 0, 0, 1, ebx_1)
                        
                        if (esi_3 != 0)
                            void* eax_40 = var_14
                            int32_t eax_42
                            
                            if (*(eax_40 + 0x20) != 0)
                                eax_42 = (*(**(eax_40 + 0x20) + 4))()
                                esi_3[4] = eax_42
                            
                            if (*(eax_40 + 0x20) == 0 || eax_42 != 0)
                                esi_3[8] = var_18
                                void*** eax_44 = sub_42cfa1(0x14)
                                void*** eax_45
                                
                                if (eax_44 == 0)
                                    eax_45 = nullptr
                                else
                                    eax_45 = sub_46b602(eax_44, 0, 0, "Parameters")
                                
                                esi_3[9] = eax_45
                                
                                if (eax_45 != 0)
                                    eax_45[2] = var_2c
                                    esi_3[9][3] = var_30
                                    sub_4381dc(esi_3)
                                    
                                    if (sub_4380be(esi_3) != 0)
                                        void*** eax_48 = sub_43e401(arg1, esi_3)
                                        
                                        if (eax_48 != 0)
                                            return eax_48
                                    
                                    return esi_3
                        
                        break
                
                void* i = arg3
                int32_t ecx_31 = 0
                
                while (i != 0)
                    i = *(i + 0xc)
                    ecx_31 += 1
                
                void* const eax_49 = &data_aac1c4
                char* var_50_9
                
                if (var_1c != 0)
                    if (ecx_31 == 1)
                        eax_49 = &data_b0018c
                    
                    void* const var_44_14 = eax_49
                    int32_t var_48_11 = ecx_31
                    int32_t var_4c_10 = *(ebx_1 + 8)
                    var_50_9 = "'%s': intrinsic function does not take %u parameter%s"
                else
                    if (ecx_31 == 1)
                        eax_49 = &data_b0018c
                    
                    void* const var_44_13 = eax_49
                    int32_t var_48_10 = ecx_31
                    int32_t var_4c_9 = *(ebx_1 + 8)
                    var_50_9 = "'%s': function does not take %u parameter%s"
                
                sub_43713d(arg1, ebx_1, 0xbc5, var_50_9)
                break
            
            void* ecx_5 = *(var_10_1 + 8)
            void* eax_11 = *(var_10_1 + 0xc)
            int32_t edx_1 = 0
            
            if (eax_11 != 0)
                ebx_1 = var_c_1
                
                if (*(*(eax_11 + 8) + 4) == 0xc)
                    edx_1 = 1
                    var_10_1 = eax_11
            
            if (arg4 != 0 && (*(*(ecx_5 + 0x18) + 0x1c) & 0x40) == 0)
                eax_9 = *(var_10_1 + 0xc)
                continue
            else if (esi_2 != 0)
                void* eax_13 = *(ecx_5 + 0x18)
                void*** ebx_3 = *(eax_13 + 0x20)
                void* eax_14 = *(esi_2 + 8)
                
                if (eax_14 == 0)
                    arg2 = nullptr
                else
                    arg2 = *(eax_14 + 0x10)
                
                void*** eax_16 = sub_42cfa1(0x14)
                void*** eax_17
                
                if (eax_16 == 0)
                    eax_17 = nullptr
                else
                    eax_17 = sub_46b602(eax_16, 0, 0, "Inputs")
                
                *var_20_1 = eax_17
                
                if (eax_17 == 0)
                    break
                
                void*** eax_18 = sub_42cfa1(0x14)
                void*** eax_19
                
                if (eax_18 == 0)
                    eax_19 = nullptr
                else
                    eax_19 = sub_46b602(eax_18, 0, 0, "Outputs")
                
                *var_24_1 = eax_19
                
                if (eax_19 == 0)
                    break
                
                if ((*(eax_13 + 0x1c) & 0x10) == 0)
                    goto label_43fb69
                
                void* ecx_11 = arg1
                
                if (sub_4392fd(arg1, ebx_3, arg2, 0) == 0)
                    sub_439635(ecx_11, var_c_1, *(var_c_1 + 8), ebx_3, arg2, 0)
                    break
                
                *(*var_20_1 + 8) = sub_43c606(ecx_11, ebx_3, *(esi_2 + 8), 0, 0)
            label_43fb69:
                
                if ((*(eax_13 + 0x1c) & 0x20) != 0)
                    int32_t eax_24 = sub_437693(arg1, arg2)
                    int32_t eax_25
                    
                    if (eax_24 == 0)
                        eax_25 = sub_4392fd(arg1, arg2, ebx_3, 0)
                    
                    if (eax_24 != 0 || eax_25 == 0)
                        int32_t var_44_9 = 0
                        sub_439635(arg1, var_c_1, *(var_c_1 + 8), arg2, ebx_3, 0)
                        break
                        break
                    
                    void*** eax_27 = sub_43c4ff(arg1, *(ecx_5 + 0x14), eax_13)
                    
                    if (eax_27 == 0)
                        break
                    
                    void*** eax_28 = sub_43c606(arg1, arg2, eax_27, 0, 0)
                    
                    if (eax_28 == 0)
                        break
                    
                    void*** eax_29 = sub_43eb4f(arg1, 0x15, *(esi_2 + 8), eax_28, 1)
                    
                    if (eax_29 == 0)
                        break
                    
                    *(*var_24_1 + 8) = eax_29
                
                esi_2 = *(esi_2 + 0xc)
                ebx_1 = var_c_1
                var_20_1 = *var_20_1 + 0xc
                var_24_1 = *var_24_1 + 0xc
                eax_9 = *(var_10_1 + 0xc)
                continue
            else if (edx_1 != 0)
                eax_9 = *(var_10_1 + 0xc)
                continue
            
            goto label_43fc1d
    else
        int32_t eax_4 = sub_438960(arg1, ebx_1, arg3, &var_1c, &var_18)
        
        if (eax_4 s>= 0)
            if (eax_4 != 0)
                goto label_43fa03
            
            esi_1 = 1
        label_43f9ea:
            
            if (esi_1 != 0)
            label_43fa15:
                
                if (arg4 != 0)
                    goto label_43fa3d
                
                if (esi_1 != 0)
                label_43fa5f:
                    void* eax_7 = var_1c
                    
                    if (eax_7 != 0)
                        var_14 = eax_7
                    
                    goto label_43fa69
                
                int32_t eax_6 = sub_438960(arg1, ebx_1, nullptr, &var_1c, &var_18)
                
                if (eax_6 s>= 0)
                    int32_t var_44_5
                    
                    if (eax_6 != 0)
                        var_44_5 = *(ebx_1 + 8)
                        sub_43713d(arg1, ebx_1, 0xbbc, "undeclared identifier '%s'")
                    else
                        esi_1 = 1
                    label_43fa3d:
                        
                        if (esi_1 != 0)
                            goto label_43fa5f
                        
                        var_44_5 = *(ebx_1 + 8)
                        sub_43713d(arg1, ebx_1, 0xbbc, "undeclared identifier '%s'")
            else
            label_43fa03:
                int32_t eax_5 = sub_43be42(arg1, 2, ebx_1, nullptr, nullptr, *(arg1 + 0x10), 2, 
                    &var_14, &var_18)
                
                if (eax_5 s>= 0)
                    if (eax_5 == 0)
                        esi_1 = 1
                    
                    goto label_43fa15

return nullptr
