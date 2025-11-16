// 函数: sub_684160
// 地址: 0x684160
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7e0c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_214 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (arg2 != 0xd || (*data_bac4a0 != 0 && *data_bac510 != 0))
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    int32_t var_8_1 = 0
    char* var_60 = arg2
    
    if (&var_5c != arg3)
        sub_52e3c0(&var_5c, arg3, 0, 0xffffffff)
    
    int16_t var_10c
    int16_t* eax_3 = sub_6b2fd0(&var_10c)
    var_8_1.b = 1
    int16_t var_7c
    int16_t* eax_4 = sub_548cb0(eax_3, &data_ad85e8, &var_7c, eax_3)
    var_8_1.b = 2
    int16_t var_2c
    int16_t* eax_5 = sub_532b80(eax_4, eax_4, &var_2c, u"] \n\n")
    var_8_1.b = 3
    int16_t var_44
    int16_t* eax_6 = sub_5327a0(eax_5, eax_5, &var_44, &var_5c)
    var_8_1.b = 4
    
    if (&var_5c != eax_6)
        sub_52e3c0(&var_5c, eax_6, 0, 0xffffffff)
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    uint32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_68
    
    if (var_68 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_68_1 = 7
    var_8_1.b = 0
    int32_t var_6c_1 = 0
    var_7c = 0
    int32_t var_f8
    
    if (var_f8 u>= 8)
        j__free(var_10c.d)
    
    int32_t var_f8_1 = 7
    var_10c = 0
    int32_t var_fc_1 = 0
    int16_t var_ac
    int32_t var_98
    void* var_94
    int32_t var_80
    
    if (*data_bac4a0 != 0)
        void* ecx_7 = data_bac45c
        int32_t eax_8 = *(ecx_7 + 0x64)
        
        if (eax_8 s>= 0)
            var_8_1.b = 5
            int32_t var_218_8 = sub_698170(ecx_7, &var_94, eax_8)
            *(data_bac45c + 0x68)
            int16_t* eax_10 = sub_6ad9b0(&var_ac)
            var_8_1.b = 6
            int16_t var_dc
            int16_t* eax_12 = sub_548cb0(&var_94, 0xafa148, &var_dc, &var_94)
            var_8_1.b = 7
            int16_t var_c4
            int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_c4, u".ss ")
            var_8_1.b = 8
            int16_t var_f4
            int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_f4, eax_10)
            var_8_1.b = 9
            var_8_1.b = 0xa
            int16_t var_124
            sub_532870(&var_5c, sub_532b80(eax_14, eax_14, &var_124, 0xafa134), 0, 0xffffffff)
            int32_t var_110
            
            if (var_110 u>= 8)
                j__free(var_124.d)
            
            int32_t var_110_1 = 7
            int32_t var_114_1 = 0
            var_124 = 0
            int32_t var_e0
            
            if (var_e0 u>= 8)
                j__free(var_f4.d)
            
            int32_t var_e0_1 = 7
            int32_t var_e4_1 = 0
            var_f4 = 0
            int32_t var_b0
            
            if (var_b0 u>= 8)
                j__free(var_c4.d)
            
            int32_t var_b0_1 = 7
            int32_t var_b4_1 = 0
            var_c4 = 0
            int32_t var_c8
            
            if (var_c8 u>= 8)
                j__free(var_dc.d)
            
            int32_t var_c8_1 = 7
            int32_t var_cc_1 = 0
            var_dc = 0
            
            if (var_98 u>= 8)
                j__free(var_ac.d)
            
            var_98 = 7
            var_8_1.b = 0
            int32_t var_9c_1 = 0
            var_ac = 0
            
            if (var_80 u>= 8)
                j__free(var_94)
    
    int32_t esi_2 = 0
    
    if (*data_bac4a0 != 0)
        data_bac518 = SetWindowsHookExW(WH_CBT, sub_684010, nullptr, GetCurrentThreadId())
        esi_2 = 4
    
    enum MESSAGEBOX_RESULT ebx_1 = 0
    enum MESSAGEBOX_RESULT eax_22
    void** ecx_17
    
    if (arg2 - 1 u<= 0xc)
        switch (arg2)
            case 1
                var_8_1.b = 0x12
                void var_19c
                eax_22 =
                    sub_60e0d0(sub_5327a0(arg2 - 1, &var_5c, &var_19c, &data_b8e3d8), esi_2 | 0x40)
                ecx_17 = &var_19c
                goto label_684716
            case 2
                var_8_1.b = 0x13
                void var_1cc
                eax_22 =
                    sub_60e0d0(sub_5327a0(arg2 - 1, &var_5c, &var_1cc, &data_b8e3d8), esi_2 | 0x30)
                ecx_17 = &var_1cc
                goto label_684716
            case 3
                char* eax_33 = data_bac4a0
                
                if (*eax_33 != 0)
                    var_8_1.b = 0x14
                    void var_1fc
                    eax_22 = sub_60e0d0(sub_5327a0(eax_33, &var_5c, &var_1fc, &data_b8e3d8), 
                        esi_2 | 0x30)
                    ecx_17 = &var_1fc
                    goto label_684716
            case 6
                var_8_1.b = 0xb
                eax_22 =
                    sub_60e0d0(sub_5327a0(arg2 - 1, &var_5c, &var_94, &data_b8e3d8), esi_2 | 0x30)
                ecx_17 = &var_94
            label_684716:
                ebx_1 = eax_22
                var_8_1.b = 0
                sub_52e8a0(ecx_17)
            case 7
                var_8_1.b = 0xc
                void var_184
                eax_22 =
                    sub_60e0d0(sub_5327a0(arg2 - 1, &var_5c, &var_184, &data_b8e3d8), esi_2 | 0x30)
                ecx_17 = &var_184
                goto label_684716
            case 8
                char* eax_24 = data_bac4a0
                
                if (*eax_24 != 0 && eax_24[2] == 0)
                    var_8_1.b = 0xd
                    void var_13c
                    eax_22 = sub_60e0d0(sub_5327a0(eax_24, &var_5c, &var_13c, &data_b8e3d8), 
                        esi_2 | 0x30)
                    ecx_17 = &var_13c
                    goto label_684716
            case 9
                var_8_1.b = 0xe
                void var_16c
                eax_22 =
                    sub_60e0d0(sub_5327a0(arg2 - 1, &var_5c, &var_16c, &data_b8e3d8), esi_2 | 0x30)
                ecx_17 = &var_16c
                goto label_684716
            case 0xa
                var_8_1.b = 0xf
                void var_1e4
                eax_22 =
                    sub_60e0d0(sub_5327a0(arg2 - 1, &var_5c, &var_1e4, &data_b8e3d8), esi_2 | 0x30)
                ecx_17 = &var_1e4
                goto label_684716
            case 0xb
                var_8_1.b = 0x10
                void var_1b4
                eax_22 =
                    sub_60e0d0(sub_5327a0(arg2 - 1, &var_5c, &var_1b4, &data_b8e3d8), esi_2 | 0x30)
                ecx_17 = &var_1b4
                goto label_684716
            case 0xd
                int32_t* eax_29 = data_bac510
                
                if (*eax_29 == 2)
                    var_8_1.b = 0x11
                    void var_154
                    eax_22 = sub_60e0d0(sub_5327a0(eax_29, &var_5c, &var_154, &data_b8e3d8), 
                        esi_2 | 0x30)
                    ecx_17 = &var_154
                    goto label_684716
    
    if (*data_bac4a0 != 0)
        UnhookWindowsHookEx(data_bac518)
        
        if (ebx_1 == IDNO)
            void* eax_36 = data_bac4a0
            *(eax_36 + 0x1eb) = 0x101
            *(eax_36 + 0x1ed) = 1
            sub_676610(0)
        
        if (*data_bac4a0 != 0 || *(data_bac4a0 + 1) == 0)
            sub_684ac0(arg1, &var_60)
    else if (*(data_bac4a0 + 1) == 0)
        sub_684ac0(arg1, &var_60)
    
    if (*(data_bac508 + 0x92) == 0)
        arg1[3] = arg2
    else if (*(data_bac4d8 + 0x58) == 0)
        sub_60c680(&arg1[4], arg3)
        arg1[3] = arg2
    else
        int32_t* var_74 = nullptr
        var_6c_1.q = 0
        var_8_1.b = 0x15
        int32_t var_18_2 = 7
        uint32_t var_1c_2 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xad906c, 2)
        var_8_1.b = 0x16
        var_8_1.b = 0x17
        ebx_1.b = sub_6b7a80(&var_74, sub_6299e0(&var_ac), &var_2c) == 0
        
        if (var_98 u>= 8)
            j__free(var_ac.d)
        
        var_8_1.b = 0x15
        int32_t var_98_1 = 7
        int32_t var_9c_2 = 0
        var_ac = 0
        
        if (var_18_2 u>= 8)
            j__free(var_2c.d)
        
        if (ebx_1.b == 0)
            int32_t ecx_41 = arg1[5] - arg1[4]
            int32_t ebx_2 = 0
            int32_t eax_46 = ecx_41 s/ 0x18
            
            if (eax_46 s> 0)
                int32_t esi_13 = 0
                
                do
                    int16_t* eax_47 = sub_532b80(eax_46, arg1[4] + esi_13, &var_94, &data_ad90c0)
                    var_8_1.b = 0x18
                    
                    if (*(eax_47 + 0x14) u>= 8)
                        eax_47 = *eax_47
                    
                    sub_52e820(&var_44, eax_47)
                    var_8_1.b = 0x19
                    char* eax_48 = sub_6af1a0(&var_2c)
                    var_8_1.b = 0x1a
                    void* ecx_45 = &var_2c
                    
                    if (var_18_2 u>= 0x10)
                        ecx_45 = var_2c.d
                    
                    sub_6b7660(eax_48, var_1c_2, ecx_45, var_74)
                    
                    if (var_18_2 u>= 0x10)
                        j__free(var_2c.d)
                    
                    if (var_30_1 u>= 8)
                        j__free(var_44.d)
                    
                    var_8_1.b = 0x15
                    var_30_1 = 7
                    var_34_1 = 0
                    var_44 = 0
                    
                    if (var_80 u>= 8)
                        j__free(var_94)
                    
                    ecx_41 = arg1[5] - arg1[4]
                    ebx_2 += 1
                    esi_13 += 0x18
                    eax_46 = ecx_41 s/ 0x18
                while (ebx_2 s< eax_46)
            
            int32_t* var_218_29 = arg3
            int32_t var_21c_3 = ecx_41
            sub_55d500(arg1[4], arg1[5])
            int32_t eax_52 = arg1[4]
            arg1[5] = eax_52
            int16_t* eax_53 = sub_532b80(eax_52, arg3, &var_94, &data_ad90c0)
            var_8_1.b = 0x1b
            
            if (*(eax_53 + 0x14) u>= 8)
                eax_53 = *eax_53
            
            sub_52e820(&var_2c, eax_53)
            var_8_1.b = 0x1c
            char* eax_54 = sub_6af1a0(&var_44)
            var_8_1.b = 0x1d
            void* ecx_51 = &var_44
            
            if (var_30_1 u>= 0x10)
                ecx_51 = var_44.d
            
            sub_6b7660(eax_54, var_34_1, ecx_51, var_74)
            
            if (var_30_1 u>= 0x10)
                j__free(var_44.d)
            
            if (var_18_2 u>= 8)
                j__free(var_2c.d)
            
            var_8_1.b = 0x15
            int32_t var_18_3 = 7
            int32_t var_1c_3 = 0
            var_2c = 0
            
            if (var_80 u>= 8)
                j__free(var_94)
            
            if (sub_6b73d0(var_74) == 0)
                var_8_1.b = 0
                sub_6b73d0(var_74)
            else
                var_74 = nullptr
                var_6c_1.q = 0
                var_8_1.b = 0
                sub_6b73d0(nullptr)
            
            arg1[3] = arg2
        else
            var_8_1.b = 0
            sub_6b73d0(var_74)
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
