// 函数: sub_688e90
// 地址: 0x688e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8392
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_114 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** esi = data_bac50c
int32_t var_104 = 0
int32_t var_100 = 0
int32_t var_fc = 0
int32_t var_8_1 = 0
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, u"Select.ini", 0xa)
int16_t* lpFileName = &var_5c

if (var_48 u>= 8)
    lpFileName = var_5c.d

uint32_t eax_3 = GetFileAttributesW(lpFileName)
uint32_t eax_4

if (eax_3 != 0xffffffff)
    eax_3.b = not.b(eax_3.b)
    eax_4 = zx.d(eax_3.b) u>> 4 & 1
else
    eax_4 = eax_3

int32_t ebx
ebx.b = eax_4 == 1

if (var_48 u>= 8)
    eax_4 = j__free(var_5c.d)

int32_t result
int16_t var_a4

if (ebx.b == 0)
    int32_t var_a8_1 = 7
    int32_t var_ac_1 = 0
    int16_t var_bc = 0
    int32_t var_90_1 = 7
    int32_t var_94_1 = 0
    var_a4 = 0
    var_8_1.b = 0xf
    sub_669320(esi, &var_bc)
    sub_57a0a0(&var_bc)
    result.b = 1
else
    int32_t* var_50 = nullptr
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    var_8_1.b = 1
    var_8_1.b = 2
    var_8_1.b = 1
    void* var_44
    ebx.b = sub_6b80e0(sub_532b80(eax_4, &data_4ebe3c8, &var_44, u"\Select.ini"), &var_50) == 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    int32_t edi_1 = var_4c_1
    int32_t* ebx_1 = var_50
    int32_t var_30_1
    int16_t var_2c
    int32_t var_18_1
    int32_t ecx_8
    
    if (ebx.b != 0)
        var_30_1 = 7
        int32_t var_34_1 = 0
        var_44.w = 0
        sub_52e720(&var_44, &data_ad7c90, nullptr)
        var_8_1.b = 3
        void* const var_118_6 = 0x15
        var_18_1 = 7
        int32_t* var_11c_2 = u"Select.ini"
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_11c_2, var_118_6)
        var_8_1.b = 4
    label_689061:
        ecx_8 = sub_6b9da0(&var_2c, &var_44)
        
        if (var_18_1 u>= 8)
            ecx_8 = j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        
        if (var_30_1 u>= 8)
            result, ecx_8 = j__free(var_44)
        
        goto label_68932c
    
    if (ebx_1 == edi_1)
        var_30_1 = 7
        int32_t var_34_2 = 0
        var_44.w = 0
        sub_52e720(&var_44, &data_ad7c90, nullptr)
        var_8_1.b = 5
        void* const var_118_8 = 0x10
        var_18_1 = 7
        int32_t* var_11c_4 = u"Select.ini"
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_11c_4, var_118_8)
        var_8_1.b = 6
        goto label_689061
    
    int32_t var_f0
    
    if (ebx_1[4] != 0)
        void* ecx_15 = edi_1 - ebx_1
        int32_t esi_1 = 0
        int32_t eax_12 = ecx_15 s/ 0x18
        
        if (eax_12 s> 0)
            int32_t* edi_2 = ebx_1
            
            do
                void* var_20 = nullptr
                int32_t var_1c_5 = 0
                int32_t var_18_4 = 0
                int32_t var_118_13 = 1
                var_8_1.b = 9
                void var_12c
                sub_696540(sub_669af0(&var_12c, 0xad90c4), edi_2, &var_20)
                ecx_15 = var_20
                int32_t edx_7 = var_1c_5
                
                if (ecx_15 != edx_7)
                    if ((edx_7 - ecx_15) s/ 0x18 != 2)
                        int32_t var_30_3 = 7
                        int32_t var_34_4 = 0
                        var_44.w = 0
                        int32_t var_118_20 = sub_52e720(&var_44, &data_ad7c90, nullptr)
                        var_8_1.b = 0xa
                        void** eax_18 = sub_6ad9b0(&var_a4)
                        var_8_1.b = 0xb
                        void var_ec
                        void** eax_19 = sub_548cb0(eax_18, u"Select.ini", &var_ec, eax_18)
                        var_8_1.b = 0xc
                        var_8_1.b = 0xd
                        void var_d4
                        sub_6b9da0(sub_532b80(eax_19, eax_19, &var_d4, &data_afbb0c), &var_44)
                        sub_52e8a0(&var_d4)
                        sub_52e8a0(&var_ec)
                        sub_52e8a0(&var_a4)
                        sub_52e8a0(&var_44)
                        result, ecx_8 = sub_55d540(&var_20)
                        edi_1 = var_4c_1
                        goto label_68932c
                    
                    int32_t var_78_1 = 7
                    int32_t var_7c_1 = 0
                    int16_t var_8c = 0
                    int32_t var_60_1 = 7
                    int32_t var_64_1 = 0
                    int16_t var_74 = 0
                    var_8_1.b = 0xe
                    
                    if (&var_8c != ecx_15)
                        sub_52e3c0(&var_8c, ecx_15, 0, 0xffffffff)
                        ecx_15 = var_20
                    
                    if (&var_74 != ecx_15 + 0x18)
                        sub_52e3c0(&var_74, ecx_15 + 0x18, 0, 0xffffffff)
                    
                    sub_669320(esi, &var_8c)
                    sub_57a0a0(&var_8c)
                    edx_7 = var_1c_5
                    ecx_15 = var_20
                
                var_8_1.b = 1
                
                if (ecx_15 != 0)
                    int32_t var_118_17 = var_f0
                    void* var_11c_9 = ecx_15
                    sub_55d500(ecx_15, edx_7)
                    ecx_15 = j__free(var_20)
                    var_20 = nullptr
                    int32_t var_1c_6 = 0
                    int32_t var_18_5 = 0
                
                esi_1 += 1
                edi_2 = &edi_2[6]
            while (esi_1 s< eax_12)
            
            edi_1 = var_4c_1
        
        int32_t var_118_18 = var_f0
        void* var_11c_10 = ecx_15
        sub_55d500(ebx_1, edi_1)
        j__free(ebx_1)
        result.b = 1
    else
        int32_t var_18_3 = 7
        void* var_118_11 = nullptr
        void* const var_11c_5 = &data_ad7c90
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_11c_5, var_118_11)
        var_8_1.b = 7
        int32_t var_30_2 = 7
        int32_t var_34_3 = 0
        var_44.w = 0
        sub_52e720(&var_44, u"Select.ini", 0x14)
        var_8_1.b = 8
        sub_6b9da0(&var_44, &var_2c)
        sub_52e8a0(&var_44)
        result, ecx_8 = sub_52e8a0(&var_2c)
    label_68932c:
        
        if (ebx_1 != 0)
            int32_t var_118_23 = var_f0
            int32_t var_11c_12 = ecx_8
            sub_55d500(ebx_1, edi_1)
            j__free(ebx_1)
        
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
