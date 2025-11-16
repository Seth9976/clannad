// 函数: sub_4bd81d
// 地址: 0x4bd81d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_4c = edi
char* eax_1 = *(*(arg2 + 0x68) + 0x18)
int32_t esi = 0
void* var_40 = nullptr
void* var_30 = nullptr
char var_28[0x1f]
_strncpy(&var_28, eax_1, 0x1f)
char var_9 = 0
char* ebx = &var_28
char* var_2c

if (var_28[0] == 0)
    var_2c = nullptr
else
    do
        if (_isalpha(sx.d(*ebx)) == 0)
            break
        
        ebx = &ebx[1]
    while (*ebx != 0)
    
    if (*ebx == 0)
        var_2c = nullptr
    else
        char* var_50_2 = ebx
        var_2c = sub_75efed()

if (*ebx != 0)
    *ebx = 0
    ebx = &ebx[1]

char* eax_2
eax_2.b = *ebx
void* var_2c_1

if (eax_2.b == 0)
    var_2c_1 = &var_2c[*(arg2 + 0x70) u>> 2]
else
    do
        if (_isdigit(sx.d(eax_2.b)) == 0)
            break
        
        ebx = &ebx[1]
        eax_2.b = *ebx
    while (eax_2.b != 0)
    
    if (*ebx == 0)
        var_2c_1 = &var_2c[*(arg2 + 0x70) u>> 2]
    else
        var_2c_1 = 0xffffffff

int32_t eax_7 = *(arg2 + 0x6c)
int32_t result
void* var_64_1
void* var_60_1
char const* const var_58_1

if (eax_7 == 0xffffffff)
    void* esi_1 = *(*(arg1 + 0x10) + (*(arg2 + 4) << 2))
    char* eax_11 = sub_49f6ec(arg1, arg2)
    int16_t eax_12 = (*(esi_1 + 4)).w
    
    if ((eax_12.b & 0x10) != 0 && (eax_12:1.b & 2) == 0)
        uint32_t eax_13 = __stricmp(&var_28, "color")
        int32_t var_50_6
        
        if (eax_13 != 0)
            uint32_t eax_16 = __stricmp(&var_28, "texcoord")
            
            if (eax_16 != 0)
                if (__stricmp(&var_28, "position") == 0)
                label_4bd9df:
                    var_30 = 4
                    esi = sbb.d(esi_1, esi_1, var_2c_1 u< 1) + 1
                else
                    if (__stricmp(&var_28, "fog") == 0)
                        goto label_4bd9df
                    
                    if (__stricmp(&var_28, "psize") == 0)
                        goto label_4bd9df
                    
                    uint32_t eax_21 = __stricmp(&var_28, "diffuse")
                    
                    if (eax_21 != 0)
                        uint32_t eax_23 = __stricmp(&var_28, "specular")
                        
                        if (eax_23 != 0)
                            var_30 = nullptr
                            esi = 1
                        else
                            var_30 = eax_23 + 1
                            int32_t esi_4 = sbb.d(esi_1, esi_1, var_2c_1 u< eax_23 + 1)
                            esi = esi_4 + 1
                            var_40 = eax_23 + 1
                            
                            if (esi_4 == 0xffffffff)
                                var_2c_1 = eax_23 + 1
                    else
                        var_30 = eax_21 + 1
                        int32_t esi_3 = sbb.d(esi_1, esi_1, var_2c_1 u< eax_21 + 1)
                        esi = esi_3 + 1
                        var_40 = eax_21 + 1
                        
                        if (esi_3 == 0xffffffff)
                            var_2c_1 = nullptr
            else
                var_30 = 3
                
                if (arg3 != eax_16)
                    var_50_6 = 8
                    goto label_4bd998
                
                esi = sbb.d(esi_1, esi_1, var_2c_1 u< *(arg1 + 0x3c)) + 1
        else
            var_30 = 1
            
            if (arg3 == eax_13)
                esi = sbb.d(esi_1, esi_1, var_2c_1 u< *(arg1 + 0x28)) + 1
            else
                var_50_6 = 2
            label_4bd998:
                esi = sbb.d(esi_1, esi_1, var_2c_1 u< var_50_6) + 1
        
        if (arg3 == 0 || *(arg2 + 0x10) == 0)
            if (esi != 0)
                char* var_50_7 = eax_1
                char* var_54_9 = eax_11
                sub_4a4100(arg1, *(arg2 + 0x68), 0x1196, "invalid %s semantic '%s'")
            else if (var_40 != 0)
                void* var_50_8 = var_2c_1
                int32_t var_54_10 = (&data_b59650)[var_30]
                char* var_58_2 = eax_1
                char* var_5c_2 = eax_11
                sub_4a4195(arg1, *(arg2 + 0x68), 0x1261, 
                    "%s semantic '%s' has been deprecated; use '%s%d' instead")
        
        if ((var_30 == 4 || esi != 0) && *(arg1 + 0x448) == 0 && arg3 == 0)
            char* var_50_9 = eax_1
            *(arg1 + 0x448) = 1
            char* var_54_11 = eax_11
            sub_4a4100(arg1, *(arg2 + 0x68), 0x1196, "invalid reference to %s semantic '%s'")
            esi = 1
        
        goto label_4bdb9e
    
    if ((eax_12.b & 0x20) != 0)
        if (__stricmp(&var_28, "color") != 0)
            if (__stricmp(&var_28, "depth") != 0)
                var_30 = nullptr
                esi = 1
                goto label_4bdb4a
            
            var_30 = 4
            esi = 1
        label_4bdb4e:
            
            if (arg3 == 0 || *(arg2 + 0x10) == 0)
                char* var_50_10 = eax_1
                char* var_54_14 = eax_11
                sub_4a4100(arg1, *(arg2 + 0x68), 0x1196, "invalid %s semantic '%s'")
        else
            var_30 = 1
            esi = sbb.d(esi_1, esi_1, var_2c_1 u< *(arg1 + 0x48)) + 1
        label_4bdb4a:
            
            if (esi != 0)
                goto label_4bdb4e
        
        if (var_30 != 4)
            goto label_4bdb9e
        
        if (arg3 != 0)
            goto label_4bdc71
        
        char* var_50_11 = eax_1
        char* var_54_15 = eax_11
        var_58_1 = "%s semantic '%s' not yet implemented in ps_1_x"
        int32_t var_5c_3 = 0x1196
        var_60_1 = *(arg2 + 0x68)
        var_64_1 = arg1
        goto label_4bdb96
    
