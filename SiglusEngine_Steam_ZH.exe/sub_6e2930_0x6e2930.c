// 函数: sub_6e2930
// 地址: 0x6e2930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ccff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* const var_8c = 2
int32_t var_20 = 0
int32_t var_1c = 0
int32_t* var_90 = &data_af335c
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
int16_t var_30 = 0
sub_52e720(&var_30, var_90, var_8c)
int32_t var_8_1 = 1
int32_t var_8_2 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = sub_6b7a80(&arg1[0x40], arg2, &var_30).b == 0
char var_69 = eax_3.b

if (var_1c_1 u>= 8)
    j__free(var_30.d)
    eax_3.b = var_69

int32_t var_1c_2 = 7
int32_t var_20_2 = 0
var_30 = 0
int32_t result
int16_t var_48
int32_t var_34

if (eax_3.b == 0)
    eax_3.b = arg3
    arg1[0x44].b = eax_3.b
    sub_6b74a0(eax_3, 0xa8, &arg1[6], arg1[0x40])
    arg1[0x45] = 0xa8
    int32_t* var_70
    int16_t var_60
    
    if (arg1[7].b != 1 || *(arg1 + 0x1d) != 1)
        void** eax_42 = sub_6b9ed0(&var_60)
        int32_t var_90_19 = 1
        int32_t var_8_17 = 4
        int32_t var_94_9 = 1
        uint32_t var_98_1 = zx.d(*(arg1 + 0x1d))
        uint32_t var_9c_1 = zx.d(arg1[7].b)
        void var_b4
        var_70 = &var_b4
        void* var_74_1 = &var_b4
        sub_52e820(&var_b4, 0xb05508)
        var_8_17.b = 6
        var_8_17.b = 4
        void** eax_45 = sub_6ae4c0(&var_30, var_b4)
        var_8_17.b = 7
        void** eax_46 = sub_5327a0(eax_45, eax_45, &var_48, eax_42)
        var_8_17.b = 8
        
        if (arg1 != eax_46)
            sub_52e3c0(arg1, eax_46, 0, 0xffffffff)
        
        var_8_17.b = 7
        
        if (var_34 u>= 8)
            j__free(var_48.d)
        
        int32_t var_34_2 = 7
        int32_t var_38_2 = 0
        var_48 = 0
        var_8_17.b = 4
        
        if (var_1c_2 u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_8 = 7
        int32_t var_20_8 = 0
        var_30 = 0
        int32_t var_8_18 = 0xffffffff
        int32_t var_4c
        
        if (var_4c u>= 8)
            j__free(var_60.d)
        
        int32_t var_4c_1 = 7
        int32_t var_50_1 = 0
        var_60 = 0
        result.b = 0
    else
        int32_t eax_6 = arg1[0x19]
        
        if (eax_6 s> 0)
            sub_6e4520(&arg1[0x4a], eax_6)
            char* ecx_7 = arg1[0x4a]
            int32_t edi_3 = arg1[0x19] * 0x1c
            
            if (ecx_7 == arg1[0x4b])
                ecx_7 = nullptr
            
            sub_6b74a0(0, edi_3, ecx_7, arg1[0x40])
            int32_t eax_8 = arg1[0x19]
            arg1[0x45] += edi_3
            arg1[0x46] = eax_8
        
        int32_t eax_9 = arg1[0x1a]
        
        if (eax_9 s> 0)
            sub_6dd3b0(&arg1[0x4d], eax_9)
            char* ecx_9 = arg1[0x4d]
            int32_t edi_5 = arg1[0x1a] << 5
            
            if (ecx_9 == arg1[0x4e])
                ecx_9 = nullptr
            
            sub_6b74a0(0, edi_5, ecx_9, arg1[0x40])
            int32_t eax_10 = arg1[0x1a]
            arg1[0x45] += edi_5
            arg1[0x47] = eax_10
        
        sub_6e4800(&arg1[0x54], arg1[0x16])
        var_70 = nullptr
        int32_t eax_11 = sub_6e3050(arg1, arg1[0x17])
        int32_t ecx_12
        
        if (eax_11 s>= 0)
            void var_68
            int32_t eax_12
            
            if (arg1 != 0xfffffeb0 && arg1[0x54] != 0)
                eax_12 = sub_6e5220(eax_11, &var_68, &arg1[0x54], 1)
            
            if (arg1 == 0xfffffeb0 || arg1[0x54] == 0 || eax_12 s<= 0)
                void** eax_40 = sub_6b9ed0(&var_48)
                int32_t var_8_16 = 0xb
                void** eax_41 = sub_548cb0(eax_40, 0xb055b8, &var_60, eax_40)
                var_8_16.b = 0xc
                
                if (arg1 != eax_41)
                    sub_52e3c0(arg1, eax_41, 0, 0xffffffff)
                
                var_8_16.b = 0xb
            label_6e2d06:
                sub_52e8a0(&var_60)
                int32_t var_8_11 = 0xffffffff
                sub_52e8a0(&var_48)
                result.b = 0
            else if (sub_6e9bb0(eax_12, &arg1[0xbe], &arg1[0xae], &var_70, &var_68) s>= 0)
                sub_6e3750(arg1)
                
                if (sub_6e3050(arg1, arg1[0x18]) s< 0)
                    void* var_8c_21 = 0x1a
                    int32_t var_20_6 = 0
                    int32_t var_1c_6 = 0
                    int32_t* var_90_8 = &data_b0564c
                    int32_t var_1c_7 = 7
                    int32_t var_20_7 = 0
                    var_30 = 0
                    ecx_12 = sub_52e720(&var_30, var_90_8, var_8c_21)
                    int32_t var_8_9 = 0x10
                    goto label_6e2bac
                
                if (sub_6e5340(&arg1[0x54], &var_68) s<= 0)
                    int16_t* eax_18 = sub_6b9ed0(&var_48)
                    int32_t var_8_10 = 0x11
                    int16_t* eax_19 = sub_548cb0(eax_18, 0xb05600, &var_60, eax_18)
                    var_8_10.b = 0x12
                    
                    if (arg1 != eax_19)
                        sub_52e3c0(arg1, eax_19, 0, 0xffffffff)
                    
                    var_8_10.b = 0x11
                    goto label_6e2d06
                
                if (sub_6e9bb0(&var_70, &arg1[0xbe], &arg1[0xae], &var_70, &var_68) s< 0)
                    void** eax_22 = sub_6b9ed0(&var_48)
                    int32_t var_8_12 = 0x13
                    void** eax_23 = sub_548cb0(eax_22, 0xb056d4, &var_60, eax_22)
                    var_8_12.b = 0x14
                    
                    if (arg1 != eax_23)
                        sub_52e3c0(arg1, eax_23, 0, 0xffffffff)
                    
                    var_8_12.b = 0x13
                    goto label_6e2d06
                
                if (sub_6e5340(&arg1[0x54], &var_68) s<= 0)
                    void** eax_25 = sub_6b9ed0(&var_48)
                    int32_t var_8_13 = 0x15
                    void** eax_26 = sub_548cb0(eax_25, 0xb05688, &var_60, eax_25)
                    var_8_13.b = 0x16
                    
                    if (arg1 != eax_26)
                        sub_52e3c0(arg1, eax_26, 0, 0xffffffff)
                    
                    var_8_13.b = 0x15
                    goto label_6e2d06
                
                if (sub_6e9bb0(&var_70, &arg1[0xbe], &arg1[0xae], &var_70, &var_68) s< 0)
                    void** eax_29 = sub_6b9ed0(&var_48)
                    int32_t var_8_14 = 0x17
                    void** eax_30 = sub_548cb0(eax_29, 0xb05744, &var_60, eax_29)
                    var_8_14.b = 0x18
                    
                    if (arg1 != eax_30)
                        sub_52e3c0(arg1, eax_30, 0, 0xffffffff)
                    
                    var_8_14.b = 0x17
                    goto label_6e2d06
                
                sub_6e3750(arg1)
                int32_t* esi_2 = var_70
                void* eax_31 = sub_6e8dc0(&arg1[0xae], esi_2)
                arg1[0xc2] = eax_31
                
                if (eax_31 == 0)
                    int16_t* eax_32 = sub_6b9ed0(&var_48)
                    int32_t var_8_15 = 0x19
                    void** eax_33 = sub_548cb0(eax_32, 0xb05710, &var_60, eax_32)
                    var_8_15.b = 0x1a
                    
                    if (arg1 != eax_33)
                        sub_52e3c0(arg1, eax_33, 0, 0xffffffff)
                    
                    var_8_15.b = 0x19
                    goto label_6e2d06
                
                int32_t var_8c_36 = 2
                var_70 = nullptr
                sub_6e8e30(eax_31, &var_70, eax_31, var_8c_36)
                sub_6e9c10(esi_2)
                int32_t ecx_48 = arg1[0x47]
                arg1[0x31] = arg1[0x10]
                arg1[0x32] = arg1[0x11]
                arg1[0x33] = arg1[0x12]
                arg1[0x34] = arg1[0x13]
                arg1[0x35] = arg1[0x14]
                arg1[0x36] = arg1[0x1a]
                
                if (ecx_48 s> 0)
                    arg1[0x37] = *(arg1[0x4d] + (ecx_48 << 5) - 4)
                
                arg1[0x30] = 1
                result.b = 1
            else
                int16_t* eax_14 = sub_6b9ed0(&var_48)
                int32_t var_8_7 = 0xd
                int16_t* eax_15 = sub_548cb0(eax_14, 0xb05580, &var_60, eax_14)
                var_8_7.b = 0xe
                
                if (arg1 != eax_15)
                    sub_52e3c0(arg1, eax_15, 0, 0xffffffff)
                
                var_8_7.b = 0xd
                sub_52e8a0(&var_60)
                int32_t var_8_8 = 0xffffffff
                sub_52e8a0(&var_48)
                result.b = 0
        else
            void* var_8c_14 = 0x18
            int32_t var_20_4 = 0
            int32_t var_1c_4 = 0
            int32_t* var_90_4 = &data_b054d4
            int32_t var_1c_5 = 7
            int32_t var_20_5 = 0
            var_30 = 0
            ecx_12 = sub_52e720(&var_30, var_90_4, var_8c_14)
            int32_t var_8_5 = 0xa
        label_6e2bac:
            int32_t var_8c_15 = ecx_12
            sub_6e2770(arg1, &var_30)
            int32_t var_8_6 = 0xffffffff
            sub_52e8a0(&var_30)
            result.b = 0
else
    int16_t* eax_4 = sub_6b9ed0(&var_48)
    int32_t var_8_3 = 2
    int16_t* eax_5 = sub_548cb0(eax_4, 0xb054ac, &var_30, eax_4)
    var_8_3.b = 3
    
    if (arg1 != eax_5)
        sub_52e3c0(arg1, eax_5, 0, 0xffffffff)
    
    var_8_3.b = 2
    
    if (var_1c_2 u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_3 = 7
    int32_t var_20_3 = 0
    var_30 = 0
    int32_t var_8_4 = 0xffffffff
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
