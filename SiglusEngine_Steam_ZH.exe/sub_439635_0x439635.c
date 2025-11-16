// 函数: sub_439635
// 地址: 0x439635
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
void*** esi = arg4
int32_t edi
int32_t var_270 = edi
void*** var_214 = esi
char const* const edi_2

if (arg6 != 0 || esi == 0)
labelid_6:
    edi_2 = &data_b0018c
else if (arg5 == 0)
    edi_2 = "implicitly "
else
    void** var_240
    sub_46bb94(&var_240)
    void** var_264
    sub_46bb94(&var_264)
    
    if (esi[1] != 9)
        esi = &var_240
        int32_t var_230_1 = 4
        int32_t var_228_1 = 1
        int32_t var_224_1 = sub_4377a1(arg1, var_214)
        
        if (sub_43772a(arg1, var_214) != 0)
            int32_t var_230_2 = 1
    
    void*** edi_1 = arg5
    
    if (edi_1[1] != 9)
        edi_1 = &var_264
        int32_t var_254_1 = 4
        int32_t var_24c_1 = 1
        int32_t var_248_1 = sub_4377a1(arg1, arg5)
        
        if (sub_43772a(arg1, arg5) != 0)
            int32_t var_254_2 = 1
    
    int32_t ecx_6 = esi[4]
    int32_t eax_7
    
    if (ecx_6 != 4)
        eax_7 = edi_1[4]
    
    if (ecx_6 == 4 || eax_7 == 4)
        int32_t ebx_3 = esi[7] * esi[6]
        
        if (ebx_3 u> edi_1[7] * edi_1[6])
            edi_2 = "implicitly "
        else
            uint32_t esi_4 = 0
            
            if (ebx_3 u<= 0)
            labelid_6:
                edi_2 = &data_b0018c
            else
                while (sub_437bdc(arg1, var_214, esi_4, &var_240) s>= 0)
                    if (sub_437bdc(arg1, arg5, esi_4, &var_264) s< 0)
                        break
                    
                    if (sub_4392fd(arg1, &var_240, &var_264, 1) == 0)
                        break
                    
                    esi_4 += 1
                    
                    if (esi_4 u>= ebx_3)
                        goto label_4399de_2
                
                edi_2 = "implicitly "
    else if (ecx_6 == 0)
    label_4398bf:
        
        if (eax_7 == 3)
            edi_2 = "implicitly "
        else
        labelid_6:
            edi_2 = &data_b0018c
    else
        bool cond:3_1
        
        if (ecx_6 != 1)
            if (ecx_6 != 2)
                if (ecx_6 != 3)
                labelid_6:
                    edi_2 = &data_b0018c
                else if (eax_7 != ecx_6)
                    edi_2 = "implicitly "
                else
                    int32_t edi_4 = edi_1[5]
                    
                    if (edi_4 == 0xd)
                    labelid_6:
                        edi_2 = &data_b0018c
                    else if (edi_4 == 0xf)
                        int32_t esi_2 = esi[5]
                        
                        if (esi_2 != edi_4 && esi_2 != 0x10 && esi_2 != 0x11 && esi_2 != 0x12)
                            cond:3_1 = esi_2 != 0x13
                            goto label_439948
                        
                    labelid_6:
                        edi_2 = &data_b0018c
                    else if (edi_4 != 0x14)
                        cond:3_1 = esi[5] != edi_4
                    label_439948:
                        
                        if (cond:3_1)
                            edi_2 = "implicitly "
                        else
                        labelid_6:
                            edi_2 = &data_b0018c
                    else
                        int32_t esi_3 = esi[5]
                        
                        if (esi_3 != edi_4 && esi_3 != 0x15 && esi_3 != 0x16 && esi_3 != 0x17)
                            cond:3_1 = esi_3 != 0x18
                            goto label_439948
                        
                    labelid_6:
                        edi_2 = &data_b0018c
            else if (eax_7 == 0)
            labelid_6:
                edi_2 = &data_b0018c
            else if (eax_7 != 1)
                if (eax_7 != 2)
                    goto label_4398bf
                
                if (esi[6] u> edi_1[6] || esi[7] u> edi_1[7])
                    edi_2 = "implicitly "
                else
                labelid_6:
                    edi_2 = &data_b0018c
            else
                int32_t eax_11 = esi[6]
                
                if (eax_11 != 1 || esi[7] u<= edi_1[7])
                    int32_t esi_1 = esi[7]
                    
                    if (esi_1 != 1 || eax_11 u<= edi_1[7])
                        if (eax_11 != 1 && esi_1 != 1)
                            cond:3_1 = eax_11 * esi_1 != edi_1[7]
                            goto label_439948
                        
                    labelid_6:
                        edi_2 = &data_b0018c
                    else
                        edi_2 = "implicitly "
                else
                    edi_2 = "implicitly "
        else if (eax_7 == 0)
        label_4399de:
            edi_2 = &data_b0018c
        else if (eax_7 != 1)
            if (eax_7 != 2)
                goto label_4398bf
            
            int32_t eax_9 = edi_1[6]
            
            if (eax_9 != 1 || esi[7] u<= edi_1[7])
                int32_t edi_3 = edi_1[7]
                
                if (edi_3 != 1 || esi[7] u<= eax_9)
                    if (eax_9 != 1 && edi_3 != 1)
                        cond:3_1 = eax_9 * edi_3 != esi[7]
                        goto label_439948
                    
                label_4399de_1:
                    edi_2 = &data_b0018c
                else
                    edi_2 = "implicitly "
            else
                edi_2 = "implicitly "
        else if (esi[7] u<= edi_1[7])
        label_4399de_2:
            edi_2 = &data_b0018c
        else
            edi_2 = "implicitly "

void var_108
sub_4378e1(arg1, &var_108, 0xff, var_214)
void var_208
sub_4378e1(arg1, &var_208, 0xff, arg5)
void* var_274_7 = &var_108
void* var_278_1 = &var_208
char const* const var_27c_3 = edi_2
int32_t result

if (arg3 != 0)
    int32_t var_280_1 = arg3
    result = sub_43713d(arg1, arg2, 0xbc9, "'%s': cannot %sconvert from '%s' to '%s'")
else
    result = sub_43713d(arg1, arg2, 0xbc9, "cannot %sconvert from '%s' to '%s'")

sub_745f2b(__security_cookie_1)
return result
