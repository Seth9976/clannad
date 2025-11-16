// 函数: sub_6620c0
// 地址: 0x6620c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5180
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_a8 = arg6
uint32_t var_a4 = arg6
int32_t var_a0 = arg7
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** var_48
int32_t arg_20
int16_t* eax_6 = sub_6ae650(&var_48, &arg_20)
int32_t* ecx_1 = &arg_20
var_8_1.b = 1

if (&arg_20 != eax_6)
    ecx_1 = sub_52e3c0(ecx_1, eax_6, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_34

if (var_34 u>= 8)
    ecx_1 = j__free(var_48)

int32_t var_cc_2 = 3
int32_t eax_7
int32_t ecx_3
eax_7, ecx_3 = sub_536340(&arg_20, ecx_1, arg8, 0xaf396c)
int32_t eax_8

if (eax_7 != 0)
    int32_t var_cc_3 = 3
    eax_8, ecx_3 = sub_536340(&arg_20, ecx_3, arg8, &data_af3974)

char var_95_1
char* result
int16_t var_30
int32_t var_1c_1

if (eax_7 == 0 || eax_8 == 0)
    int32_t var_cc_4 = 3
    int32_t eax_9 = sub_536340(&arg_20, ecx_3, arg8, &data_af3974)
    
    if (eax_9 == 0)
        var_1c_1 = 7
        int32_t var_20_2 = eax_9
        var_30 = eax_9.w
        sub_52e720(&var_30, 0xaf8868, 0x20)
        var_8_1.b = 3
        goto label_6621f0
    
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    int16_t var_78 = 0
    var_8_1.b = 4
    struct _EXCEPTION_REGISTRATION_RECORD** eax_10 = sub_5ccf10(&arg_20, 0xaf396c)
    int32_t var_50
    uint32_t var_4c
    int32_t var_1c
    int16_t var_60
    
    if (arg2 == 0)
        if (eax_10.b != 0)
            void** eax_12 = sub_532b80(eax_10, data_bac4d8 + 0x48, &var_60, &data_ad900c)
            var_8_1.b = 9
            int16_t* eax_13 = sub_5327a0(eax_12, eax_12, &var_30, arg3)
            var_8_1.b = 0xa
            int16_t* eax_14 = sub_532b80(eax_13, eax_13, &var_48, u".bmp")
            var_8_1.b = 0xb
            
            if (&var_78 != eax_14)
                sub_52e3c0(&var_78, eax_14, 0, 0xffffffff)
            
            if (var_34 u>= 8)
                j__free(var_48)
            
            int32_t var_34_1 = 7
            int32_t var_38_1 = 0
            var_48.w = 0
            
            if (var_1c u>= 8)
                j__free(var_30.d)
            
            var_8_1.b = 4
            var_1c = 7
            int32_t var_20_5 = 0
            var_30 = 0
            
            if (var_4c u>= 8)
                j__free(var_60.d)
    else if (eax_10.b != 0)
        __builtin_memset(&var_48, 0, 0x18)
        var_8_1.b = 5
        var_4c = 7
        var_50 = 0
        var_60 = 0
        sub_52e720(&var_60, u"*.bmp", 5)
        var_8_1.b = 6
        int32_t var_1c_2 = 7
        int32_t var_20_3 = 0
        var_30 = 0
        sub_52e720(&var_30, u"BMP Files", 9)
        var_8_1.b = 7
        sub_60c680(&var_48, &var_30)
        struct _EXCEPTION_REGISTRATION_RECORD** var_3c
        sub_60c680(&var_3c, &var_60)
        
        if (var_1c_2 u>= 8)
            j__free(var_30.d)
        
        var_8_1.b = 5
        var_1c = 7
        int32_t var_20_4 = 0
        var_30 = 0
        
        if (var_4c u>= 8)
            j__free(var_60.d)
        
        int16_t* eax_11 = sub_6b6240(&var_48, &var_30, arg4, arg3)
        var_8_1.b = 8
        
        if (&var_78 != eax_11)
            sub_52e3c0(&var_78, eax_11, 0, 0xffffffff)
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        var_8_1.b = 4
        sub_662050(&var_48)
    
    if (var_68_1 == 0)
        var_95_1 = 0
    else
        int32_t* var_58 = nullptr
        var_50.q = 0
        var_8_1.b = 0xc
        int32_t var_34_2 = 7
        int32_t var_38_2 = 0
        var_48.w = 0
        sub_52e720(&var_48, &data_af335c, 2)
        var_8_1.b = 0xd
        var_8_1.b = 0xc
        bool eax_15 = sub_6b7a80(&var_58, &var_78, &var_48) == 0
        
        if (var_34_2 u>= 8)
            j__free(var_48)
        
        if (eax_15 == 0)
            int32_t* ecx_30 = var_58
            uint32_t var_b4 = var_4c
            void* var_ac = nullptr
            int32_t eax_21 = sub_6b7820(
                sub_6b74a0(sub_6b7820(var_4c, FILE_BEGIN, ecx_30, 2, nullptr), 4, &var_ac, var_58), 
                FILE_BEGIN, var_58, var_ac, nullptr)
            void* esi_2 = var_50 - var_ac
            
            if (esi_2 u> 0x1c)
                int32_t* var_cc_25 = var_58
                int32_t var_94
                __builtin_memset(&var_94, 0, 0x1c)
                sub_6b74a0(eax_21, 0x1c, &var_94, var_cc_25)
                uint32_t var_bc = esi_2 - 0x1c
                int128_t var_28 = zx.o(0)
                var_8_1.b = 0x10
                sub_5979b0(&var_28, esi_2 - 0x1c)
                char* eax_22 = var_28.d
                char* ecx_35 = eax_22
                
                if (eax_22 == var_28:4.d)
                    ecx_35 = nullptr
                
                sub_6b74a0(eax_22, esi_2 - 0x1c, ecx_35, var_58)
                int32_t arg_10
                int32_t esi_4 = arg_10
                
                if (arg5 != 0 && esi_4 s> 0)
                    *(arg5 + 0x7c)
                    void* eax_24 = sub_54b180(1)
                    void* edi_1
                    
                    if (eax_24 == 0)
                        edi_1 = nullptr
                    else
                        edi_1 = eax_24 - 4
                    
                    int128_t var_90
                    void* eax_25 = &var_90:8
                    
                    if (var_90:8.d s>= esi_4)
                        eax_25 = &arg_10
                    
                    uint32_t ecx_37 = var_a8
                    var_a8 = 0
                    int32_t* eax_26 = &var_a8
                    uint32_t edx_8 = *eax_25 + ecx_37
                    int32_t ecx_38 = *(edi_1 + 0xa8)
                    
                    if (ecx_37 s>= 0)
                        eax_26 = &var_a4
                    
                    var_b4 = edx_8
                    int32_t ecx_40 = (ecx_38 - *(edi_1 + 0xa4)) s>> 2
                    int32_t eax_27 = *eax_26
                    uint32_t* eax_28 = &var_a4
                    
                    if (ecx_40 s>= edx_8)
                        eax_28 = &var_b4
                    
                    var_a4 = ecx_40
                    esi_4 = *eax_28 - eax_27
                    
                    if (esi_4 s> 0)
                        int32_t eax_29 = esi_4 << 2
                        var_a4 = 0
                        bool cond:7_1 = var_bc s>= eax_29
                        var_b4 = eax_29
                        uint32_t* ecx_41 = &var_bc
                        
                        if (cond:7_1)
                            ecx_41 = &var_b4
                        
                        int32_t* edx_9 = var_28.d
                        
                        if (edx_9 == var_28:4.d)
                            edx_9 = nullptr
                        
                        uint32_t eax_30 = *(edi_1 + 0xa4)
                        
                        if (eax_30 == *(edi_1 + 0xa8))
                            eax_30 = var_a4
                        
                        sub_748840(eax_30 + (eax_27 << 2), edx_9, *ecx_41, eax_2)
                
                int32_t ecx_43 = var_a0
                int32_t var_1c_3 = var_1c + (esi_4 << 2)
                
                if (ecx_43 != 0)
                    int32_t arg_1c
                    int32_t esi_6 = arg_1c
                    
                    if (esi_6 s> 0)
                        *(ecx_43 + 0x7c)
                        void* eax_34 = sub_54b180(1)
                        void* edi_2
                        
                        if (eax_34 == 0)
                            edi_2 = nullptr
                        else
                            edi_2 = eax_34 - 4
                        
                        int64_t var_80
                        bool cond:12_1 = var_80:4.d s>= esi_6
                        void* eax_35 = &var_80:4
                        var_a0 = 0
                        
                        if (cond:12_1)
                            eax_35 = &arg_1c
                        
                        int32_t arg_18
                        int32_t ecx_44 = arg_18
                        int32_t* eax_36 = &var_a0
                        uint32_t esi_8 = *eax_35 + ecx_44
                        var_b4 = esi_8
                        
                        if (ecx_44 s>= 0)
                            eax_36 = &arg_18
                        
                        int32_t eax_37 = *eax_36
                        int32_t eax_38 = sub_55aeb0(edi_2 + 4)
                        var_a0 = eax_38
                        int32_t* ecx_46 = &var_a0
                        
                        if (eax_38 s>= esi_8)
                            ecx_46 = &var_b4
                        
                        int32_t eax_40 = *ecx_46 - eax_37
                        var_a0 = eax_40
                        
                        if (eax_40 s> 0)
                            int32_t esi_9 = 0
                            
                            if (eax_40 s> 0)
                                do
                                    var_8_1.b = 0x11
                                    sub_57a560(edi_2, eax_37 + esi_9, sub_6628b0(&var_28, &var_48))
                                    var_8_1.b = 0x10
                                    sub_52e8a0(&var_48)
                                    esi_9 += 1
                                while (esi_9 s< var_a0)
                
                sub_538150(&var_28)
            
            var_8_1.b = 4
            sub_6b73d0(var_58)
            var_95_1 = 1
        else
            int16_t* eax_16 = sub_6b9ed0(&var_30)
            var_8_1.b = 0xe
            int16_t* eax_17 = sub_548cb0(eax_16, 0xaf88ac, &var_48, eax_16)
            var_8_1.b = 0xf
            sub_684160(data_bac424, 2, eax_17)
            
            if (var_34_2 u>= 8)
                j__free(var_48)
            
            int32_t var_34_3 = 7
            int32_t var_38_3 = 0
            var_48.w = 0
            
            if (var_1c u>= 8)
                j__free(var_30.d)
            
            var_8_1.b = 4
            sub_6b73d0(var_58)
            var_95_1 = 0
    
    if (var_64_1 u>= 8)
        j__free(var_78.d)
    
    int32_t var_64_2 = 7
    var_78 = 0
    result.b = var_95_1
    int32_t var_68_2 = 0
else
    var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, 0xaf8764, 0x1d)
    var_8_1.b = 2
label_6621f0:
    sub_684160(data_bac424, 2, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    result.b = 0
    var_95_1 = 0

if (arg9 u>= 8)
    j__free(arg_20)
    result.b = var_95_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
