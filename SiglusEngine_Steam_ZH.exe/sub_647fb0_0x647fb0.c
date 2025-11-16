// 函数: sub_647fb0
// 地址: 0x647fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3808
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg2)
int32_t var_38 = 0
int32_t var_34 = 0
int32_t edi_1 = (eax_4 - edx) s>> 1
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(arg2 + 1)
int32_t eax_9 = (eax_7 - edx_1) s>> 1
int32_t eax_11
int32_t edx_2
edx_2:eax_11 = sx.q(arg4)
int32_t var_30 = 0
int32_t eax_13 = (eax_11 - edx_2) s>> 1
int32_t eax_15
int32_t edx_3
edx_3:eax_15 = sx.q(arg4 + 1)
int32_t ebx_1 = (eax_15 - edx_3) s>> 1
int32_t var_20 = ebx_1
int32_t var_8_1 = 0
int32_t var_60_1
int32_t* var_5c
int32_t var_58
int32_t var_54_1
int32_t var_50_1
int32_t var_4c_5
int32_t* eax_33
int32_t edx_7
int32_t esi_1
int32_t var_2c
int32_t var_28

if (arg6 != 0)
    if (arg2 s<= 0)
    label_648370:
        int32_t eax_16
        eax_16.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_16
    
    ebx_1 = arg3
    *(ebx_1 + 0xc) = arg2
    *(ebx_1 + 0x10) = 1
    sub_5979b0(ebx_1, arg2 << 2)
    int32_t esi_3 = *ebx_1
    
    if (esi_3 == *(ebx_1 + 4))
        esi_3 = 0
    
    arg6 = esi_3
    int32_t eax_36
    
    if (edi_1 s> 0)
        var_2c = edi_1
        var_28 = 1
        sub_5979b0(&var_38, edi_1 << 2)
        eax_36 = var_38
        ebx_1 = eax_36
        
        if (eax_36 == var_34)
            ebx_1 = 0
        
        int32_t edi_4 = 0
        
        if (edi_1 s> 0)
            int32_t ecx_9 = edi_1
            
            do
                int32_t eax_37 = edi_4
                int32_t edx_8
                
                if (edi_1 != 1)
                    if (edi_1 - 1 s<= 0)
                        if (edi_1 - 1 s< 0)
                            if (edi_4 s< edi_1 - 1)
                                eax_37 = edi_1 - 1
                            else if (edi_4 s> 0)
                                eax_37 = 0
                    else if (edi_4 s< 0)
                        eax_37 = 0
                    else if (edi_4 s> edi_1 - 1)
                        eax_37 = edi_1 - 1
                    
                    edx_8 = divs.dp.d(sx.q(eax_37 * 0xff), edi_1 - 1)
                else
                    edx_8 = 0xff
                
                if (arg5 == 0)
                    edx_8 = 0xff - edx_8
                    ecx_9 = edi_1
                
                edi_4 += 1
                *ebx_1 = ((edx_8 << 8 | edx_8) << 8 | edx_8) << 8 | edx_8
                ebx_1 += 4
            while (edi_4 s< ecx_9)
            
            eax_36 = var_38
            esi_3 = arg6
    
    if (edi_1 s<= 0 || eax_36 == var_34)
        eax_36 = 0
    
    sub_6c97b0(eax_36, arg3[3], esi_3, arg3[4], eax_36, var_2c, var_28, 0, 0)
    
    if (eax_9 s<= 0)
        esi_1 = var_38
    else
        var_2c = eax_9
        var_28 = 1
        sub_5979b0(&var_38, eax_9 << 2)
        esi_1 = var_38
        ebx_1 = esi_1
        
        if (esi_1 == var_34)
            ebx_1 = 0
        
        int32_t ecx_14
        ecx_14.b = arg5 == 0
        int32_t edi_5 = 0
        arg4:3.b = ecx_14.b
        
        if (eax_9 s> 0)
            do
                int32_t eax_51 = edi_5
                int32_t edx_11
                
                if (eax_9 != 1)
                    if (eax_9 - 1 s<= 0)
                        if (eax_9 - 1 s< 0)
                            if (edi_5 s< eax_9 - 1)
                                eax_51 = eax_9 - 1
                            else if (edi_5 s> 0)
                                eax_51 = 0
                    else if (edi_5 s< 0)
                        eax_51 = 0
                    else if (edi_5 s> eax_9 - 1)
                        eax_51 = eax_9 - 1
                    
                    edx_11 = divs.dp.d(sx.q(eax_51 * 0xff), eax_9 - 1)
                else
                    edx_11 = 0xff
                
                if (ecx_14.b == 0)
                    edx_11 = 0xff - edx_11
                    ecx_14.b = arg4:3.b
                
                edi_5 += 1
                *ebx_1 = ((edx_11 << 8 | edx_11) << 8 | edx_11) << 8 | edx_11
                ebx_1 += 4
            while (edi_5 s< eax_9)
            
            esi_1 = var_38
    
    int32_t eax_62 = esi_1
    var_4c_5 = 0
    var_50_1 = edi_1
    
    if (esi_1 == var_34)
        eax_62 = 0
    
    var_54_1 = var_28
    var_58 = var_2c
    var_5c = eax_62
    eax_33 = arg3
    var_60_1 = eax_33[4]
    edx_7 = eax_33[3]
