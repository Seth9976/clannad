// 函数: sub_43eb4f
// 地址: 0x43eb4f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg3
void* var_14 = nullptr
void* var_18 = nullptr
void*** var_c = nullptr
void*** var_10 = nullptr

if (ebx != 0 && ebx[1] != 0xd)
    return nullptr

if (arg4 != 0)
    if (arg4[1] != 0xd)
        return nullptr
    
    arg3 = &arg4[0xc]
else if (ebx == 0)
    arg3 = arg1 + 0x20
else
    arg3 = &ebx[0xc]

int32_t edi
int32_t var_24_1 = edi
void*** eax_3 = sub_42cfa1(0x50)
int32_t edi_1 = arg2
void*** result_1

if (eax_3 == 0)
    result_1 = nullptr
else
    result_1 = sub_46bee5(eax_3, 0, edi_1, 0, 0, arg5, arg3)

void*** result

if (result_1 != 0)
    int32_t eax_6
    
    if (ebx != 0)
        eax_6 = (*(*ebx + 4))()
        result_1[8] = eax_6
    
    if (ebx != 0 && eax_6 == 0)
        result_1 = nullptr
    else if (edi_1 == 0x1c || edi_1 == 0x1d || edi_1 == 0x1e || edi_1 == 0x1f || edi_1 == 0x20
            || edi_1 == 0x21 || edi_1 == 0x22)
        int32_t* eax_17
        
        if (edi_1 == 0x1c)
            edi_1 = 0x15
            eax_17 = 7
        else if (edi_1 == 0x1d)
            edi_1 = 0x15
            eax_17 = 8
        else if (edi_1 == 0x1e)
            edi_1 = 0x15
            eax_17 = 9
        else if (edi_1 == 0x1f)
            edi_1 = 0x15
            eax_17 = 0xa
        else if (edi_1 == 0x20)
            edi_1 = 0x15
            eax_17 = 0xb
        else if (edi_1 == 0x21)
            edi_1 = 1
            eax_17 = 2
        else if (edi_1 != 0x22)
            eax_17 = arg4
        else
            edi_1 = 1
            eax_17 = 3
        
        int32_t eax_18 = sub_43eb4f(eax_17, ebx, arg4, 0)
        result_1[9] = eax_18
        
        if (eax_18 == 0)
            result_1 = nullptr
        else
            result_1[7] = edi_1
        label_43ec89:
            void* eax_19 = result_1[8]
            void* eax_20
            
            if (eax_19 == 0)
                eax_20 = var_14
            else
                eax_20 = *(eax_19 + 0x10)
                var_14 = eax_20
                var_18 = eax_20
            
            if (edi_1 == 0 || edi_1 == 1 || edi_1 == 0x14 || edi_1 == 0x15 || edi_1 == 0x10
                || edi_1 == 0x11)
            label_43ece4:
                void*** ebx_1
                
                if (edi_1 == 2 || edi_1 == 3 || edi_1 == 0x14 || edi_1 == 0x15)
                    ebx_1 = var_14
                    int32_t eax_23 = sub_437693(arg1, ebx_1)
                    int32_t eax_24
                    void* edx_2
                    
                    if (eax_23 == 0)
                        eax_24, edx_2 = sub_438042(result_1[8])
                    
                    if (eax_23 != 0 || eax_24 != 0)
                        sub_43713d(arg1, arg3, 0xbd1, "l-value specifies const object")
                        result_1 = nullptr
                    else
                        int32_t eax_26 = *(*(edx_2 + 0x10) + 0x10)
                        
                        if (eax_26 != 3 && eax_26 != 4)
                            goto label_43ed50
                        
                        if (sub_43772a(arg1, ebx_1) != 0)
                            goto label_43ed50
                        
                        sub_43713d(arg1, arg3, 0xbf9, 
                            "object assignments are not allowed inside functions")
                        result_1 = nullptr
                else
                    ebx_1 = var_14
                label_43ed50:
                    void* eax_28 = result_1[9]
                    
                    if (eax_28 != 0)
                        void*** eax_29 = *(eax_28 + 0x10)
                        var_c = eax_29
                        var_10 = eax_29
                    
                    if (edi_1 == 0x14 || edi_1 == 0x15)
                        if (sub_4392fd(arg1, ebx_1, var_c, 0) != 0)
                            int32_t eax_40
                            
                            if (ebx_1 != 0)
                                eax_40 = (*ebx_1)[1]()
                                result_1[4] = eax_40
                            
                            if (ebx_1 != 0 && eax_40 == 0)
                                result_1 = nullptr
                            else
                                var_10 = ebx_1
                            label_43eeae:
                                
                                if (result_1[8] == 0 || ebx_1 == var_18)
                                    goto label_43eee3
                                
                                int32_t eax_41
                                int32_t* edx_4
                                eax_41, edx_4 = sub_43782f(ebx_1, var_18)
                                
                                if (eax_41 != 0)
                                    goto label_43eee3
                                
                                void*** eax_42 = sub_43c606(arg1, var_18, edx_4, eax_41, eax_41)
                                
                                if (eax_42 == 0)
                                    result_1 = nullptr
                                else
                                    result_1[8] = eax_42
                                label_43eee3:
                                    
                                    if (result_1[9] == 0)
                                        goto label_43ef18
                                    
                                    void*** eax_43 = var_10
                                    
                                    if (var_c == eax_43)
                                        goto label_43ef18
                                    
                                    int32_t eax_44
                                    int32_t* edx_6
                                    eax_44, edx_6 = sub_43782f(var_c, eax_43)
                                    
                                    if (eax_44 != 0)
                                        goto label_43ef18
                                    
                                    void*** eax_45 = sub_43c606(arg1, var_10, edx_6, eax_44, eax_44)
                                    
                                    if (eax_45 == 0)
                                        result_1 = nullptr
                                    else
                                        result_1[9] = eax_45
                                    label_43ef18:
                                        
                                        if (result_1[4] == 0)
                                            result_1[4] = 0
                                        
                                        sub_4381dc(result_1)
                                        
                                        if (sub_4380be(result_1) != 0)
                                            void*** result_2 = sub_43e401(arg1, result_1)
                                            
                                            if (result_2 != 0)
                                                result_1 = result_2
                        else
                            sub_439635(arg1, arg3, 0, ebx_1, var_c, 0)
                            result_1 = nullptr
                    else if (edi_1 == 0)
                        if (ebx_1 == 0)
                            goto label_43eeae
                        
                        int32_t eax_31 = (*ebx_1)[1]()
                        result_1[4] = eax_31
                        
                        if (eax_31 != 0)
                            goto label_43eeae
                        
                        result_1 = nullptr
                    else if (edi_1 == 4 || edi_1 == 5 || edi_1 == 6 || edi_1 == 2 || edi_1 == 3
                            || edi_1 == 1)
                        int32_t eax_37
                        
                        if (ebx_1 != 0)
                            eax_37 = (*ebx_1)[1]()
                            result_1[4] = eax_37
                        
                        if (ebx_1 == 0 || eax_37 != 0)
                            sub_437571(arg1, result_1[4], 1)
                            goto label_43eeae
                        
                        result_1 = nullptr
                    else
                        if (edi_1 != 0xc && edi_1 != 0xd && edi_1 != 0xe && edi_1 != 0xf
                                && edi_1 != 0x10 && edi_1 != 0x11 && edi_1 != 0x12
                                && edi_1 != 0x13)
                            void* var_28_8 = &result_1[4]
                            
                            if (sub_439a16(arg1, ebx_1, var_c, &var_18, &var_10) s>= 0)
                                goto label_43eeae
                            
                            goto label_43ee2d
                        
                        void* var_28_9 = &result_1[4]
                        
                        if (sub_439a16(arg1, ebx_1, var_c, &var_18, &var_10) s>= 0)
                            result_1[4][5] = 0
                            goto label_43eeae
                        
                    label_43ee2d:
                        sub_43713d(arg1, arg3, 0xbcc, "type mismatch")
                        result_1 = nullptr
            else
                if (eax_20 != 0 && *(var_14 + 4) == 9 && sub_43772a(arg1, var_14) != 0)
                    goto label_43ece4
                
                sub_43713d(arg1, arg3, 0xbce, "scalar, vector, or matrix expected")
                result_1 = nullptr
    else
        if (arg4 == 0)
            goto label_43ec89
        
        int32_t eax_8 = (*(*arg4 + 4))()
        result_1[9] = eax_8
        
        if (eax_8 != 0)
            goto label_43ec89
        
        result_1 = nullptr
    
    result = result_1
else
    result = nullptr

return result
