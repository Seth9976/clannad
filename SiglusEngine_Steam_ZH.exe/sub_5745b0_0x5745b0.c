// 函数: sub_5745b0
// 地址: 0x5745b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b44c7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_128
int32_t eax_2 = __security_cookie ^ &var_128
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_134 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_114 = edi
int32_t* i = *(edi + 0x3694)
int32_t ecx = 0
int32_t var_11c = 0
int16_t var_150
int32_t var_c8
int32_t var_b4
int16_t var_b0
int32_t var_9c

if (i != *(edi + 0x3698))
    ecx = 0
    
    do
        if (*(*i + 4) != 0)
            int32_t var_138_1 = ecx
            int32_t var_154_1 = 0x11
            int32_t var_13c_1 = 7
            int32_t var_140_1 = 0
            wchar16 const* const var_158_1 = u"element_%04d_code"
            var_150 = 0
            sub_52e720(&var_150, u"element_%04d_code", 0x11)
            sub_6ae4c0(&var_c8, var_150)
            int32_t var_14_1 = 0
            *(*i + 0x494)
            int16_t var_98
            int32_t* ecx_3 = sub_6ad9b0(&var_98)
            var_14_1.b = 1
            int32_t j = 0
            void* eax_6 = *i
            int16_t var_110
            int32_t var_fc
            int16_t var_f8
            int32_t var_e4
            
            if (*(eax_6 + 0x490) s> 0)
                ecx_3 = 0x414
                int32_t* var_118_1 = 0x414
                
                do
                    *(ecx_3 + eax_6)
                    int32_t* var_138_2 = ecx_3
                    int16_t* eax_7 = sub_6ad9b0(&var_f8)
                    var_14_1.b = 2
                    int32_t var_138_4 = 0xffffffff
                    int32_t var_13c_2 = 0
                    int16_t* var_140_2 = sub_548cb0(eax_7, &data_aee74c, &var_110, eax_7)
                    var_14_1.b = 3
                    sub_532870(&var_98)
                    
                    if (var_fc u>= 8)
                        j__free(var_110.d)
                    
                    var_14_1.b = 1
                    var_fc = 7
                    int32_t var_100_1 = 0
                    var_110 = 0
                    
                    if (var_e4 u>= 8)
                        j__free(var_f8.d)
                    
                    eax_6 = *i
                    j += 1
                    ecx_3 = &var_118_1[1]
                    var_118_1 = ecx_3
                while (j s< *(eax_6 + 0x490))
            
            int32_t* var_138_7 = ecx_3
            *(*i + 0x4b0)
            int32_t var_68
            int16_t* eax_9 = sub_6ad9b0(&var_68)
            int32_t var_e4_1 = 7
            int32_t var_e8_1 = 0
            var_f8 = 0
            var_14_1.b = 5
            int16_t var_e0
            int16_t* eax_10 = sub_532b80(0, &var_f8, &var_e0, &data_aee750)
            var_14_1.b = 6
            int32_t var_138_10 = 0xffffffff
            int32_t var_13c_3 = 0
            int16_t* var_140_3 = sub_5327a0(eax_10, eax_10, &var_110, eax_9)
            var_14_1.b = 7
            int32_t ecx_12 = sub_532870(&var_98)
            
            if (var_fc u>= 8)
                ecx_12 = j__free(var_110.d)
            
            int32_t var_fc_1 = 7
            int32_t var_100_2 = 0
            var_110 = 0
            int32_t var_cc
            
            if (var_cc u>= 8)
                ecx_12 = j__free(var_e0.d)
            
            int32_t var_cc_1 = 7
            int32_t var_d0_1 = 0
            var_e0 = 0
            
            if (var_e4_1 u>= 8)
                ecx_12 = j__free(var_f8.d)
            
            var_14_1.b = 1
            int32_t var_54
            
            if (var_54 u>= 8)
                ecx_12 = j__free(var_68)
            
            int32_t var_138_15 = ecx_12
            *(*i + 0x4b4)
            int16_t* eax_12 = sub_6ad9b0(&var_68)
            int32_t var_fc_2 = 7
            int32_t var_100_3 = 0
            var_110 = 0
            var_14_1.b = 9
            int16_t* eax_13 = sub_532b80(0, &var_110, &var_e0, &data_aee750)
            var_14_1.b = 0xa
            int32_t var_138_18 = 0xffffffff
            int32_t var_13c_4 = 0
            int16_t* var_140_4 = sub_5327a0(eax_13, eax_13, &var_f8, eax_12)
            var_14_1.b = 0xb
            sub_532870(&var_98)
            
            if (var_e4_1 u>= 8)
                j__free(var_f8.d)
            
            int32_t var_e4_2 = 7
            int32_t var_e8_2 = 0
            var_f8 = 0
            
            if (var_cc_1 u>= 8)
                j__free(var_e0.d)
            
            int32_t var_cc_2 = 7
            int32_t var_d0_2 = 0
            var_e0 = 0
            
            if (var_fc_2 u>= 8)
                j__free(var_110.d)
            
            if (var_54 u>= 8)
                j__free(var_68)
            
            int32_t var_fc_3 = 7
            int32_t var_100_4 = 0
            var_110 = 0
            var_14_1.b = 0xc
            int16_t* eax_15 = sub_532b80(0, &var_110, &var_e0, &data_aee750)
            var_14_1.b = 0xd
            void* const edx_13 = &data_aee754
            
            if (*(*i + 0x4b8) == 0)
                edx_13 = &data_ad8cf0
            
            int32_t var_138_25 = 0xffffffff
            int32_t var_13c_5 = 0
            int16_t* var_140_5 = sub_532b80(eax_15, eax_15, &var_f8, edx_13)
            var_14_1.b = 0xe
            sub_532870(&var_98)
            
            if (var_e4_2 u>= 8)
                j__free(var_f8.d)
            
            var_e4 = 7
            int32_t var_e8_3 = 0
            var_f8 = 0
            
            if (var_cc_2 u>= 8)
                j__free(var_e0.d)
            
            var_14_1.b = 1
            var_cc = 7
            int32_t var_d0_3 = 0
            var_e0 = 0
            
            if (var_fc_3 u>= 8)
                j__free(var_110.d)
            
            int32_t var_fc_4 = 7
            void* var_138_29 = nullptr
            void* const var_13c_6 = &data_ad7c90
            int32_t var_100_5 = 0
            var_110 = 0
            sub_52e720(&var_110, var_13c_6, var_138_29)
            edi = var_114
            int16_t* var_138_30 = &var_110
            var_14_1.b = 0xf
            int16_t* var_13c_7 = &var_98
            int32_t* var_140_6 = &var_c8
            sub_6c1d40(edi)
            var_14_1.b = 1
            
            if (var_fc_4 u>= 8)
                j__free(var_110.d)
            
            int32_t var_138_32 = var_11c
            int32_t var_154_3 = 0x11
            int32_t var_13c_8 = 7
            int32_t var_140_7 = 0
            wchar16 const* const var_158_2 = u"element_%04d_name"
            var_150 = 0
            sub_52e720(&var_150, u"element_%04d_name", 0x11)
            sub_6ae4c0(&var_b0, var_150)
            var_14_1.b = 0x10
            void* var_138_33 = nullptr
            void* const var_13c_9 = &data_ad7c90
            int32_t var_fc_5 = 7
            int32_t var_100_6 = 0
            var_110 = 0
            sub_52e720(&var_110, var_13c_9, var_138_33)
            var_14_1.b = 0x11
            int16_t* var_138_34 = &var_110
            int32_t var_13c_10 = *i + 0x498
            int16_t* var_140_8 = &var_b0
            sub_6c1d40(edi)
            var_14_1.b = 0x10
            
            if (var_fc_5 u>= 8)
                j__free(var_110.d)
            
            int32_t var_138_36 = var_11c
            int32_t var_154_5 = 0x11
            int32_t var_13c_11 = 7
            int32_t var_140_9 = 0
            wchar16 const* const var_158_3 = u"element_%04d_rect"
            var_150 = 0
            sub_52e720(&var_150, u"element_%04d_rect", 0x11)
            int16_t var_80
            sub_6ae4c0(&var_80, var_150)
            var_14_1.b = 0x12
            void* var_138_37 = nullptr
            void* const var_13c_12 = &data_ad7c90
            var_fc = 7
            int32_t var_100_7 = 0
            var_110 = 0
            sub_52e720(&var_110, var_13c_12, var_138_37)
            var_14_1.b = 0x13
            void* eax_19 = *i
            RECT var_50
            RECT* lpRect = &var_50
            __builtin_memset(&var_50, 0, 0x10)
            GetWindowRect(*(eax_19 + 4), lpRect)
            int128_t xmm0_1
            xmm0_1.d = var_50.left
            xmm0_1:4.d = var_50.top
            xmm0_1:8.d = var_50.right
            xmm0_1:0xc.d = var_50.bottom
            sub_6c20c0(edi, &var_80, &var_110, xmm0_1)
            
            if (var_fc u>= 8)
                j__free(var_110.d)
            
            var_11c += 1
            int32_t var_6c
            
            if (var_6c u>= 8)
                j__free(var_80.d)
            
            var_6c = 7
            int32_t var_70_1 = 0
            var_80 = 0
            
            if (var_9c u>= 8)
                j__free(var_b0.d)
            
            var_9c = 7
            int32_t var_a0_1 = 0
            var_b0 = 0
            int32_t var_84
            
            if (var_84 u>= 8)
                j__free(var_98.d)
            
            int32_t var_14_2 = 0xffffffff
            var_84 = 7
            int32_t var_88_1 = 0
            var_98 = 0
            
            if (var_b4 u>= 8)
                j__free(var_c8)
            
            ecx = var_11c
        
        i = &i[2]
    while (i != *(edi + 0x3698))

