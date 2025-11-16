// 函数: sub_6e3b70
// 地址: 0x6e3b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd220
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg5 != 0 || arg2 != arg1[0x49])
    if (arg1[0x48] == 0xffffffff)
        result.b = 1
    else
        int32_t esi_1 = arg1[0x49]
        
        if (esi_1 == 0xffffffff)
            result.b = 1
        else if (arg2 s>= esi_1)
            arg1[0x3d] += arg2 - esi_1 - 1
            int32_t eax_13 = arg1[0x4d]
            void* esi_4 = (esi_1 << 5) + eax_13
            void* ecx_14 = (arg2 << 5) + eax_13
            
            if (*(esi_4 + 0x10) == *(ecx_14 + 0x10))
                result.b = arg5
            else if (*(esi_4 + 4) s>= *(arg1[0x4a] + *(ecx_14 + 0x14) * 0x1c + 0x10))
                result.b = arg5
            else
                result.b = 1
        else
            arg1[0x3d] += arg1[0x47] - esi_1 - 1 + arg2
            result.b = 1
    
    arg1[0x3c] += 1
    int32_t edi_1 = arg1[0x4d]
    int32_t ecx_1 = arg2 << 5
    char var_4d_1 = 0
    uint32_t var_58_1 = *(ecx_1 + edi_1 + 0x10)
    int16_t var_2c
    int32_t var_18_2
    int32_t ecx_10
    char var_5c
    int32_t var_54_1
    void var_4c
    int32_t* ecx_18
    int32_t esi_5
    
    if (result.b == 0)
        int32_t esi_6 = arg1[0x49]
        void* edx_7 = (esi_6 << 5) + edi_1
        int32_t edi_4 = *(edx_7 + 4)
        ecx_18 = arg1[0x4a] + edi_4 * 0x1c
        uint32_t edx_8 = 0xffffffff
        
        if (*(edx_7 + 0x10) != var_58_1)
            edx_8 = var_58_1
        
        char eax_17 = 0
        var_58_1 = edx_8
        
        if (ecx_18[1].b != 0)
            eax_17 = 1
        
        esi_5 = esi_6 + 1
        var_5c = eax_17
        var_54_1 = edi_4 + 1
    label_6e3dc8:
        uint32_t eax_19 = var_58_1
        void* ecx_19 = &ecx_18[7]
        void* var_60_2 = ecx_19
        
        if (eax_19 != 0xffffffff && esi_5 != eax_19)
            while (true)
                if (arg1 != 0xfffffeb0 && arg1[0x54] != 0)
                    eax_19 = sub_6e5220(eax_19, &var_4c, &arg1[0x54], 1)
                    
                    if (eax_19 s> 0)
                        esi_5 += 1
                        
                        if (esi_5 != var_58_1)
                            continue
                        
                        ecx_19 = var_60_2
                        break
                
                if (sub_6e3050(arg1, var_54_1) s< 0)
                    int32_t var_1c_4 = 0
                    int32_t var_18_4 = 0
                    int32_t var_18_5 = 7
                    int32_t var_1c_5 = 0
                    var_2c = 0
                    int32_t var_88_8 = sub_52e720(&var_2c, 0xb05a0c, 0x1c)
                    int32_t var_8_3 = 3
                    sub_6e2770(arg1, &var_2c)
                    int32_t var_8_4 = 0xffffffff
                    sub_52e8a0(&var_2c)
                    result.b = 0
                    goto label_6e4034
                
                eax_19 = zx.d(var_5c)
                
                if (*(var_60_2 + 4) != 0)
                    eax_19 = 1
                
                var_54_1 += 1
                var_5c = eax_19.b
                var_60_2 += 0x1c
        
        void* ecx_21 = ecx_19 + 4
        
        while (true)
            int32_t eax_20
            
            if (arg1 != 0xfffffeb0 && arg1[0x54] != 0)
                eax_20 = sub_6e5220(eax_19, &var_4c, &arg1[0x54], 1)
            
            if (arg1 != 0xfffffeb0 && arg1[0x54] != 0 && eax_20 s> 0)
                void var_64
                eax_19 = sub_6e8f50(&var_64, &var_4c, arg1[0xc2], &var_64)
                
                if (eax_19 s< 0)
                    int16_t var_44
                    void** eax_28 = sub_6b9ed0(&var_44)
                    int32_t var_8_5 = 4
                    void** eax_29 = sub_548cb0(eax_28, 0xb05aa0, &var_2c, eax_28)
                    var_8_5.b = 5
                    
                    if (arg1 != eax_29)
                        sub_52e3c0(arg1, eax_29, 0, 0xffffffff)
                    
                    var_8_5.b = 4
                    int32_t var_18
                    
                    if (var_18 u>= 8)
                        j__free(var_2c.d)
                    
                    int32_t var_18_6 = 7
                    int32_t var_1c_6 = 0
                    var_2c = 0
                    int32_t var_8_6 = 0xffffffff
                    int32_t var_30
                    
                    if (var_30 u>= 8)
                        j__free(var_44.d)
                    
                    int32_t var_30_1 = 7
                    var_44 = 0
                    result.b = 0
                    int32_t var_34_1 = 0
                    goto label_6e4034
                
                if (esi_5 != arg2)
                    esi_5 += 1
                    continue
            else if (var_5c == 0)
                if (sub_6e3050(arg1, var_54_1) s< 0)
                    int32_t var_1c_7 = 0
                    int32_t var_18_7 = 0
                    var_18_2 = 7
                    int32_t var_1c_8 = 0
                    var_2c = 0
                    ecx_10 = sub_52e720(&var_2c, 0xb05a80, 0xf)
                    int32_t var_8_7 = 7
                    break
                
                eax_19 = zx.d(var_5c)
                
                if (*ecx_21 != 0)
                    eax_19 = 1
                
                var_54_1 += 1
                var_5c = eax_19.b
                ecx_21 += 0x1c
                continue
            
            void* ecx_38 = arg1[0x4d] + ecx_1
            arg1[0x3e] += *(ecx_38 + 0x1c) - *(ecx_38 + 0x18) + 1
            arg1[0x48] = var_54_1
            arg1[0x49] = arg2
            sub_6e41b0(arg1, arg3, arg4)
            goto label_6e402f
    else
        sub_6e5160(&arg1[0x54])
        int32_t ecx_4 = *(ecx_1 + edi_1 + 0x14) * 7
        int32_t eax_8 = arg1[0x4a]
        int32_t edi_2 = *(eax_8 + (ecx_4 << 2) + 0x10)
        int32_t eax_9 = sub_6e3050(arg1, edi_2)
        
        if (eax_9 s>= 0)
            while (true)
                ecx_18 = eax_8 + (ecx_4 << 2)
                
                if (edi_2 == *ecx_18)
                    uint32_t edx_4 = zx.d(var_4d_1)
                    esi_5 = ecx_18[6]
                    
                    if (ecx_18[1].b != 0)
                        edx_4 = 1
                    
                    var_5c.d = edx_4
                    var_54_1 = edi_2 + 1
                    break
                
                while (arg1 != 0xfffffeb0)
                    if (arg1[0x54] == 0)
                        break
                    
                    eax_9 = sub_6e5220(eax_9, &var_4c, &arg1[0x54], 1)
                    
                    if (eax_9 s<= 0)
                        break
                
                edi_2 += 1
                eax_9 = sub_6e3050(arg1, edi_2)
                
                if (eax_9 s< 0)
                    goto label_6e3c9d
            
            goto label_6e3dc8
        
    label_6e3c9d:
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        ecx_10 = sub_52e720(&var_2c, 0xb05a48, 0x1a)
        int32_t var_8_1 = 1
    int32_t var_88_4 = ecx_10
    sub_6e2770(arg1, &var_2c)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_3 = 7
    var_2c = 0
    result.b = 0
    int32_t var_1c_3 = 0
else
label_6e402f:
    result.b = 1

label_6e4034:
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
