// 函数: sub_64dcd0
// 地址: 0x64dcd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3a00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
int32_t var_8_1 = 0
int16_t* esi

if (arg1[5] u< 8)
    esi = arg1
else
    esi = *arg1

while (true)
    int32_t edx_1 = arg1[5]
    int32_t* eax_3
    
    if (edx_1 u< 8)
        eax_3 = arg1
    else
        eax_3 = *arg1
    
    int32_t edi_2 = arg1[4] * 2
    
    if (esi == eax_3 + edi_2)
        break
    
    int16_t ecx = *esi
    
    if (ecx != 0xff0a && ecx != 0xff05)
        sub_55d330(&var_5c, 1, ecx)
        esi = &esi[1]
        continue
    
    int32_t* eax_5
    
    if (edx_1 u< 8)
        eax_5 = arg1
    else
        eax_5 = *arg1
    
    int32_t edx_3 = arg1[5]
    
    if (&esi[1] != eax_5 + edi_2)
        int32_t eax_9 = zx.d(esi[1]) + 0xdf
        
        if ((sbb.d(eax_9, eax_9, 0x19 u< eax_9.w)).b != 0xff)
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            int16_t var_44 = 0
            var_8_1.b = 1
            int32_t* eax_12
            
            if (edx_3 u< 8)
                eax_12 = arg1
            else
                eax_12 = *arg1
            
            void* edi_3 = &esi[2]
            int32_t eax_15
            
            if (edi_3 != eax_12 + edi_2)
                eax_15 = zx.d(*edi_3) + 0xdf
            
            int16_t var_2c
            int32_t var_18_1
            char* var_9c_3
            void* const var_78
            
            if (edi_3 == eax_12 + edi_2 || (sbb.d(eax_15, eax_15, 0x19 u< eax_15.w)).b == 0xff)
                var_18_1 = 7
                int32_t var_1c_2 = 0
                var_2c = 0
                
                if (esi != edi_3)
                    sub_52e720(&var_2c, esi, (edi_3 - esi) s>> 1)
                
                var_8_1.b = 3
                int32_t ecx_5 = data_bac418
                var_78 = nullptr
                char* var_80
                
                if (sub_5bd960(ecx_5, &var_2c, &var_78, &var_80) != 0)
                    int32_t var_98_7 = 1
                    var_9c_3 = var_80
                label_64de9d:
                    void** eax_22 = sub_55b400(var_78 + 4, var_9c_3, 1)
                    
                    if (&var_44 != eax_22)
                        sub_52e3c0(&var_44, eax_22, 0, 0xffffffff)
                else
                    sub_52e3c0(&var_44, nullptr, 0, 0xffffffff)
            else
                edi_3 = &esi[3]
                var_18_1 = 7
                int32_t var_1c_1 = 0
                var_2c = 0
                
                if (esi != edi_3)
                    sub_52e720(&var_2c, esi, (edi_3 - esi) s>> 1)
                
                var_8_1.b = 2
                int32_t ecx_3 = data_bac418
                var_78 = nullptr
                char* var_84
                
                if (sub_5bd960(ecx_3, &var_2c, &var_78, &var_84) != 0)
                    int32_t var_98_4 = 1
                    var_9c_3 = var_84
                    goto label_64de9d
                
                sub_52e3c0(&var_44, nullptr, 0, 0xffffffff)
            var_8_1.b = 1
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            esi = edi_3
            int32_t edi_4 = arg1[5]
            int32_t* eax_27
            
            if (edi_4 u< 8)
                eax_27 = arg1
            else
                eax_27 = *arg1
            
            int32_t edx_5 = arg1[4] * 2
            int32_t var_7c_2 = edx_5
            
            if (esi != eax_27 + edx_5 && *esi + 0xf0 u<= 9)
                int32_t ecx_9 = 0
                
                while (true)
                    int32_t* eax_31
                    
                    if (edi_4 u< 8)
                        eax_31 = arg1
                    else
                        eax_31 = *arg1
                    
                    if (esi == eax_31 + edx_5)
                        break
                    
                    uint32_t edx_6 = zx.d(*esi)
                    
                    if (edx_6.w + 0xf0 u> 9)
                        break
                    
                    edx_5 = var_7c_2
                    esi = &esi[1]
                    ecx_9 = edx_6 + ((ecx_9 * 5 - 0x7f88) << 1)
                
                if (ecx_9 s>= var_34_1)
                    int16_t* eax_36 = &var_44
                    int32_t var_34_2 = 0
                    
                    if (var_30_1 u>= 8)
                        eax_36 = var_44.d
                    
                    *eax_36 = 0
                else
                    int16_t* eax_35 = sub_53d730(&var_44, &var_2c, ecx_9, 1)
                    var_8_1.b = 4
                    int16_t var_74 = 0
                    int32_t var_60_1 = 7
                    int32_t var_64_1 = 0
                    sub_52e3c0(&var_74, eax_35, 0, 0xffffffff)
                    var_8_1.b = 5
                    sub_52e3c0(&var_44, &var_74, 0, 0xffffffff)
                    
                    if (var_60_1 u>= 8)
                        j__free(var_74.d)
                    
                    var_8_1.b = 1
                    int32_t var_60_2 = 7
                    int32_t var_64_2 = 0
                    var_74 = 0
                    
                    if (var_18_1 u>= 8)
                        j__free(var_2c.d)
            
            sub_532870(&var_5c, &var_44, 0, 0xffffffff)
            var_8_1.b = 0
            
            if (var_30_1 u< 8)
                continue
            else
                j__free(var_44.d)
                continue
    
    sub_55d330(&var_5c, 1, ecx)
    esi = &esi[1]

int32_t* result = &var_5c

if (arg1 != &var_5c)
    result = sub_52e3c0(arg1, &var_5c, 0, 0xffffffff)

if (var_48 u>= 8)
    result = j__free(var_5c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
