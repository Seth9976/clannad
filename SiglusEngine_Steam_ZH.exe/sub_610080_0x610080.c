// 函数: sub_610080
// 地址: 0x610080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bec23
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_b4 = 0
int32_t var_64 = 7
int32_t var_68 = 0
int16_t var_78 = 0
int32_t var_8_1 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
var_8_1.b = 1
int32_t* esi = data_bac50c
int32_t var_94 = 0
int32_t eax_8 = arg5 s/ 0x186a0
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
int32_t edx_3 = edx_2 s>> 3
int16_t* result

if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
label_6101b1:
    sub_52e820(arg3, &data_ad7c90)
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    
    if (var_64 u>= 8)
        j__free(var_78.d)
    
    result = arg3
else
    void* edi_1 = data_bac4d8
    int32_t ebx_1 = 0
    
    while (true)
        void* ecx_4 = *esi + ebx_1
        void* eax_13
        
        if (*(edi_1 + 0x8c) u< 8)
            eax_13 = edi_1 + 0x78
        else
            eax_13 = *(edi_1 + 0x78)
        
        int32_t var_cc_1 = *(edi_1 + 0x88)
        
        if (sub_536340(ecx_4, ecx_4, *(ecx_4 + 0x10), eax_13) == 0)
            break
        
        ebx_1 += 0x30
        var_94 += 1
        int32_t eax_15
        int32_t edx_4
        edx_4:eax_15 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
        int32_t edx_5 = edx_4 s>> 3
        
        if (var_94 s>= (edx_5 u>> 0x1f) + edx_5)
            goto label_6101b1
    
    int32_t ebx_2 = var_94
    
    if (ebx_2 s< 0)
        goto label_6101b1
    
    int32_t eax_19
    int32_t edx_6
    edx_6:eax_19 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
    int32_t edx_7 = edx_6 s>> 3
    
    if (ebx_2 s>= (edx_7 u>> 0x1f) + edx_7)
        goto label_6101b1
    
    int32_t ecx_14 = ebx_2 * 0x30
    int32_t var_94_1 = ecx_14
    
    while (true)
        void** eax_24 = *esi + ecx_14
        int32_t var_7c_1 = 7
        int32_t var_80_1 = 0
        void* var_cc_5 = 0xffffffff
        int32_t var_d0_2 = 0
        int16_t var_90 = 0
        sub_52e3c0(&var_90, eax_24, var_d0_2, var_cc_5)
        int32_t var_cc_6 = arg5
        var_8_1.b = 2
        int32_t var_d0_3 = eax_8
        int32_t esi_2 = 1
        int32_t var_d4_3 = 7
        int32_t var_d8_2 = 0
        int16_t var_e8 = 0
        sub_52e720(&var_e8, u"%04d\z%09d", 0xa)
        int32_t var_48
        int16_t* eax_25 = sub_6ae4c0(&var_48, var_e8)
        var_8_1.b = 3
        
        if (&var_78 != eax_25)
            sub_52e3c0(&var_78, eax_25, 0, 0xffffffff)
        
        var_8_1.b = 2
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48)
        
        void* var_cc_9 = 3
        int32_t var_4c_1 = 7
        void* const var_d0_5 = &data_af33a4
        int32_t var_50_1 = 0
        int16_t var_60 = 0
        sub_52e720(&var_60, var_d0_5, var_cc_9)
        var_8_1.b = 4
        int16_t* eax_27 = sub_60e8c0(&var_90, arg2, &var_48, &var_90, arg4, &var_78, &var_60)
        var_8_1.b = 5
        
        if (&var_30 != eax_27)
            sub_52e3c0(&var_30, eax_27, 0, 0xffffffff)
        
        if (var_34 u>= 8)
            j__free(var_48)
        
        var_8_1.b = 2
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        var_48.w = 0
        
        if (var_4c_1 u>= 8)
            j__free(var_60.d)
        
        int16_t* lpFileName = &var_30
        
        if (var_1c u>= 8)
            lpFileName = var_30.d
        
        uint32_t eax_28 = GetFileAttributesW(lpFileName)
        
        if (eax_28 == 0xffffffff || (eax_28.b & 0x10) != 0)
            int32_t var_cc_15 = arg5
            esi_2 = 2
            int32_t var_d0_8 = eax_8
            int32_t var_d4_7 = 7
            int32_t var_d8_4 = 0
            var_e8 = 0
            sub_52e720(&var_e8, u"%04d\z%09d", 0xa)
            int16_t* eax_29 = sub_6ae4c0(&var_48, var_e8)
            var_8_1.b = 6
            
            if (&var_78 != eax_29)
                sub_52e3c0(&var_78, eax_29, 0, 0xffffffff)
            
            var_8_1.b = 2
            
            if (var_34_1 u>= 8)
                j__free(var_48)
            
            void* var_cc_18 = 3
            int32_t var_4c_2 = 7
            void* const var_d0_10 = &data_af3994
            int32_t var_50_2 = 0
            var_60 = 0
            sub_52e720(&var_60, var_d0_10, var_cc_18)
            var_8_1.b = 7
            int16_t* eax_31 = sub_60e8c0(&var_90, arg2, &var_48, &var_90, arg4, &var_78, &var_60)
            var_8_1.b = 8
            
            if (&var_30 != eax_31)
                sub_52e3c0(&var_30, eax_31, 0, 0xffffffff)
            
            if (var_34_1 u>= 8)
                j__free(var_48)
            
            var_8_1.b = 2
            int32_t var_34_2 = 7
            int32_t var_38_2 = 0
            var_48.w = 0
            
            if (var_4c_2 u>= 8)
                j__free(var_60.d)
            
            int16_t* lpFileName_1 = &var_30
            
            if (var_1c u>= 8)
                lpFileName_1 = var_30.d
            
            uint32_t eax_32 = GetFileAttributesW(lpFileName_1)
            
            if (eax_32 == 0xffffffff || (eax_32.b & 0x10) != 0)
                int32_t var_cc_24 = eax_8
                esi_2 = 3
                var_e8.d = 5
                int32_t var_d0_13 = 7
                int32_t var_d4_11 = 0
                int16_t var_e4 = 0
                sub_52e720(&var_e4, u"z%04d", var_e8)
                var_e8.d = &var_48
                int16_t* eax_33 = sub_6ae4c0(var_e8, var_e4)
                var_8_1.b = 9
                
                if (&var_78 != eax_33)
                    sub_52e3c0(&var_78, eax_33, 0, 0xffffffff)
                
                var_8_1.b = 2
                
                if (var_34_2 u>= 8)
                    j__free(var_48)
                
                void* var_cc_27 = 3
                int32_t var_4c_3 = 7
                void* const var_d0_15 = &data_af39d0
                int32_t var_50_3 = 0
                var_60 = 0
                sub_52e720(&var_60, var_d0_15, var_cc_27)
                var_8_1.b = 0xa
                int16_t* eax_35 =
                    sub_60e8c0(&var_90, arg2, &var_48, &var_90, arg4, &var_78, &var_60)
                var_8_1.b = 0xb
                
                if (&var_30 != eax_35)
                    sub_52e3c0(&var_30, eax_35, 0, 0xffffffff)
                
                if (var_34_2 u>= 8)
                    j__free(var_48)
                
                var_34 = 7
                int32_t var_38_3 = 0
                var_48.w = 0
                
                if (var_4c_3 u>= 8)
                    j__free(var_60.d)
                
                int16_t* lpFileName_2 = &var_30
                
                if (var_1c u>= 8)
                    lpFileName_2 = var_30.d
                
                uint32_t eax_36 = GetFileAttributesW(lpFileName_2)
                
                if (eax_36 == 0xffffffff || (eax_36.b & 0x10) != 0)
                    var_8_1.b = 1
                    
                    if (var_7c_1 u>= 8)
                        j__free(var_90.d)
                    
                    esi = data_bac50c
                    var_94_1 += 0x30
                    ebx_2 += 1
                    int32_t eax_37
                    int32_t edx_11
                    edx_11:eax_37 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
                    int32_t edx_12 = edx_11 s>> 3
                    
                    if (ebx_2 s>= (edx_12 u>> 0x1f) + edx_12)
                        goto label_6101b1
                    
                    ecx_14 = var_94_1
                    continue
        
        var_8_1.b = 1
        
        if (var_7c_1 u>= 8)
            j__free(var_90.d)
        
        if (arg6 != 0)
            *arg6 = esi_2
        
        void* const var_cc_35 = 0xffffffff
        int32_t var_d0_18 = 0
        *(arg3 + 0x14) = 7
        *(arg3 + 0x10) = 0
        *arg3 = 0
        sub_52e3c0(arg3, &var_30, var_d0_18, var_cc_35)
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        
        if (var_64 u>= 8)
            j__free(var_78.d)
        
        result = arg3
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