int32_t var_138_43 = ecx
int32_t var_154_7 = 0x11
int32_t var_13c_14 = 7
int32_t var_140_10 = 0
wchar16 const* const var_158_4 = u"element_%04d_name"
var_150 = 0
sub_52e720(&var_150, u"element_%04d_name", 0x11)
int32_t var_3c
sub_6ae4c0(&var_3c, var_150)
int32_t var_14_3 = 0x14
sub_52e820(&var_c8, &data_ad7c90)
var_14_3.b = 0x15
sub_52e820(&var_b0, &data_ad7c90)
var_14_3.b = 0x16
int32_t* var_138_46 = &var_c8
int16_t* var_13c_15 = &var_b0
int32_t* var_140_11 = &var_3c
sub_6c1d40(edi)

if (var_9c u>= 8)
    j__free(var_b0.d)

var_14_3.b = 0x14
int32_t var_9c_1 = 7
int32_t var_a0_2 = 0
var_b0 = 0

if (var_b4 u>= 8)
    j__free(var_c8)

sub_52e820(&var_c8, &data_ad7c90)
var_14_3.b = 0x17
sub_6c6e10(edi + 0x35a8, &var_c8)
var_14_3.b = 0x14

if (var_b4 u>= 8)
    j__free(var_c8)

sub_52e820(&var_c8, &data_ad7c90)
var_14_3.b = 0x18
sub_6c6e10(edi + 0x3614, &var_c8)
var_14_3.b = 0x14

if (var_b4 u>= 8)
    j__free(var_c8)

HWND result = sub_6c26c0(edi)
int32_t var_28

if (var_28 u>= 8)
    result = j__free(var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_128)
return result
