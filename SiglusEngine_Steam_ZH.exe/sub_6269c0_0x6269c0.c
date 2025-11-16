// 函数: sub_6269c0
// 地址: 0x6269c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c00c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* arg_4
int32_t* ecx = &arg_4
int32_t ebx
ebx.b = 1

if (arg5 u>= 8)
    ecx = arg_4

int32_t* var_98 = ecx
void* edi = ecx + (arg4 << 1)
int32_t var_2c
int16_t* eax_4 = sub_6ae800(&var_2c, &arg_4)
var_8_1.b = 1

if (&arg_4 != eax_4)
    sub_52e3c0(&arg_4, eax_4, 0, 0xffffffff)

int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

int32_t var_58 = 7
int32_t var_5c = 0
int16_t var_6c = 0
int32_t var_40 = 7
int32_t var_44 = 0
int16_t var_54 = 0
int128_t var_3c = zx.o(0)
var_8_1.b = 2
int32_t* ecx_3 = &arg_4
int32_t* esi = &arg_4

if (arg5 u>= 8)
    ecx_3 = arg_4

if (arg5 u>= 8)
    esi = arg_4

while (true)
label_626a84:
    int32_t* edx_1 = &arg_4
    
    if (arg5 u>= 8)
        edx_1 = arg_4
    
    if (esi == edx_1 + (arg4 << 1))
        if (var_5c == 0)
            int32_t var_18_4 = 7
            int32_t var_1c_4 = 0
            var_2c.w = 0
            
            if (ecx_3 != esi)
                sub_52e720(&var_2c, ecx_3, (esi - ecx_3) s>> 1)
            
            var_8_1.b = 3
            sub_52e3c0(&var_6c, &var_2c, 0, 0xffffffff)
            var_8_1.b = 2
            
            if (var_18_4 u>= 8)
                j__free(var_2c)
        
        sub_629610(arg3, &var_6c)
        ebx.b = 1
        break
    
    uint32_t eax_7 = zx.d(*esi)
    int32_t var_78
    
    if (eax_7 != 0x7c)
        if (eax_7 == 0x28)
            if (var_5c == 0)
                int32_t var_18_2 = 7
                int32_t var_1c_2 = 0
                var_2c.w = 0
                
                if (ecx_3 != esi)
                    sub_52e720(&var_2c, ecx_3, (esi - ecx_3) s>> 1)
                
                var_8_1.b = 7
                eax_7 = sub_52e3c0(&var_6c, &var_2c, 0, 0xffffffff)
                var_8_1.b = 2
                
                if (var_18_2 u>= 8)
                    eax_7 = j__free(var_2c)
            
            esi += 2
            int32_t var_70_3 = 1
            int32_t* var_74 = esi
            uint32_t var_7c = esi
            var_78 = 0
            
            if (esi != edi)
                eax_7 = zx.d(*esi)
                
                if (eax_7 == 0x2b)
                    var_70_3 = 1
                    eax_7 = esi + 2
                    var_7c = eax_7
                else if (eax_7 == 0x2d)
                    var_70_3 = 0xffffffff
                    eax_7 = esi + 2
                    var_7c = eax_7
            
            int16_t* eax_20 = sub_6af380(eax_7, &var_78, &var_7c, edi)
            
            if (eax_20.b != 0)
                eax_20 = var_78 * var_70_3
                esi = var_7c
                var_74 = esi
                var_3c:4.d = eax_20
                eax_20.b = 1
            
            ebx.b &= eax_20.b
            
            if (esi == edi)
                eax_20.b = 0
            else if (*esi == 0x2c)
                esi += 2
                eax_20.b = 1
                var_74 = esi
            else
                eax_20.b = 0
            
            ebx.b &= eax_20.b
            var_7c = esi
            int32_t var_70_4 = 1
            var_78 = 0
            
            if (esi != edi)
                eax_20 = zx.d(*esi)
                
                if (eax_20 == 0x2b)
                    var_70_4 = 1
                    eax_20 = esi + 2
                    var_7c = eax_20
                else if (eax_20 == 0x2d)
                    var_70_4 = 0xffffffff
                    eax_20 = esi + 2
                    var_7c = eax_20
            
            void* eax_22
            
            if (sub_6af380(eax_20, &var_78, &var_7c, edi).b != 0)
                esi = var_7c
                var_3c:8.d = var_78 * var_70_4
            label_626cf4:
                var_74 = esi
                eax_22.b = 1
                goto label_626cf9
            
            while (true)
                eax_22.b = 0
            label_626cf9:
                ebx.b &= eax_22.b
                
                if (esi == edi)
                    eax_22.b = 0
                else if (*esi == 0x2c)
                    esi += 2
                    eax_22.b = 1
                    var_74 = esi
                else
                    eax_22.b = 0
                
                if (eax_22.b == 0)
                    if (esi == edi)
                        eax_22.b = 0
                    else if (*esi == 0x29)
                        esi += 2
                        eax_22.b = 1
                    else
                        eax_22.b = 0
                    
                    ebx.b &= eax_22.b
                    
                    if (ebx.b == 0)
                        ebx.b = 0
                        break
                    
                    ecx_3 = esi
                    goto label_626a84
                
                int32_t var_18_3 = 7
                int32_t var_1c_3 = 0
                var_2c.w = 0
                int32_t* eax_24
                int32_t ecx_15
                eax_24, ecx_15 = sub_52e720(&var_2c, u"blend", 5)
                int32_t var_98_11 = ecx_15
                ebx:1.b = sub_6af310(eax_24, &var_2c, &var_74, edi)
                
                if (var_18_3 u>= 8)
                    j__free(var_2c)
                
                esi = var_74
                
                if (ebx:1.b == 0)
                    int32_t var_70_6 = 1
                    eax_22 = esi
                    
                    if (esi != edi)
                        uint32_t ecx_22 = zx.d(*esi)
                        
                        if (ecx_22 == 0x2b)
                            var_70_6 = 1
                            eax_22 = esi + 2
                        else if (ecx_22 == 0x2d)
                            var_70_6 = 0xffffffff
                            eax_22 = esi + 2
                    
                    if (eax_22 != edi)
                        if (*eax_22 - 0x30 u<= 9)
                            int32_t ecx_25 = 0
                        label_626e44:
                            uint32_t esi_2 = zx.d(*eax_22)
                            
                            if (esi_2.w - 0x30 u<= 9)
                                eax_22 += 2
                                ecx_25 = esi_2 + ((ecx_25 * 5 - 0x18) << 1)
                                
                                if (eax_22 != edi)
                                    goto label_626e44
                            
                            esi = eax_22
                            var_3c.d = ecx_25 * var_70_6
                            goto label_626cf4
                else
                    char eax_25
                    
                    if (esi == edi)
                        eax_25 = 0
                    else if (*esi == 0x3d)
                        esi += 2
                        eax_25 = 1
                        var_74 = esi
                    else
                        eax_25 = 0
                    
                    ebx.b &= eax_25
                    int32_t var_70_5 = 1
                    eax_22 = esi
                    
                    if (esi != edi)
                        uint32_t ecx_17 = zx.d(*esi)
                        
                        if (ecx_17 == 0x2b)
                            var_70_5 = 1
                            eax_22 = esi + 2
                        else if (ecx_17 == 0x2d)
                            var_70_5 = 0xffffffff
                            eax_22 = esi + 2
                    
                    if (eax_22 != edi)
                        if (*eax_22 - 0x30 u<= 9)
                            int32_t edx_7 = 0
                        label_626dd1:
                            uint32_t esi_1 = zx.d(*eax_22)
                            
                            if (esi_1.w - 0x30 u<= 9)
                                eax_22 += 2
                                edx_7 = esi_1 + ((edx_7 * 5 - 0x18) << 1)
                                
                                if (eax_22 != edi)
                                    goto label_626dd1
                            
                            esi = eax_22
                            var_3c:0xc.d = edx_7 * var_70_5
                            goto label_626cf4
            
            break
        
        esi += 2
    else
        if (var_5c == 0)
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_2c.w = 0
            
            if (ecx_3 != esi)
                sub_52e720(&var_2c, ecx_3, (esi - ecx_3) s>> 1)
            
            var_8_1.b = 4
            sub_52e3c0(&var_6c, &var_2c, 0, 0xffffffff)
            var_8_1.b = 2
            
            if (var_18_1 u>= 8)
                j__free(var_2c)
        
        int32_t* edx_3 = arg3
        int32_t ecx_6 = edx_3[1]
        
        if (&var_6c u>= ecx_6)
            goto label_626b4b
        
        int32_t edx_2 = *edx_3
        int32_t ecx_9
        
        if (edx_2 u> &var_6c)
            edx_3 = arg3
        label_626b4b:
            
            if (ecx_6 == edx_3[2])
                int32_t var_98_5 = ecx_6
                sub_6296b0(edx_3)
                edx_3 = arg3
            
            ecx_9 = edx_3[1]
            var_78 = ecx_9
            int32_t var_70_2 = ecx_9
            var_8_1.b = 6
            
            if (ecx_9 != 0)
                sub_629870(ecx_9, &var_6c)
                edx_3 = arg3
        else
            edx_3 = arg3
            int32_t eax_12 = (&var_6c - edx_2) s>> 6
            var_78 = eax_12
            
            if (ecx_6 == edx_3[2])
                int32_t var_98_4 = ecx_6
                sub_6296b0(edx_3)
                eax_12 = var_78
                edx_3 = arg3
            
            ecx_9 = edx_3[1]
            void** eax_14 = (eax_12 << 6) + *edx_3
            var_78 = ecx_9
            int32_t var_70_1 = ecx_9
            var_8_1.b = 5
            
            if (ecx_9 != 0)
                sub_629870(ecx_9, eax_14)
                edx_3 = arg3
        var_8_1.b = 2
        int16_t* eax_15 = &var_6c
        edx_3[1] += 0x40
        var_5c = 0
        
        if (var_58 u>= 8)
            eax_15 = var_6c.d
        
        *eax_15 = 0
        int16_t* eax_16 = &var_54
        int32_t var_44_1 = 0
        
        if (var_40 u>= 8)
            eax_16 = var_54.d
        
        esi += 2
        *eax_16 = 0
        ecx_3 = esi
        var_3c = zx.o(0)

if (var_40 u>= 8)
    j__free(var_54.d)

int32_t var_40_1 = 7
int32_t var_44_2 = 0
var_54 = 0

if (var_58 u>= 8)
    j__free(var_6c.d)

int32_t var_58_1 = 7
int32_t var_5c_1 = 0
var_6c = 0

if (arg5 u>= 8)
    j__free(arg_4)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
