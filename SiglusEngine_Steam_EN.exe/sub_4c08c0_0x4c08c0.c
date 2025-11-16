// 函数: sub_4c08c0
// 地址: 0x4c08c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx_2 = 0
int32_t edi = 0
int32_t var_28
__builtin_memset(&var_28, 0, 0x20)
int32_t var_5c = 0
int32_t var_50 = 0
int32_t var_60 = 0
int32_t var_48 = 0
int32_t var_20_1

if (*arg3 s>= arg6)
    if (*arg3 s> arg8)
        ebx_2 = 1
    
    var_60 = ebx_2
    int32_t var_1c_1 = ebx_2
else
    var_20_1 = 1

int32_t ebx_4 = *arg2

if (ebx_4 s>= arg7)
    if (ebx_4 s> arg9)
        edi = 1
    
    var_5c = edi
    int32_t var_24_1 = edi
else
    var_28 = 1

int32_t ebx_6 = *arg4
int32_t var_10_1

if (ebx_6 s>= arg6)
    int32_t esi_1 = 0
    
    if (ebx_6 s> arg8)
        esi_1 = 1
    
    var_48 = esi_1
    int32_t var_c_1 = esi_1
else
    var_10_1 = 1

int32_t edi_2 = *arg5
int32_t var_18

if (edi_2 s>= arg7)
    int32_t eax_7 = 0
    
    if (edi_2 s> arg9)
        eax_7 = 1
    
    var_50 = eax_7
    int32_t var_14_1 = eax_7
else
    var_18 = 1

int32_t eax_8 = 0

while (*(&var_28 + eax_8) == 0 || *(&var_18 + eax_8) == 0)
    eax_8 += 4
    
    if (eax_8 s>= 0x10)
        int32_t edi_3 = edi_2 - 0x80000000
        int32_t eax_10 = *arg2 - 0x80000000
        int32_t edx_4 = eax_10
        int32_t var_34_1 = eax_10
        int32_t ebx_8 = *arg3 - 0x80000000
        int32_t ecx_2 = ebx_8
        int32_t var_40_1 = edx_4
        int32_t var_44_1 = ecx_2
        int32_t eax_12 = edx_4
        int32_t esi_3 = *arg4 - 0x80000000
        int32_t eax_14
        int32_t ecx_3
        int32_t edx_6
        
        if (var_20_1 != 0)
            int32_t eax_15 = sub_4c0850(eax_12, edx_4, ecx_2, esi_3, edi_3, arg6 - 0x80000000)
            edx_6 = arg7 - 0x80000000
            ecx_3 = arg9 - 0x80000000
            
            if (eax_15 u< edx_6 || eax_15 u> ecx_3)
            label_4c0ace:
                
                if (var_28 != 0)
                    eax_12 = var_34_1
                    goto label_4c0ae8
                
                if (var_5c != 0)
                    eax_12 = var_34_1
                    goto label_4c0b28
            else
                ebx_8 = arg6 - 0x80000000
                ecx_2 = var_44_1
                edx_4 = var_40_1
                var_34_1 = eax_15
            label_4c0a9e:
                eax_14 = arg8 - 0x80000000
            label_4c0aa1:
                
                if (var_10_1 != 0)
                    eax_14 = sub_4c0850(eax_14, edi_3, esi_3, ecx_2, edx_4, arg6 - 0x80000000)
                    
                    if (eax_14 u>= arg7 - 0x80000000 && eax_14 u<= arg9 - 0x80000000)
                        esi_3 = arg6 - 0x80000000
                        edi_3 = eax_14
                    label_4c0bed:
                        *arg3 = ebx_8 - 0x80000000
                        *arg2 = var_34_1 - 0x80000000
                        *arg4 = esi_3 - 0x80000000
                        *arg5 = edi_3 - 0x80000000
                        sub_5f02dd(eax_1 ^ &__saved_ebp)
                        return 1
                    
                label_4c0b90:
                    
                    if (var_18 != 0)
                        goto label_4c0ba8
                    
                    if (var_50 != 0)
                        goto label_4c0bd2
                else
                    if (var_48 != 0)
                        eax_14 = sub_4c0850(eax_14, edx_4, ecx_2, esi_3, edi_3, eax_14)
                        
                        if (eax_14 u< arg7 - 0x80000000 || eax_14 u> arg9 - 0x80000000)
                            goto label_4c0b90
                        
                        esi_3 = arg8 - 0x80000000
                        edi_3 = eax_14
                        goto label_4c0bed
                    
                    if (var_18 != 0)
                    label_4c0ba8:
                        esi_3 =
                            sub_4c0850(eax_14, esi_3, edi_3, var_40_1, var_44_1, arg7 - 0x80000000)
                        
                        if (esi_3 u>= arg6 - 0x80000000 && esi_3 u<= arg8 - 0x80000000)
                            edi_3 = arg7 - 0x80000000
                            goto label_4c0bed
                    else
                        if (var_50 == 0)
                            goto label_4c0bed
                        
                    label_4c0bd2:
                        esi_3 =
                            sub_4c0850(eax_14, var_44_1, var_40_1, edi_3, esi_3, arg9 - 0x80000000)
                        
                        if (esi_3 u>= arg6 - 0x80000000 && esi_3 u<= arg8 - 0x80000000)
                            edi_3 = arg9 - 0x80000000
                            goto label_4c0bed
        else
            if (var_60 != 0)
                int32_t eax_13 = sub_4c0850(eax_12, edi_3, esi_3, ebx_8, eax_12, arg8 - 0x80000000)
                edx_6 = arg7 - 0x80000000
                ecx_3 = arg9 - 0x80000000
                
                if (eax_13 u< edx_6 || eax_13 u> ecx_3)
                    goto label_4c0ace
                
                ebx_8 = arg8 - 0x80000000
                ecx_2 = var_44_1
                edx_4 = var_40_1
                var_34_1 = eax_13
                eax_14 = ebx_8
                goto label_4c0aa1
            
            if (var_28 != 0)
                edx_6 = arg7 - 0x80000000
            label_4c0ae8:
                ebx_8 = sub_4c0850(eax_12, ebx_8, eax_12, edi_3, esi_3, edx_6)
                
                if (ebx_8 u>= arg6 - 0x80000000)
                    eax_14 = arg8 - 0x80000000
                    
                    if (ebx_8 u<= eax_14)
                        edx_4 = var_40_1
                        var_34_1 = arg7 - 0x80000000
                        ecx_2 = var_44_1
                        goto label_4c0aa1
            else
                if (var_5c == 0)
                    goto label_4c0a9e
                
                ecx_3 = arg9 - 0x80000000
            label_4c0b28:
                ebx_8 = sub_4c0850(eax_12, esi_3, edi_3, eax_12, ebx_8, ecx_3)
                
                if (ebx_8 u>= arg6 - 0x80000000)
                    eax_14 = arg8 - 0x80000000
                    
                    if (ebx_8 u<= eax_14)
                        edx_4 = var_40_1
                        var_34_1 = arg9 - 0x80000000
                        ecx_2 = var_44_1
                        goto label_4c0aa1
        break

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
