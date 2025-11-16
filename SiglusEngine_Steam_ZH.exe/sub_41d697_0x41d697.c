// 函数: sub_41d697
// 地址: 0x41d697
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_74 = edi

if (*arg1 != 0)
    sub_41d17a(arg1)

int32_t var_68
(*(*arg3 + 0x20))(arg3, &var_68)
int32_t var_58
int32_t var_54
int32_t var_50
int32_t var_34
int32_t var_30
int32_t var_2c
int32_t var_28
int32_t var_24
int32_t eax_2
int32_t ebx_1

if (arg5 == 0)
    ebx_1 = var_50
    arg5 = 0
    var_2c = var_58
    var_28 = var_54
    eax_2 = not.d(arg7) & 1
    var_34 = 0
    var_30 = 0
    var_24 = 0
    int32_t var_20_1 = ebx_1
else
    __builtin_memcpy(&var_34, arg5, 0x18)
    
    if (var_2c u> var_58 || var_34 u> var_2c || var_28 u> var_54 || var_30 u> var_28)
        return 0x8876086c
    
    int32_t var_20
    ebx_1 = var_20
    
    if (ebx_1 u> var_50 || var_24 u> ebx_1)
        return 0x8876086c
    
    if (var_34 == 0 && var_2c == var_58 && var_30 == 0 && var_28 == var_54 && var_24 == 0)
        arg5 = 0
    
    if (var_34 != 0 || var_2c != var_58 || var_30 != 0 || var_28 != var_54 || var_24 != 0
            || ebx_1 != var_50)
        arg5 = 1
    
    if ((arg7.b & 1) != 0 || arg5 != 0)
        eax_2 = 0
    else
        eax_2 = 1

int32_t var_60
int32_t var_5c

if (var_5c == 0 && (var_60 & 0x200) == 0)
    return 0x8876086c

int32_t esi_4 = ((zx.d(arg7.b) & 1) | 0x80) << 4
int32_t var_c_1 = esi_4
int32_t var_1c
int32_t result

if (eax_2 == 0 || (var_60 & 0x200) == 0)
label_41d7ff:
    
    if (arg5 == 0)
        goto label_41d8c6
    
    int32_t ecx_5 = var_68
    
    if (ecx_5 s<= 0x34545844)
        if (ecx_5 == 0x34545844 || ecx_5 == 0x31545844 || ecx_5 == 0x32545844)
            goto label_41d857
        
        if (ecx_5 == 0x32595559)
            goto label_41d913
        
        if (ecx_5 != 0x33545844)
            goto label_41d903
        
        goto label_41d857
    
    int32_t var_4c
    int32_t var_48
    int32_t var_3c
    
    if (ecx_5 == 0x35545844)
    label_41d857:
        int32_t edx_2 = var_34 & 0xfffffffc
        int32_t eax_14 = (var_2c + 3) & 0xfffffffc
        int32_t esi_6 = var_30 & 0xfffffffc
        int32_t ecx_8 = (var_28 + 3) & 0xfffffffc
        var_4c = edx_2
        int32_t var_44_1 = eax_14
        var_48 = esi_6
        int32_t var_40_1 = ecx_8
        var_3c = var_24
        int32_t var_38_1 = ebx_1
        
        if (eax_14 u> var_58)
            eax_14 = var_58
            int32_t var_44_2 = eax_14
        
        if (ecx_8 u> var_54)
            ecx_8 = var_54
            int32_t var_40_2 = ecx_8
        
        if (edx_2 != 0 || eax_14 != var_58 || esi_6 != 0 || ecx_8 != var_54 || var_24 != 0
                || ebx_1 != var_50)
            arg5 = 1
            goto label_41d8ac
        
        esi_4 = var_c_1
        goto label_41d8c6
    
    if (ecx_5 == 0x42475247 || ecx_5 == 0x47424752 || ecx_5 == 0x59565955)
    label_41d913:
        int32_t ecx_11 = var_34 & 0xfffffffe
        int32_t eax_18 = (var_2c + 1) & 0xfffffffe
        int32_t var_40_3 = var_28
        var_4c = ecx_11
        int32_t var_44_3 = eax_18
        var_48 = var_30
        var_3c = var_24
        int32_t var_38_2 = ebx_1
        
        if (eax_18 u> var_58)
            eax_18 = var_58
            int32_t var_44_4 = eax_18
        
        if (ecx_11 == 0 && eax_18 == var_58 && var_30 == 0 && var_28 == var_54 && var_24 == 0
                && ebx_1 == var_50)
            goto label_41d8c6
    else
    label_41d903:
        __builtin_memcpy(&var_4c, &var_34, 0x18)
    label_41d8ac:
        
        if (arg5 == 0)
            esi_4 = var_c_1
            goto label_41d8c6
        
        esi_4 = var_c_1
    
    result = (*(*arg3 + 0x24))(arg3, &var_1c, &var_4c, esi_4)
    
    if (result s< 0)
        return result
    
    int32_t eax_21 = var_4c
    var_34 -= eax_21
    int32_t var_2c_1 = var_2c - eax_21
    int32_t var_30_1 = var_30 - var_48
    int32_t var_28_1 = var_28 - var_48
    int32_t var_24_1 = var_24 - var_3c
    int32_t var_20_2 = ebx_1 - var_3c
else
    if ((arg7:2.b & 2) == 0)
        sub_416380(1)
        int32_t* var_8
        
        if ((*(*arg3 + 0x1c))(arg3, 0xac3944, &var_8) s>= 0)
            int32_t* eax_9 = var_8
            
            if ((*(*eax_9 + 0x34))(eax_9) == 1)
                esi_4 |= 0x2000
                var_c_1 = esi_4
                arg5 = 0
            
            int32_t* eax_11 = var_8
            
            if (eax_11 != 0)
                (*(*eax_11 + 8))(eax_11)
                var_8 = nullptr
        
        sub_416380(0)
        goto label_41d7ff
    
    esi_4 |= 0x2000
label_41d8c6:
    result = (*(*arg3 + 0x24))(arg3, &var_1c, 0, esi_4)
    
    if (result s< 0)
        return result
int32_t var_14
*arg2 = var_14
int32_t ecx_14 = var_68
arg2[0x11] = 0
arg2[0x12] = 0
arg2[1] = ecx_14
arg2[2] = var_1c
int32_t var_18
arg2[3] = var_18
arg2[4] = 0
arg2[5] = 0
arg2[8] = 0
arg2[9] = var_50
__builtin_memcpy(&arg2[0xa], &var_34, 0x18)
arg2[0x13] = arg6
arg2[6] = var_58
arg2[0x14] = arg4
arg2[7] = var_54
arg2[0x10] = 1
*arg1 = arg3
(*(*arg3 + 4))(arg3)
return 0
