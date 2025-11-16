// 函数: sub_43c82f
// 地址: 0x43c82f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi

if ((arg2 != 0 && arg2[1] != 0xd) || (arg3 != 0 && arg3[1] != 0xd))
    return nullptr

if (arg4 != 0 && arg4[1] != 0xd)
    return nullptr

void* ebx_1 = &arg2[0xc]

if (arg2 == 0)
    ebx_1 = &arg1[8]

void*** var_1c_1

if (arg2 == 0)
    var_1c_1 = nullptr
else
    var_1c_1 = arg2[4]

void*** var_14_1

if (arg3 == 0)
    var_14_1 = nullptr
else
    var_14_1 = arg3[4]

int32_t* var_18_1

if (arg4 == 0)
    var_18_1 = nullptr
else
    var_18_1 = arg4[4]

void* var_20 = var_14_1
int32_t* var_24 = var_18_1
void*** ebx_2 = nullptr
void*** eax_7 = sub_42cfa1(0x50)
void*** result

if (eax_7 == 0)
    result = nullptr
else
    result = sub_46bee5(eax_7, 0, 0x18, 0, 0, 1, ebx_1)

if (result != 0)
    if (sub_43772a(arg1, var_1c_1) != 0)
        void* var_34_4 = &result[4]
        char* var_34_3
        
        if (sub_439a16(arg1, var_14_1, var_18_1, &var_20, &var_24) s>= 0)
            int32_t eax_11 = result[4]
            
            if (eax_11 == 0)
            label_43c9b7:
                
                if (arg2 == 0)
                label_43c9da:
                    void*** eax_18 = sub_42cfa1(0x50)
                    void*** esi_4
                    
                    if (eax_18 == 0)
                        esi_4 = nullptr
                    else
                        esi_4 = sub_46bee5(eax_18, 0, 0, 0, 0, 1, ebx_1)
                    
                    result[9] = esi_4
                    
                    if (esi_4 != 0)
                        void*** eax_21 = sub_42cfa1(0x14)
                        void*** eax_22
                        
                        if (eax_21 == 0)
                            eax_22 = nullptr
                        else
                            eax_22 = sub_46b602(eax_21, 0, 0, "Types")
                        
                        esi_4[4] = eax_22
                        
                        if (eax_22 != 0)
                            void* ebx_4 = var_20
                            
                            if (ebx_4 != 0)
                                esi_4[4][2] = (*(*ebx_4 + 4))()
                            
                            if (ebx_4 == 0 || esi_4[4][2] != 0)
                                void*** eax_26 = sub_42cfa1(0x14)
                                void*** eax_27
                                
                                if (eax_26 == 0)
                                    eax_27 = nullptr
                                else
                                    eax_27 = sub_46b602(eax_26, 0, 0, "Value")
                                
                                esi_4[8] = eax_27
                                
                                if (eax_27 != 0)
                                    if (arg3 == 0)
                                    label_43cabd:
                                        void*** eax_31 = sub_42cfa1(0x14)
                                        void*** eax_32
                                        
                                        if (eax_31 == 0)
                                            eax_32 = nullptr
                                        else
                                            eax_32 = sub_46b602(eax_31, 0, 0, "Types")
                                        
                                        esi_4[4][3] = eax_32
                                        
                                        if (eax_32 != 0)
                                            int32_t* ebx_5 = var_24
                                            
                                            if (ebx_5 != 0)
                                                *(esi_4[4][3] + 8) = (*(*ebx_5 + 4))()
                                            
                                            if (ebx_5 == 0 || *(esi_4[4][3] + 8) != 0)
                                                void*** eax_37 = sub_42cfa1(0x14)
                                                void*** eax_38
                                                
                                                if (eax_37 == 0)
                                                    eax_38 = nullptr
                                                else
                                                    eax_38 = sub_46b602(eax_37, 0, 0, "Value")
                                                
                                                esi_4[8][3] = eax_38
                                                
                                                if (eax_38 != 0)
                                                    if (arg4 == 0)
                                                    label_43cb7b:
                                                        sub_4381dc(esi_4)
                                                        sub_4381dc(result)
                                                        return result
                                                    
                                                    void*** eax_40
                                                    
                                                    if (var_18_1 == ebx_5)
                                                        eax_40 = sub_46b5aa(arg4)
                                                    else if (sub_43782f(var_18_1, ebx_5) != 0)
                                                        eax_40 = sub_46b5aa(arg4)
                                                    else
                                                        eax_40 = sub_43c606(arg1, ebx_5, arg4, 0, 0)
                                                    
                                                    *(esi_4[8][3] + 8) = eax_40
                                                    
                                                    if (*(esi_4[8][3] + 8) != 0)
                                                        goto label_43cb7b
                                    else
                                        void*** eax_29
                                        
                                        if (var_14_1 == ebx_4)
                                            eax_29 = sub_46b5aa(arg3)
                                        else if (sub_43782f(var_14_1, ebx_4) != 0)
                                            eax_29 = sub_46b5aa(arg3)
                                        else
                                            eax_29 = sub_43c606(arg1, ebx_4, arg3, 0, 0)
                                        
                                        esi_4[8][2] = eax_29
                                        
                                        if (esi_4[8][2] != 0)
                                            goto label_43cabd
                else
                    void*** eax_17 = sub_43c606(arg1, ebx_2, arg2, 0, 0)
                    result[8] = eax_17
                    
                    if (eax_17 != 0)
                        goto label_43c9da
            else
                if (*(eax_11 + 4) != 9)
                    void*** eax_13 = sub_42cfa1(0x24)
                    
                    if (eax_13 == 0)
                        ebx_2 = nullptr
                    else
                        int32_t var_34_6 = 0x200
                        ebx_2 = sub_46bbbb(eax_13, 2, 0, 1, sub_4377a1(arg1, result[4]), 0x200)
                else
                    void*** eax_12 = sub_42cfa1(0x24)
                    
                    if (eax_12 == 0)
                        ebx_2 = nullptr
                    else
                        void* esi_3 = result[4]
                        int32_t var_34_5 = 0x200
                        ebx_2 = sub_46bbbb(eax_12, 2, 0, *(esi_3 + 0x18), *(esi_3 + 0x1c), 0x200)
                
                if (ebx_2 != 0)
                    if (sub_4392fd(arg1, ebx_2, var_1c_1, 0) != 0)
                        goto label_43c9b7
                    
                    var_34_3 = "dimension of conditional does not match value"
                    goto label_43c9a7
        else
            var_34_3 = "type mismatch between conditional values"
        label_43c9a7:
            int32_t var_38_6 = 0xbcc
            sub_43713d(arg1, ebx_1, 0xbcc, var_34_3)
    else
        int32_t var_38_1 = 0xbcc
        sub_43713d(arg1, ebx_1, 0xbcc, "conditional must be numeric")

return nullptr
