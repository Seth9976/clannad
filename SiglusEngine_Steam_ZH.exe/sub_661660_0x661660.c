// 函数: sub_661660
// 地址: 0x661660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c50c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_a4 = arg4
int32_t* var_a0 = arg6
int32_t* var_ac = arg6
int32_t var_a8 = arg8
int32_t var_b4 = arg9
int32_t var_b0 = arg9
int32_t var_8_1 = 0
int16_t var_30
int32_t arg_20
int16_t* eax_7 = sub_6ae650(&var_30, &arg_20)
int32_t* ecx_1 = &arg_20
var_8_1.b = 1

if (&arg_20 != eax_7)
    ecx_1 = sub_52e3c0(ecx_1, eax_7, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_1c

if (var_1c u>= 8)
    ecx_1 = j__free(var_30.d)

int32_t var_1c_1 = 7
var_30 = 0
int32_t var_20 = 0
char var_95_1
char* result
int32_t var_1c_2

if (*(data_bac454 + 0x1c28) != 0)
    int32_t var_d4_2 = 3
    int32_t eax_9
    int32_t ecx_4
    eax_9, ecx_4 = sub_536340(&arg_20, ecx_1, arg11, 0xaf396c)
    int32_t eax_10
    
    if (eax_9 != 0)
        int32_t var_d4_3 = 3
        eax_10, ecx_4 = sub_536340(&arg_20, ecx_4, arg11, &data_af3974)
    
    if (eax_9 != 0 && eax_10 != 0)
        var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        sub_52e720(&var_30, 0xaf8764, 0x1d)
        var_8_1.b = 3
        goto label_6617fe
    
    int32_t var_d4_4 = 3
    
    if (sub_536340(&arg_20, ecx_4, arg11, &data_af3974) == 0 && arg7 s> 0)
        var_1c_2 = 7
        int32_t var_20_3 = 0
        var_30 = 0
        sub_52e720(&var_30, 0xaf87a0, 0x25)
        var_8_1.b = 4
        goto label_6617fe
    
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    int16_t var_78 = 0
    var_8_1.b = 5
    int32_t eax_12 = sub_5ccf10(&arg_20, 0xaf396c)
    void var_60
    int32_t ecx_25
    int16_t var_48
    int32_t eax_15
    
    if (arg2 == 0)
        if (eax_12.b != 0)
            void** eax_18 = sub_532b80(eax_12, data_bac4d8 + 0x48, &var_48, &data_ad900c)
            var_8_1.b = 0x10
            int16_t* eax_19 = sub_5327a0(eax_18, eax_18, &var_30, arg3)
            var_8_1.b = 0x11
            int16_t* eax_20 = sub_532b80(eax_19, eax_19, &var_60, u".bmp")
            var_8_1.b = 0x12
            
            if (&var_78 != eax_20)
                sub_52e3c0(&var_78, eax_20, 0, 0xffffffff)
            
            sub_52e8a0(&var_60)
            sub_52e8a0(&var_30)
            var_8_1.b = 5
            sub_52e8a0(&var_48)
        
        eax_15, ecx_25 = sub_5ccf10(&arg_20, &data_af3974)
        
        if (eax_15.b != 0)
            void** eax_21 = sub_532b80(eax_15, data_bac4d8 + 0x48, &var_48, &data_ad900c)
            var_8_1.b = 0x13
            int16_t* eax_22 = sub_5327a0(eax_21, eax_21, &var_30, arg3)
            var_8_1.b = 0x14
            int16_t* eax_23 = sub_532b80(eax_22, eax_22, &var_60, u".png")
            var_8_1.b = 0x15
            
            if (&var_78 != eax_23)
                sub_52e3c0(&var_78, eax_23, 0, 0xffffffff)
            
            sub_52e8a0(&var_60)
            sub_52e8a0(&var_30)
            var_8_1.b = 5
            ecx_25 = sub_52e8a0(&var_48)
    else
        struct _EXCEPTION_REGISTRATION_RECORD** var_54
        
        if (eax_12.b != 0)
            sub_662020(&var_60)
            var_8_1.b = 6
            int32_t var_34_1 = 7
            int32_t var_38_1 = 0
            var_48 = 0
            sub_52e720(&var_48, u"*.bmp", 5)
            var_8_1.b = 7
            int32_t var_1c_3 = 7
            int32_t var_20_4 = 0
            var_30 = 0
            sub_52e720(&var_30, u"BMP Files", 9)
            var_8_1.b = 8
            sub_60c680(&var_60, &var_30)
            sub_60c680(&var_54, &var_48)
            sub_52e8a0(&var_30)
            var_8_1.b = 6
            sub_52e8a0(&var_48)
            int16_t* eax_13 = sub_532b80(0, arg3, &var_48, u".bmp")
            var_8_1.b = 9
            int16_t* eax_14 = sub_6b6820(&var_60, &var_30, var_a4, eax_13)
            var_8_1.b = 0xa
            
            if (&var_78 != eax_14)
                sub_52e3c0(&var_78, eax_14, 0, 0xffffffff)
            
            sub_52e8a0(&var_30)
            sub_52e8a0(&var_48)
            var_8_1.b = 5
            sub_662050(&var_60)
        
        eax_15, ecx_25 = sub_5ccf10(&arg_20, &data_af3974)
        
        if (eax_15.b != 0)
            sub_662020(&var_60)
            var_8_1.b = 0xb
            int32_t var_34_2 = 7
            int32_t var_38_2 = 0
            var_48 = 0
            sub_52e720(&var_48, u"*.png", 5)
            var_8_1.b = 0xc
            int32_t var_1c_4 = 7
            int32_t var_20_5 = 0
            var_30 = 0
            sub_52e720(&var_30, u"PNG Files", 9)
            var_8_1.b = 0xd
            sub_60c680(&var_60, &var_30)
            sub_60c680(&var_54, &var_48)
            sub_52e8a0(&var_30)
            var_8_1.b = 0xb
            sub_52e8a0(&var_48)
            int32_t* var_d4_12 = sub_532b80(0, arg3, &var_48, u".png")
            var_8_1.b = 0xe
            int16_t* eax_17 = sub_6b6820(&var_60, &var_30, var_a4, var_d4_12)
            var_8_1.b = 0xf
            
            if (&var_78 != eax_17)
                sub_52e3c0(&var_78, eax_17, 0, 0xffffffff)
            
            sub_52e8a0(&var_30)
            sub_52e8a0(&var_48)
            var_8_1.b = 5
            ecx_25 = sub_662050(&var_60)
    
    if (var_68_1 == 0)
        var_95_1 = 0
    else
        int32_t var_d4_15 = 0x2000
        int32_t var_d8_3 = ecx_25
        void var_c4
        
        if (sub_6f3b20(*(data_bac454 + 0x1c28), &var_c4, &var_c4) != 0)
            void* eax_29 = *(data_bac454 + 0x1c28)
            int32_t ecx_63 = *(eax_29 + 4)
            char* eax_30 = *(eax_29 + 8)
            
            if (sub_5ccf10(&arg_20, 0xaf396c) == 0)
                goto label_661f68
            
            void* var_3c = nullptr
            int32_t var_38_3 = 0
            int32_t var_34_3 = 0
            int128_t var_90
            __builtin_memset(&var_90, 0, 0x18)
            int128_t var_28 = zx.o(0)
            var_8_1.b = 0x19
            int32_t var_94_1 = 0x1c
            sub_6290a0(&var_c4, ecx_63, &var_3c, eax_30, &var_c4)
            sub_6f3c40(*(data_bac454 + 0x1c28))
            var_90.d = 0x1c
            int32_t ecx_74
            
            if (arg5 == 0 || arg7 s<= 0)
                ecx_74 = var_28.d
            else
                *(arg5 + 0x7c)
                void* eax_35 = sub_54b180(1)
                void* esi_1
                
                if (eax_35 == 0)
                    esi_1 = nullptr
                else
                    esi_1 = eax_35 - 4
                
                int32_t* ecx_68 = var_a0
                int32_t** eax_36 = &var_a0
                var_a0 = nullptr
                void* edx_13 = ecx_68 + arg7
                int32_t ecx_69 = *(esi_1 + 0xa8)
                var_a4 = edx_13
                
                if (ecx_68 s>= 0)
                    eax_36 = &var_ac
                
                int32_t ecx_71 = (ecx_69 - *(esi_1 + 0xa4)) s>> 2
                var_a0 = *eax_36
                int32_t** eax_38 = &var_ac
                int32_t* edx_14 = var_a0
                
                if (ecx_71 s>= edx_13)
                    eax_38 = &var_a4
                
                var_ac = ecx_71
                void* edi_3 = *eax_38 - edx_14
                
                if (edi_3 s<= 0)
                    ecx_74 = var_28.d
                else
                    int32_t ecx_72 = *(esi_1 + 0xa4)
                    
                    if (ecx_72 == *(esi_1 + 0xa8))
                        ecx_72 = 0
                    
                    sub_5b2670(&var_28, ecx_72 + (edx_14 << 2), edi_3 << 2)
                    ecx_74 = var_28.d
                    var_90:8.d = edi_3
                    var_90:4.d = var_28:4.d - ecx_74
            
            void* edi_5 = var_28:4.d - ecx_74
            int32_t ecx_75 = var_a8
            var_90:0xc.d = edi_5 + 0x1c
            int64_t var_80
            
            if (ecx_75 == 0 || arg10 s<= 0)
                var_a4 = var_80:4.d
            else
                *(ecx_75 + 0x7c)
                void* eax_45 = sub_54b180(1)
                void* ecx_76
                
                if (eax_45 == 0)
                    ecx_76 = nullptr
                else
                    ecx_76 = eax_45 - 4
                
                int32_t edx_16 = var_b4
                int32_t* eax_46 = &var_b4
                int32_t esi_3 = arg10 + edx_16
                var_b4 = 0
                var_a8 = esi_3
                
                if (edx_16 s>= 0)
                    eax_46 = &var_b0
                
                var_a0 = *eax_46
                int32_t eax_48 = sub_55aeb0(ecx_76 + 4)
                var_b0 = eax_48
                int32_t* ecx_78 = &var_b0
                
                if (eax_48 s>= esi_3)
                    ecx_78 = &var_a8
                
                int32_t* ecx_79 = var_a0
                void* eax_50 = *ecx_78 - ecx_79
                var_a4 = eax_50
                
                if (eax_50 s<= 0)
                    var_a4 = var_80:4.d
                else
                    int32_t esi_4 = 0
                    
                    if (eax_50 s> 0)
                        do
                            var_8_1.b = 0x1a
                            sub_662840(&var_28, sub_5a9030(ecx_76, &var_60, ecx_79 + esi_4))
                            var_8_1.b = 0x19
                            sub_52e8a0(&var_60)
                            ecx_79 = var_a0
                            esi_4 += 1
                        while (esi_4 s< var_a4)
                    
                    edi_5 = var_28:4.d - var_28.d
                    var_80.d = edi_5 - var_90:0xc.d + 0x1c
            int128_t* esi_6 = var_38_3 - var_3c
            sub_5979b0(&var_3c, esi_6 + 0x1c + edi_5)
            void* edx_17 = var_3c
            void* const eax_60 = edx_17
            
            if (edx_17 == var_38_3)
                eax_60 = nullptr
            
            int32_t* ecx_84 = var_a4
            *(esi_6 + eax_60) = var_94_1.o
            *(esi_6 + eax_60 + 0x10) = var_90:0xc.q
            *(esi_6 + eax_60 + 0x18) = ecx_84
            int32_t* eax_61 = var_28.d
            
            if (eax_61 == var_28:4.d)
                eax_61 = nullptr
            
            if (edx_17 == var_38_3)
                edx_17 = nullptr
            
            sub_748840(edx_17 + 0x1c + esi_6, eax_61, edi_5, eax_2)
            
            if (sub_6b8570(&var_78, &var_3c) != 0)
                sub_538150(&var_28)
                sub_538150(&var_3c)
                var_95_1 = 1
            else
                int16_t* eax_65 = sub_6b9ed0(&var_90)
                var_8_1.b = 0x1b
                int16_t* eax_66 = sub_548cb0(eax_65, 0xaf8838, &var_60, eax_65)
                var_8_1.b = 0x1c
                sub_684160(data_bac424, 2, eax_66)
                sub_52e8a0(&var_60)
                sub_52e8a0(&var_90)
                sub_538150(&var_28)
                var_8_1.b = 5
                sub_538150(&var_3c)
            label_661f68:
                
                if (sub_5ccf10(&arg_20, &data_af3974).b == 0)
                    var_95_1 = 0
                else
                    char eax_68
                    int32_t ecx_95
                    eax_68, ecx_95 = sub_6291d0(&var_c4, ecx_63, &var_78, eax_30, &var_c4, 1)
                    int32_t var_d4_28 = ecx_95
                    
                    if (eax_68 != 0)
                        sub_6f3c40(*(data_bac454 + 0x1c28))
                        var_95_1 = 1
                    else
                        sub_6f3c40(*(data_bac454 + 0x1c28))
                        int32_t var_1c_5 = 7
                        int32_t var_20_6 = 0
                        var_30 = 0
                        sub_52e720(&var_30, 0xaf8838, 0x16)
                        var_8_1.b = 0x1d
                        sub_684160(data_bac424, 2, &var_30)
                        sub_52e8a0(&var_30)
                        var_95_1 = 0
        else
            int16_t* eax_26 = sub_6b9ed0(&var_30)
            var_8_1.b = 0x16
            int16_t* eax_27 = sub_548cb0(eax_26, 0xaf3b54, &var_60, eax_26)
            var_8_1.b = 0x17
            sub_684160(data_bac424, 2, eax_27)
            sub_52e8a0(&var_60)
            sub_52e8a0(&var_30)
            var_95_1 = 0
    
    if (var_64_1 u>= 8)
        j__free(var_78.d)
    
    int32_t var_64_2 = 7
    var_78 = 0
    result.b = var_95_1
    int32_t var_68_2 = 0
else
    var_1c_2 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, 0xaf873c, 0x12)
    var_8_1.b = 2
label_6617fe:
    sub_684160(data_bac424, 2, &var_30)
    
    if (var_1c_2 u>= 8)
        j__free(var_30.d)
    
    result.b = 0
    var_95_1 = 0

if (arg12 u>= 8)
    j__free(arg_20)
    result.b = var_95_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