else
    if (arg4 s<= 0)
        goto label_648370
    
    int32_t* edi_2 = arg3
    edi_2[4] = arg4
    edi_2[3] = 1
    sub_5979b0(edi_2, arg4 << 2)
    int32_t eax_18 = *edi_2
    
    if (eax_18 == edi_2[1])
        eax_18 = 0
    
    arg6 = eax_18
    sub_647500(eax_18, 1, &var_38, eax_13, arg5, 0)
    esi_1 = var_38
    int32_t eax_19 = esi_1
    
    if (esi_1 == var_34)
        eax_19 = 0
    
    sub_6c97b0(eax_19, edi_2[3], arg6, edi_2[4], eax_19, var_2c, var_28, 0, 0)
    
    if (ebx_1 s> 0)
        var_2c = 1
        var_28 = ebx_1
        sub_5979b0(&var_38, ebx_1 << 2)
        esi_1 = var_38
        ebx_1 = esi_1
        
        if (esi_1 == var_34)
            ebx_1 = 0
        
        int32_t ecx_5
        ecx_5.b = arg5 == 0
        int32_t edi_3 = 0
        arg4:3.b = ecx_5.b
        
        if (var_20 s> 0)
            do
                int32_t eax_22 = edi_3
                int32_t edx_5
                
                if (var_20 != 1)
                    if (var_20 - 1 s<= 0)
                        if (var_20 - 1 s< 0)
                            if (edi_3 s< var_20 - 1)
                                eax_22 = var_20 - 1
                            else if (edi_3 s> 0)
                                eax_22 = 0
                    else if (edi_3 s< 0)
                        eax_22 = 0
                    else if (edi_3 s> var_20 - 1)
                        eax_22 = var_20 - 1
                    
                    edx_5 = divs.dp.d(sx.q(eax_22 * 0xff), var_20 - 1)
                else
                    edx_5 = 0xff
                
                if (ecx_5.b == 0)
                    edx_5 = 0xff - edx_5
                    ecx_5.b = arg4:3.b
                
                edi_3 += 1
                *ebx_1 = ((edx_5 << 8 | edx_5) << 8 | edx_5) << 8 | edx_5
                ebx_1 += 4
            while (edi_3 s< var_20)
            
            esi_1 = var_38
        
        edi_2 = arg3
    
    var_4c_5 = eax_13
    edx_7 = edi_2[3]
    eax_33 = esi_1
    var_50_1 = 0
    var_54_1 = var_28
    
    if (esi_1 == var_34)
        eax_33 = nullptr
    
    var_58 = var_2c
    var_5c = eax_33
    var_60_1 = edi_2[4]
sub_6c97b0(eax_33, edx_7, arg6, var_60_1, var_5c, var_58, var_54_1, var_50_1, var_4c_5)

if (esi_1 != 0)
    j__free(esi_1)

int32_t eax_63
eax_63.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_63
