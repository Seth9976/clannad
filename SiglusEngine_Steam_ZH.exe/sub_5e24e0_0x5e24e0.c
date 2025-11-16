// 函数: sub_5e24e0
// 地址: 0x5e24e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc8eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_16c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_15c = esi
int32_t result = *esi

if (result s>= 0)
    esi[0x27] = *(result * 0xa0e4 + data_bac510 + 0x20784)
    sub_5e3fd0(esi)
    void* ecx_3 = *esi * 0xa0e4 + data_bac510
    *(esi + 0xd0) = *(ecx_3 + 0x207b8)
    esi[0x38] = *(ecx_3 + 0x207c8)
    esi[0x39].b = *(ecx_3 + 0x207cc)
    *(esi + 0xe5) = *(ecx_3 + 0x207cd)
    sub_5e4300(esi)
    result = (esi[0xc1] - esi[0xc0]) s/ 0x15fc
    int32_t var_158_1 = result
    
    if (result s> 0)
        int32_t edi_1 = 0
        result = 0
        int32_t var_154_1 = 0
        int32_t result_1 = 0
        int32_t i
        
        do
            int32_t ecx_8 = *esi * 0xa0e4 + result
            void* eax_11 = data_bac510
            
            if (*(ecx_8 + eax_11 + 0x207f8) != 0)
                void* const var_188_1 = 0xffffffff
                int32_t var_18c_1 = 0
                int32_t var_170_1 = 7
                int32_t var_174_1 = 0
                int16_t var_184 = 0
                sub_52e3c0(&var_184, eax_11 + 0x207e8 + ecx_8, var_18c_1, var_188_1)
                int32_t var_180
                sub_5ea6c0(esi[0xc0] + edi_1, var_184, var_180)
                void* edx_4 = data_bac510
                int32_t var_90_1 = 0
                *(esi[0xc0] + edi_1 + 0x390) = *(edx_4 + 0xa2ebb0)
                int32_t var_18_1 = 2
                int32_t var_4c_1 = 0
                int32_t var_30_1 = 7
                *(esi[0xc0] + edi_1 + 0x35c) = 1
                int32_t eax_16 = *esi * 0xa0e4
                int32_t var_34_1 = 0
                var_18_1.b = 1
                struct C_elm_list<class C_tnm_prop>::C_tnm_prop_list::VTable* const var_cc =
                    &C_tnm_prop_list::`vftable'{for `C_elm_list<class C_tnm_prop>'}
                *(esi[0xc0] + edi_1 + 0x344) = *(eax_16 + result_1 + edx_4 + 0x20800)
                int32_t eax_20 = *esi * 0xa0e4 + result_1
                int32_t eax_21 = *(eax_20 + edx_4 + 0x20810)
                void* edx_6 = esi[0xc0] + edi_1
                *(edx_6 + 0x2b0) = *(eax_20 + edx_4 + 0x20814)
                *(edx_6 + 0x2ac) = eax_21
                void var_14c
                __builtin_memcpy(&var_14c, edx_6 + 0xac, 0x80)
                *(edx_6 + 0x2b4) = 0
                int32_t var_d0
                *(&var_14c + (var_d0 << 2)) = 0xffffffff.q
                var_d0 += 2
                __builtin_memcpy(edx_6 + 0x2b8, &var_14c, 0x80)
                esi = var_15c
                void* edi_3 = data_bac510
                int128_t var_28_1 = zx.o(0)
                void* ecx_16 = esi[0xc0] + var_154_1
                int32_t eax_24 = *esi * 0xa0e4 + result_1
                int32_t edx_7 = *(eax_24 + edi_3 + 0x2081c)
                *(ecx_16 + 0x2a4) = *(eax_24 + edi_3 + 0x20818)
                *(ecx_16 + 0x2a8) = edx_7
                *(esi[0xc0] + var_154_1 + 0x340) = *(*esi * 0xa0e4 + result_1 + edi_3 + 0x20820)
                int16_t var_44_1 = 0
                int32_t var_8_1 = 0
                void* eax_31 = *esi * 0xa0e4 + result_1
                var_180 = 0xffffffff
                sub_5bfc30(esi[0xc0] + var_154_1 + 0xe94, var_180, 0, eax_31 + edi_3 + 0x20858, 
                    edi_3 + 0x20870 + eax_31, &var_cc)
                int32_t var_8_2 = 0xffffffff
                void var_c8
                sub_54ae40(&var_c8)
                edi_1 = var_154_1
                void* ecx_24 = *esi * 0xa0e4 + result_1 + data_bac510
                int32_t eax_33 = *(ecx_24 + 0x20834)
                
                if (eax_33 != 0)
                    if (*(ecx_24 + 0x2084c) != 0)
                        sub_5f3360(esi[0xc0] + edi_1, ecx_24 + 0x20824, ecx_24 + 0x2083c)
                    else if (eax_33 != 0)
                        int32_t eax_36 = *(ecx_24 + 0x20854)
                        
                        if (eax_36 s>= 0)
                            sub_5f33d0(esi[0xc0] + edi_1, ecx_24 + 0x20824, eax_36)
            
            edi_1 += 0x15fc
            result = result_1 + 0xa0
            var_154_1 = edi_1
            i = var_158_1
            var_158_1 -= 1
            result_1 = result
        while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
