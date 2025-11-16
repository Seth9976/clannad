// 函数: sub_412469
// 地址: 0x412469
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* ebx = nullptr
void*** var_8_1 = nullptr
void* var_c_1 = nullptr

if (arg3 == 0)
    arg3 = arg1 + 0xc

int32_t var_18 = 0

if (sub_40b60c(arg3) == 0)
    return 0x8876086c

int32_t edi
int32_t var_18_1 = edi
int32_t result

if ((arg2 & 0xfffe2000) != 0)
    result = 0x8876086c
else
    void* eax_5 = arg2 & 0x1000
    
    if (eax_5 == 0)
        if (eax_5 == 0 || arg4 == *(arg1 + 0x230))
            goto label_4124db
        
        result = 0x8876086c
    else if (sub_408829(arg3, arg1 + 0xc) == 0 || (eax_5 != 0 && arg4 != *(arg1 + 0x230)))
        result = 0x8876086c
    else
    label_4124db:
        int16_t eax_8 = (*(arg1 + 0x214)).w
        
        if ((eax_8:1.b & 4) != 0 || (eax_8.b & 0x40) != 0)
            result = 0x8876086c
        else
            int32_t* eax_14
            
            if ((arg2.b & 1) != 0)
                void*** eax_9 = sub_745f3f(0x27c)
                
                if (eax_9 == 0)
                    var_8_1 = nullptr
                else
                    var_8_1 = sub_41166f(eax_9, arg4, arg3, arg2)
                
                if (var_8_1 == 0)
                    result = 0x8007000e
                else
                    result = sub_41286d(arg1, var_8_1)
                    
                    if (result s< 0)
                        goto label_412643
                    
                    if (eax_5 != 0)
                        *(arg1 + 0x218) |= 0x20
                        var_8_1[0x8d] = *(arg1 + 0x234)
                        int32_t* eax_13 = *(arg1 + 0x234)
                        (*(*eax_13 + 4))(eax_13)
                    
                    void* ecx_6 = var_8_1
                    eax_14 = *(ecx_6 + 0x234)
                    var_8_1 = nullptr
                    var_c_1 = ecx_6
                label_412607:
                    
                    if (eax_5 == 0)
                        result = sub_412a93(arg1, arg3, eax_14)
                    
                    if (eax_5 == 0 && result s< 0)
                        goto label_41262c
                    
                    *arg5 = var_c_1
            else if (*(arg1 + 0x264) u> 0xffff || *(arg1 + 0x23c) u> 0xffff)
                result = 0x8876086c
            label_41262c:
                
                if (var_c_1 != 0)
                    (*(*var_c_1 + 8))(var_c_1)
                label_412636:
                    
                    if (ebx != 0)
                        (*(*ebx + 8))(ebx)
                    label_412643:
                        
                        if (var_8_1 != 0)
                            (*var_8_1)[2](var_8_1)
            else
                void*** eax_15 = sub_745f3f(0x27c)
                
                if (eax_15 == 0)
                    ebx = nullptr
                else
                    ebx = sub_4111ca(eax_15, arg4, arg3, arg2)
                
                if (ebx != 0)
                    result = sub_412656(arg1, ebx)
                    
                    if (result s< 0)
                        goto label_412636
                    
                    if (eax_5 != 0)
                        *(arg1 + 0x218) |= 0x20
                        *(ebx + 0x234) = *(arg1 + 0x234)
                        int32_t* eax_19 = *(arg1 + 0x234)
                        (*(*eax_19 + 4))(eax_19)
                    
                    eax_14 = *(ebx + 0x234)
                    var_c_1 = ebx
                    ebx = nullptr
                    goto label_412607
                
                result = 0x8007000e

return result
