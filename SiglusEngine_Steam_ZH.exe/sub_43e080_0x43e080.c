// 函数: sub_43e080
// 地址: 0x43e080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_18 = nullptr
int32_t edi
int32_t var_68 = edi
void* eax = sub_437565(arg1)
void** var_5c
sub_46bd30(&var_5c)

if (eax != 0 && arg2 != 0)
    int32_t* eax_1 = *(eax + 0x18)
    
    if ((*(eax + 0x10) & 0x40) != 0)
        int32_t var_6c_1 = arg2[6]
        sub_43713d(arg1, &arg2[4], 0xbe7, "'%s': functions cannot be declared 'uniform'")
    
    if ((*(eax + 0x10) & 1) != 0)
        int32_t var_6c_2 = arg2[6]
        sub_43713d(arg1, &arg2[4], 0xbbe, "'%s': functions cannot be declared 'extern'")
    
    if (sub_43772a(arg1, eax_1) == 0)
        int32_t var_6c_4 = arg2[6]
        sub_43713d(arg1, &arg2[4], 0xbde, "'%s': function return value must be numeric")
    
    int32_t var_10_1 = 0
    int32_t* i_3
    void*** i
    
    for (i = i_3; i != 0; i = i[3])
        void* ecx_2 = i[2]
        
        if (ecx_2 != 0 && *(ecx_2 + 4) == 6)
            void*** i_4 = i[3]
            
            if (i_4 != 0 && i_4[2][1] == 0xc)
                var_10_1 = 1
                i = i_4
            else if (var_10_1 != 0)
                int32_t var_6c_5 = *(*(ecx_2 + 0x14) + 0x18)
                int32_t var_70_1 = arg2[6]
                sub_43713d(arg1, &arg2[4], 0xbe4, "'%s': missing default value for parameter '%s'")
    
    void*** eax_4 = sub_42cfa1(0x14)
    void*** result
    
    if (eax_4 == i)
        result = i
    else
        result = sub_46b602(eax_4, i, i, "Stmts")
    
    if (result != i)
        void*** eax_6 = sub_42cfa1(0x30)
        int32_t* i_2
        void*** i_5
        
        if (eax_6 == i)
            i_2 = i
            i_5 = i
        else
            i_5 = sub_46b9d6(eax_6, 2, i, i, i)
            i_2 = i_5
        
        if (i_5 != 0)
            result[2] = i_5
            int32_t eax_9 = sub_46b5aa(arg2)
            i_5[5] = eax_9
            
            if (eax_9 != 0)
                void*** eax_10 = sub_42cfa1(0x40)
                void*** esi_1
                
                if (eax_10 == 0)
                    esi_1 = nullptr
                else
                    esi_1 = sub_46bc38(eax_10)
                
                if (esi_1 != 0)
                    i_5[6] = esi_1
                    esi_1[6] = *(eax + 0x10)
                    int32_t* eax_13 = *(eax + 0x14)
                    int32_t eax_14
                    
                    if (eax_13 != 0)
                        eax_14 = sub_46b5aa(eax_13)
                        esi_1[7] = eax_14
                    
                    if (eax_13 == 0 || eax_14 != 0)
                        int32_t eax_15
                        
                        if (eax_1 != 0)
                            eax_15 = sub_46b5aa(eax_1)
                            esi_1[8] = eax_15
                        
                        if (eax_1 == 0 || eax_15 != 0)
                            sub_437571(arg1, esi_1[8], 1)
                            
                            if (arg3 == 0)
                            label_43e2be:
                                int32_t* i_6 = i_3
                                int32_t eax_22
                                
                                if (i_6 != 0 && i_6[2] != 0)
                                    eax_22 = sub_46b5aa(i_6)
                                    esi_1[9] = eax_22
                                
                                if (i_6 == 0 || i_6[2] == 0 || eax_22 != 0)
                                    int32_t eax_24 = sub_43be42(arg1, 2, &arg2[4], esi_1[7], 
                                        esi_1[9], *(*(arg1 + 0x10) + 0x20), 0xa, &i_3, &var_18)
                                    void* eax_25
                                    
                                    if (eax_24 s>= 0)
                                        int32_t* i_7 = i_3
                                        
                                        if (eax_24 != 0)
                                            void* var_6c_18 = esi_1[8]
                                            esi_1[4] = *(arg1 + 0x58)
                                            int32_t eax_34 = sub_4377a1(arg1, var_6c_18)
                                            esi_1[5] = eax_34
                                            *(arg1 + 0x58) += eax_34
                                        label_43e37c:
                                            int32_t var_4c_1 = esi_1[4]
                                            int32_t var_40_1 = 0
                                            int32_t var_48_1 = esi_1[5]
                                            int32_t var_44_1 = 3
                                            void* eax_37 = sub_46b5aa(esi_1[8])
                                            int32_t var_30_1 = sub_46b5aa(arg3)
                                            sub_437571(arg1, eax_37, 0)
                                            esi_1[0xb] = sub_43c4ff(arg1, arg2, &var_5c)
                                            
                                            if (i_7 != 0)
                                                goto label_43e3f3
                                            
                                            void* ebx_3 = *(arg1 + 0x10)
                                            *(arg1 + 0x10) = *(ebx_3 + 0x20)
                                            bool cond:7_1 = sub_438816(arg1, i_2, 0) s< 0
                                            *(arg1 + 0x10) = ebx_3
                                            
                                            if (not(cond:7_1))
                                                *(arg1 + 0x54) += 1
                                            label_43e3f3:
                                                *(*(arg1 + 0x10) + 0x14) = arg2[6]
                                                *(arg1 + 0x18) = esi_1
                                                return result
                                        else
                                            if (sub_43782f(esi_1[8], i_7[8]) != 0)
                                                esi_1[4] = i_7[4]
                                                esi_1[5] = i_7[5]
                                                i_2[9] = *(*(var_18 + 8) + 0x18)
                                                goto label_43e37c
                                            
                                            eax_25 = &arg2[4]
                                            int32_t var_6c_17 = *(eax_25 + 8)
                                            sub_43713d(arg1, eax_25, 0xbfc, 
                                                "'%s': function return value differs from prototype")
                                    else
                                        eax_25 = &arg2[4]
                                        int32_t var_6c_15 = *(eax_25 + 8)
                                        sub_43713d(arg1, eax_25, 0xbbb, "redefinition of '%s'")
                            else
                                if (esi_1[8] == 0)
                                    int32_t var_6c_10 = arg2[6]
                                    sub_43713d(arg1, &arg2[4], 0xc04, 
                                        "'%s': void function cannot have a semantic")
                                    arg3 = nullptr
                                
                                if (arg3 == 0)
                                    goto label_43e2be
                                
                                int32_t eax_17 = sub_46b5aa(arg3)
                                esi_1[0xd] = eax_17
                                
                                if (eax_17 != 0)
                                    int32_t* i_1
                                    
                                    do
                                        int32_t* eax_19 = arg3[2]
                                        
                                        if (eax_19 != 0 && eax_19[1] == 3)
                                            int32_t eax_20 = sub_46b5aa(eax_19)
                                            esi_1[0xc] = eax_20
                                            
                                            if (eax_20 == 0)
                                                return nullptr
                                        
                                        i_1 = arg3[3]
                                        arg3 = i_1
                                    while (i_1 != 0)
                                    goto label_43e2be

return nullptr
