// 函数: sub_4c5cf9
// 地址: 0x4c5cf9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
char* ebx = nullptr
int32_t edi
int32_t var_38 = edi
int32_t result

if ((*(arg1 + 0xc8) & 0xffff0000) == 0x46580000)
    if (*(arg2 + 0x6c) == 0xffffffff)
        *(arg2 + 0x6c) = *(arg1 + 0x1f8)
        *(arg1 + 0x1f8) += 1
    
    result = 0
else if (*(arg2 + 0x6c) == 0xffffffff)
    char var_28[0x1f]
    _strncpy(&var_28, *(*(arg2 + 0x68) + 0x18), 0x20)
    char var_9_1 = 0
    char* esi_1 = &var_28
    
    if (var_28[0] == 0)
        goto label_4c5d91
    
    do
        if (_isalpha(sx.d(*esi_1)) == 0)
            break
        
        esi_1 = &esi_1[1]
    while (*esi_1 != 0)
    
    if (*esi_1 != 0)
        char* var_40_2 = esi_1
        ebx = sub_75efed()
    label_4c5d91:
        
        if (*esi_1 != 0)
            *esi_1 = 0
            esi_1 = &esi_1[1]
    
    char* eax_3
    eax_3.b = *esi_1
    void* ebx_1
    
    if (eax_3.b == 0)
        ebx_1 = &ebx[*(arg2 + 0x70) u>> 2]
    else
        do
            if (_isdigit(sx.d(eax_3.b)) == 0)
                break
            
            esi_1 = &esi_1[1]
            eax_3.b = *esi_1
        while (eax_3.b != 0)
        
        if (*esi_1 == 0)
            ebx_1 = &ebx[*(arg2 + 0x70) u>> 2]
        else
            ebx_1 = 0xffffffff
    
    int16_t eax_10 = (*(*(*(arg1 + 0x10) + (*(arg2 + 4) << 2)) + 4)).w
    char* var_48_2
    int32_t var_2c
    int32_t esi_3
    
    if ((eax_10.b & 0x10) != 0 && (eax_10:1.b & 2) == 0)
        if (__stricmp(&var_28, "position") != 0)
            if (__stricmp(&var_28, "psize") != 0)
                var_2c = 0
                esi_3 = 1
            else
                var_2c = 3
                esi_3 = sbb.d(esi_1, esi_1, ebx_1 u< 1) + 1
        else
            var_2c = 2
            esi_3 = sbb.d(esi_1, esi_1, ebx_1 u< 1) + 1
        
        if (esi_3 == 0 || *(arg2 + 0x10) != 0)
            goto label_4c5e8d
        
        void* var_40_4 = ebx_1
        char (* var_44_4)[0x1f] = &var_28
        var_48_2 = "invalid reference to input semantic '%s%d'"
        goto label_4c5e85
    
    int32_t eax_15
    
    if ((eax_10.b & 0x20) == 0)
        eax_15 = 0
        esi_3 = 1
    else
        uint32_t eax_13 = __stricmp(&var_28, "color")
        
        if (eax_13 != 0)
            var_2c = 0
            esi_3 = 1
        else
            var_2c = eax_13 + 1
            esi_3 = sbb.d(esi_1, esi_1, ebx_1 u< eax_13 + 1) + 1
        
        if (esi_3 == 0 || *(arg2 + 0x10) != 0)
            goto label_4c5e8d
        
        void* var_40_5 = ebx_1
        char (* var_44_6)[0x1f] = &var_28
        var_48_2 = "invalid reference to output semantic '%s%d'"
    label_4c5e85:
        sub_4a4100(arg1, *(arg2 + 0x68), 0x1196, var_48_2)
    label_4c5e8d:
        eax_15 = var_2c
        
        if (eax_15 == 0)
            eax_15 = var_2c
            esi_3 = 1
    
    if (ebx_1 u> 0xffff)
        esi_3 = 1
    
    int32_t eax_18 = neg.d(esi_3)
    *(arg2 + 0x6c) = (ebx_1 | 0xffffff00) << 8 | (eax_15 & 0xff)
    result = sbb.d(eax_18, eax_18, esi_3 != 0) & 0x80004005
else
    result = 0

sub_745f2b(__security_cookie_1)
return result
