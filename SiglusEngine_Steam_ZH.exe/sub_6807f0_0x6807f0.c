// 函数: sub_6807f0
// 地址: 0x6807f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7923
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = data_bac508
int32_t var_94 = 0
int32_t var_90 = 0
int32_t var_8c = 0
int32_t var_8_1 = 0
int32_t* edi = &data_4ebe3b0
int32_t eax_3 = data_4ebe3c4
int32_t* esi = &data_4ebe3b0

if (eax_3 u>= 8)
    edi = data_4ebe3b0

int32_t edx = 0
int32_t var_84 = 0

if (eax_3 u>= 8)
    esi = data_4ebe3b0

while (true)
    int32_t* ecx_1 = &data_4ebe3b0
    
    if (eax_3 u>= 8)
        ecx_1 = data_4ebe3b0
    
    void* eax_5 = data_4ebe3c0 * 2
    void* result
    
    if (esi == eax_5 + ecx_1 && edx != 0)
        result.b = 0
    label_680cf7:
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_745f2b(eax_2 ^ &__saved_ebp)
        return result
    
    uint32_t eax_6
    
    if (edx == 1)
        eax_6 = zx.d(*esi)
        
        if (eax_6 != 0x22)
        label_6808af:
            
            if (eax_6 == 0x5c)
                edx = 2
                var_84 = 2
        else
            edx = 0
            var_84 = 0
    else if (edx == 2)
        edx = 1
        var_84 = 1
    else if (edx == 0)
        int32_t* eax_7 = &data_4ebe3b0
        
        if (data_4ebe3c4 u>= 8)
            eax_7 = data_4ebe3b0
        
        if (esi != eax_7 + eax_5)
            eax_6 = zx.d(*esi)
        
        if (esi == eax_7 + eax_5 || eax_6 == 0x20)
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            var_8_1.b = 1
            int32_t var_a8_1 = 7
            int32_t var_ac_1 = 0
            int16_t var_bc = 0
            int32_t** var_88
            int32_t** var_c0 = var_88
            int32_t* var_64
            sub_6aea70(sub_60c770(&var_bc, edi, esi), 0x20, &var_64, var_bc)
            var_8_1.b = 2
            void* const var_a8_2 = 3
            int32_t var_68_1 = 7
            int32_t* var_ac_2 = &data_aee7a0
            int32_t var_6c_1 = 0
            int16_t var_7c = 0
            sub_52e720(&var_7c, var_ac_2, var_a8_2)
            int32_t* ecx_5 = &var_64
            int32_t var_50
            
            if (var_50 u>= 8)
                ecx_5 = var_64
            
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            int32_t* ecx_6 = &var_64
            
            if (var_50 u>= 8)
                ecx_6 = var_64
            
            int16_t var_44 = 0
            var_8_1.b = 4
            void* var_a8_3 = 0xffffffff
            int32_t var_54
            void* var_48_1 = ecx_5 + (var_54 << 1)
            int32_t var_ac_3 = 0
            int32_t* var_4c = ecx_6
            sub_52e3c0(&var_44, &var_7c, var_ac_3, var_a8_3)
            var_8_1.b = 6
            
            if (var_68_1 u>= 8)
                j__free(var_7c.d)
            
            int32_t var_68_2 = 7
            var_7c = 0
            int16_t* var_a8_5 = &var_2c
            int32_t var_6c_2 = 0
            sub_52e820(&var_c0, u"/select=%s")
            void* ecx_9
            
            if (sub_6afb70(&var_4c, var_c0) == 0)
                int16_t* var_a8_6 = &var_2c
                sub_52e820(&var_c0, u"/start=%s")
                
                if (sub_6afb70(&var_4c) != 0)
                    ebx[0x1c] = 1
                    ecx_9 = &ebx[0x20]
                    goto label_680b51
                
                int32_t* var_a8_7 = &var_88
                sub_52e820(&var_c0, u"/z_no=%d")
                
                if (sub_6afb70(&var_4c) == 0)
                    var_c0 = u"/debug_on"
                    sub_52e820(&var_bc, var_c0)
                    var_c0 = &var_4c
                    
                    if (sub_6afb70(var_c0, var_bc) == 0)
                        var_c0 = u"/debug_off"
                        sub_52e820(&var_bc, var_c0)
                        var_c0 = &var_4c
                        
                        if (sub_6afb70(var_c0) == 0)
                            int16_t* var_a8_8 = &var_2c
                            sub_52e820(&var_c0, u"/dp=%s")
                            
                            if (sub_6afb70(&var_4c) != 0)
                                ecx_9 = &ebx[0x44]
                                goto label_680b51
                            
                            int16_t* var_a8_9 = &var_2c
                            sub_52e820(&var_c0, u"/dk=%s")
                            
                            if (sub_6afb70(&var_4c) != 0)
                                ecx_9 = &ebx[0x5c]
                                goto label_680b51
                            
                            int16_t* var_a8_10 = &var_2c
                            sub_52e820(&var_c0, u"/work_dir=%s")
                            
                            if (sub_6afb70(&var_4c) != 0)
                                ebx[0x74] = 1
                                ecx_9 = &ebx[0x78]
                                goto label_680b51
                            
                            var_c0 = u"/no_interval"
                            sub_52e820(&var_bc, var_c0)
                            var_c0 = &var_4c
                            
                            if (sub_6afb70(var_c0) == 0)
                                var_c0 = u"/end_start"
                                sub_52e820(&var_bc, var_c0)
                                var_c0 = &var_4c
                                
                                if (sub_6afb70(var_c0) == 0)
                                    var_c0 = u"/log"
                                    sub_52e820(&var_bc, var_c0)
                                    var_c0 = &var_4c
                                    
                                    if (sub_6afb70(var_c0) == 0)
                                        var_c0 = u"/window"
                                        sub_52e820(&var_bc, var_c0)
                                        var_c0 = &var_4c
                                        
                                        if (sub_6afb70(var_c0) == 0)
                                            var_c0 = u"/fullscreen"
                                            sub_52e820(&var_bc, var_c0)
                                            var_c0 = &var_4c
                                            
                                            if (sub_6afb70(var_c0) == 0)
                                                var_c0 = u"/overflow_error_off"
                                                sub_52e820(&var_bc, var_c0)
                                                var_c0 = &var_4c
                                                
                                                if (sub_6afb70(var_c0) != 0)
                                                    ebx[0x95] = 1
                                            else
                                                ebx[0x94] = 1
                                        else
                                            ebx[0x93] = 1
                                    else
                                        ebx[0x92] = 1
                                else
                                    ebx[0x91] = 1
                            else
                                ebx[0x90] = 1
                        else
                            ebx[0x41] = 1
                    else
                        ebx[0x40] = 1
                else
                    int32_t** eax_15 = var_88
                    ebx[0x38] = 1
                    *(ebx + 0x3c) = eax_15
            else
                *ebx = 1
                ecx_9 = &ebx[4]
            label_680b51:
                
                if (ecx_9 != &var_2c)
                    sub_52e3c0(ecx_9, &var_2c, 0, 0xffffffff)
            edi = esi
            
            if (var_30_1 u>= 8)
                j__free(var_44.d)
            
            int32_t var_30_2 = 7
            int32_t var_34_2 = 0
            var_44 = 0
            
            if (var_50 u>= 8)
                j__free(var_64)
            
            var_50 = 7
            var_8_1.b = 0
            var_54 = 0
            var_64.w = 0
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            edx = var_84
        else
            if (eax_6 != 0x22)
                goto label_6808af
            
            edx = 1
            var_84 = 1
    int32_t* ecx_23 = &data_4ebe3b0
    
    if (data_4ebe3c4 u>= 8)
        ecx_23 = data_4ebe3b0
    
    if (esi == ecx_23 + (data_4ebe3c0 << 1))
        result.b = 1
        goto label_680cf7
    
    eax_3 = data_4ebe3c4
    esi += 2