label_4bdc67:
    esi = 1
label_4bdc71:
    
    if (var_2c_1 u> 0xffff)
        esi = 1
    
    *(arg2 + 0x6c) = zx.d(var_30.b) | var_2c_1 << 8
    int32_t eax_41 = neg.d(esi)
    result = sbb.d(eax_41, eax_41, esi != 0) & 0x80004005
else
    uint32_t edx = zx.d(*(arg2 + 0x6d))
    void* eax_8 = eax_7 & 0xff
    var_30 = eax_8
    var_2c_1 = edx
    
    if (eax_8 != 4)
        goto label_4bdb9e
    
    if (*(arg1 + 0x448) != 0 || arg3 != 0)
        goto label_4bdc71
    
    uint32_t var_50_4 = edx
    esi = 1
    *(arg1 + 0x448) = 1
    char (* var_54_1)[0x1f] = &var_28
    var_58_1 = "invalid reference to input semantic '%s%d'"
    int32_t var_5c_1 = 0x1196
    var_60_1 = *(arg2 + 0x68)
    var_64_1 = arg1
label_4bdb96:
    sub_4a4100(var_64_1, var_60_1, 0x1196, var_58_1)
label_4bdb9e:
    
    if (var_30 != 3)
        goto label_4bdc4e
    
    void* edx_2
    
    if (var_2c_1 u<= 0 || var_2c_1 u>= 4 || *(arg2 + 0x10) != 3)
        edx_2 = arg1
    label_4bdc19:
        int32_t ecx_16 = *(edx_2 + 0x3c)
        
        if (var_2c_1 u< ecx_16 || arg3 != 0 || *(edx_2 + 0x448) != 0)
            goto label_4bdc71
        
        int32_t var_50_12 = ecx_16
        esi = 1
        *(edx_2 + 0x448) = 1
        sub_4a4100(edx_2, *(arg2 + 0x68), 0x1196, 
            "'texcoord' reference exceeds valid range for this shader model (max: %i)")
    label_4bdc4e:
        
        if (var_30 == 1)
            *arg2 |= 0x114
            *(arg2 + 0x20) = fconvert.d(float.t(0))
            *(arg2 + 0x28) = fconvert.d(float.t(1))
        
        if (var_30 != 0)
            goto label_4bdc71
        
        goto label_4bdc67
    
    edx_2 = arg1
    
    if (zx.d((*(edx_2 + 0xc8)).w) u>= 0x104)
        goto label_4bdc19
    
    if (*(edx_2 + 0x43c) == 0xffffffff)
        *(edx_2 + 0x43c) = sub_49f4eb(edx_2, "spec", 0x51, 0xffffffff, 4)
    
    int32_t ebx_2 = *(edx_2 + 0x43c)
    
    if (ebx_2 != 0xffffffff)
        *(arg2 + 0xc) = 0
        var_30 = 5
        *(arg2 + 4) = ebx_2
        *(arg2 + 0x10) = var_2c_1 - 1
        goto label_4bdc71
    
    result = 0x8007000e
sub_745f2b(__security_cookie_1)
return result
