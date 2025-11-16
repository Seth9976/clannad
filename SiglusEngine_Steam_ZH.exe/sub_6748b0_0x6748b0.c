// 函数: sub_6748b0
// 地址: 0x6748b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6be3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg1
void* var_44
sub_677c10(&var_44)
int32_t var_8_1 = 0
int16_t var_2c
sub_677c10(&var_2c)
var_8_1.b = 1

if (zx.d(ebx.b) - 1 u<= 0x14)
    switch (zx.d(ebx.b) + &jump_table_674ba4[7]:3)
        case &lookup_table_674bc4
            void var_134
            int16_t* eax_7 = sub_5327a0(&var_44, &var_2c, &var_134, &var_44)
            var_8_1.b = 2
            sub_60c680(data_bac49c + 0xc, eax_7)
            sub_52e8a0(&var_134)
        case &lookup_table_674bc4[0xf]
            void var_a4
            int16_t* esi_1 = sub_6ae650(&var_a4, &var_44)
            var_8_1.b = 3
            void var_104
            int16_t* eax_9 = sub_6ae650(&var_104, &var_2c)
            var_8_1.b = 4
            int32_t ecx_8 = *(esi_1 + 0x10)
            
            if (*(esi_1 + 0x14) u>= 8)
                esi_1 = *esi_1
            
            int32_t var_190_3 = ecx_8
            int32_t eax_10 = sub_536340(eax_9, ecx_8, *(eax_9 + 0x10), esi_1)
            int32_t eax_11 = neg.d(eax_10)
            sub_677bb0(sbb.d(eax_11, eax_11, eax_10 != 0) + 1)
            sub_52e8a0(&var_104)
            sub_52e8a0(&var_a4)
        case &lookup_table_674bc4[0x10]
            void var_d4
            int16_t* eax_13 = sub_6ae650(&var_d4, &var_44)
            var_8_1.b = 5
            void var_164
            int32_t ecx_15
            ecx_15.b = sub_535c40(sub_6ae650(&var_164, &var_2c), eax_13) != 0
            sub_677bb0(ecx_15)
            sub_52e8a0(&var_164)
            sub_52e8a0(&var_d4)
        case &lookup_table_674bc4[0x11]
            void var_74
            int16_t* eax_16 = sub_6ae650(&var_74, &var_44)
            var_8_1.b = 6
            void var_5c
            int16_t* eax_17 = sub_6ae650(&var_5c, &var_2c)
            var_8_1.b = 7
            int32_t ecx_19 = *(eax_17 + 0x10)
            
            if (*(eax_17 + 0x14) u>= 8)
                eax_17 = *eax_17
            
            int32_t var_190_4 = ecx_19
            int32_t ecx_21
            ecx_21.b = sub_536340(eax_16, ecx_19, *(eax_16 + 0x10), eax_17) s< 0
            sub_677bb0(ecx_21)
            sub_52e8a0(&var_5c)
            sub_52e8a0(&var_74)
        case &lookup_table_674bc4[0x12]
            void var_bc
            int16_t* esi_4 = sub_6ae650(&var_bc, &var_44)
            var_8_1.b = 8
            void var_8c
            int16_t* eax_20 = sub_6ae650(&var_8c, &var_2c)
            var_8_1.b = 9
            int32_t ecx_25 = *(esi_4 + 0x10)
            
            if (*(esi_4 + 0x14) u>= 8)
                esi_4 = *esi_4
            
            int32_t var_190_5 = ecx_25
            int32_t ecx_27
            ecx_27.b = sub_536340(eax_20, ecx_25, *(eax_20 + 0x10), esi_4) s>= 0
            sub_677bb0(ecx_27)
            sub_52e8a0(&var_8c)
            sub_52e8a0(&var_bc)
        case &lookup_table_674bc4[0x13]
            void var_11c
            int16_t* eax_22 = sub_6ae650(&var_11c, &var_44)
            var_8_1.b = 0xa
            void var_ec
            int32_t ecx_32
            ecx_32.b = sub_5c3c50(sub_6ae650(&var_ec, &var_2c), eax_22) != 0
            sub_677bb0(ecx_32)
            sub_52e8a0(&var_ec)
            sub_52e8a0(&var_11c)
        case &lookup_table_674bc4[0x14]
            void var_17c
            int16_t* eax_25 = sub_6ae650(&var_17c, &var_44)
            var_8_1.b = 0xb
            void var_14c
            int16_t* eax_26 = sub_6ae650(&var_14c, &var_2c)
            var_8_1.b = 0xc
            int32_t ecx_36 = *(eax_26 + 0x10)
            
            if (*(eax_26 + 0x14) u>= 8)
                eax_26 = *eax_26
            
            int32_t var_190_6 = ecx_36
            int32_t ecx_38
            ecx_38.b = sub_536340(eax_25, ecx_36, *(eax_25 + 0x10), eax_26) s>= 0
            sub_677bb0(ecx_38)
            sub_52e8a0(&var_14c)
            sub_52e8a0(&var_17c)

int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t result = 0
int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 8)
    result = j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
