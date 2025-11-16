// 函数: sub_593f40
// 地址: 0x593f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b8242
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_11c
int32_t eax_2 = __security_cookie ^ &var_11c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    void (__fastcall* var_130_1)(int32_t* arg1) = sub_55d540
    int32_t var_10c[0x6]
    sub_74675f(&var_10c, 0xc, 2, PDBStream::PDBStream)
    int32_t var_c_1 = 0
    int32_t eax_5 = *(arg1 + 0x7cc)
    
    if (eax_5 s>= 0 && eax_5 s< 2)
        int32_t var_e0_1 = 7
        int32_t var_e4_1 = 0
        int16_t var_f4 = 0
        var_c_1.b = 1
        
        if (eax_5 == 0)
            int32_t var_80_1 = 7
            int32_t var_84_1 = 0
            int16_t var_94 = 0
            sub_52e720(&var_94, 0xaefe38, 1)
            var_c_1.b = 2
            sub_52e3c0(&var_f4, &var_94, 0, 0xffffffff)
            var_c_1.b = 1
            sub_52e8a0(&var_94)
            sub_58a8a0(&var_10c[*(arg1 + 0x7cc) * 3], data_bac418 + 0xab4)
        else if (eax_5 == 1)
            int32_t var_38_1 = 7
            int32_t var_3c_1 = eax_5 - 1
            int16_t var_4c = (eax_5 - 1).w
            sub_52e720(&var_4c, 0xaefe3c, 1)
            var_c_1.b = 3
            sub_52e3c0(&var_f4, &var_4c, 0, 0xffffffff)
            var_c_1.b = 1
            sub_52e8a0(&var_4c)
            sub_58a8a0(&var_10c[*(arg1 + 0x7cc) * 3], data_bac418 + 0xb6c)
        
        int32_t esi_1 = *(arg1 + 0x7cc)
        
        if (*(esi_1 + arg1 + 0x7d0) != 0)
            goto label_594138
        
        int32_t eax_10 = esi_1 * 3
        void* esi_2 = arg1 + (eax_10 << 2)
        var_108
        int32_t eax_11
        int32_t edx_4
        edx_4:eax_11 = muls.dp.d(0x2aaaaaab, *(&var_108 + (eax_10 << 2)) - var_10c[eax_10])
        int32_t edx_5 = edx_4 s>> 2
        int32_t eax_12
        int32_t edx_6
        edx_6:eax_12 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x7b8) - *(esi_2 + 0x7b4))
        int32_t edx_7 = edx_6 s>> 2
        
        if ((edx_5 u>> 0x1f) + edx_5 != (edx_7 u>> 0x1f) + edx_7)
            esi_1 = *(arg1 + 0x7cc)
        label_594138:
            int32_t eax_16 = esi_1 * 3
            int32_t eax_17
            int32_t edx_8
            edx_8:eax_17 = muls.dp.d(0x2aaaaaab, *(&var_108 + (eax_16 << 2)) - var_10c[eax_16])
            int32_t edx_9 = edx_8 s>> 2
            int32_t eax_19 = *(data_bac4e0 + 0x30)
            
            if (eax_19 != 0)
                eax_19(*(esi_1 * 0x334 + arg1 + 0x150), (edx_9 u>> 0x1f) + edx_9, eax_4)
        
        int32_t esi_3 = *(arg1 + 0x7cc)
        int32_t i
        
        if (*(esi_3 + arg1 + 0x7d0) == 0)
            int32_t eax_20 = esi_3 * 3
            int32_t eax_21
            int32_t edx_11
            edx_11:eax_21 = muls.dp.d(0x2aaaaaab, 
                *(arg1 + (eax_20 << 2) + 0x7b8) - *(arg1 + (eax_20 << 2) + 0x7b4))
            int32_t edx_12 = edx_11 s>> 2
            i = (edx_12 u>> 0x1f) + edx_12
        else
            i = 0
        
        int32_t eax_22 = esi_3 * 3
        int32_t eax_23
        int32_t edx_13
        edx_13:eax_23 = muls.dp.d(0x2aaaaaab, *(&var_108 + (eax_22 << 2)) - var_10c[eax_22])
        int32_t edx_14 = edx_13 s>> 2
        
        if (i s< (edx_14 u>> 0x1f) + edx_14)
            int32_t edx_21
            
            do
                int32_t var_98_1 = 7
                int32_t var_9c_1 = 0
                int16_t var_ac = 0
                var_c_1.b = 4
                
                if (i s< 0 || i s>= 0x1a)
                    uint32_t eax_31 = zx.d(*(((i s/ 0x1a) << 1) + &data_aefe4e))
                    int16_t var_34
                    int32_t* eax_32 = sub_594830(eax_31, &var_f4, &var_34, eax_31.w)
                    var_c_1.b = 7
                    int16_t var_64
                    int16_t* eax_33 =
                        sub_55c680(eax_32, eax_32, &var_64, *(((i s% 0x1a) << 1) + &data_aefe50))
                    var_c_1.b = 8
                    int16_t var_dc = 0
                    int32_t var_c8_1 = 7
                    int32_t var_cc_1 = 0
                    sub_52e3c0(&var_dc, eax_33, 0, 0xffffffff)
                    var_c_1.b = 9
                    sub_52e3c0(&var_ac, &var_dc, 0, 0xffffffff)
                    
                    if (var_c8_1 u>= 8)
                        j__free(var_dc.d)
                    
                    int32_t var_c8_2 = 7
                    int32_t var_cc_2 = 0
                    var_dc = 0
                    int32_t var_50
                    
                    if (var_50 u>= 8)
                        j__free(var_64.d)
                    
                    var_c_1.b = 4
                    var_50 = 7
                    int32_t var_54_1 = 0
                    var_64 = 0
                    int32_t var_20
                    
                    if (var_20 u>= 8)
                        j__free(var_34.d)
                    
                    var_20 = 7
                    int32_t var_24_1 = 0
                    var_34 = 0
                else
                    uint32_t eax_27 = zx.d(*((i << 1) + &data_aefe50))
                    int16_t var_7c
                    int32_t* eax_28 = sub_594830(eax_27, &var_f4, &var_7c, eax_27.w)
                    var_c_1.b = 5
                    int16_t var_c4 = 0
                    int32_t var_b0_1 = 7
                    int32_t var_b4_1 = 0
                    sub_52e3c0(&var_c4, eax_28, 0, 0xffffffff)
                    var_c_1.b = 6
                    sub_52e3c0(&var_ac, &var_c4, 0, 0xffffffff)
                    
                    if (var_b0_1 u>= 8)
                        j__free(var_c4.d)
                    
                    var_c_1.b = 4
                    int32_t var_b0_2 = 7
                    int32_t var_b4_2 = 0
                    var_c4 = 0
                    int32_t var_68
                    
                    if (var_68 u>= 8)
                        j__free(var_7c.d)
                    
                    var_68 = 7
                    int32_t var_6c_1 = 0
                    var_7c = 0
                
                int32_t eax_35 = *(data_bac4e0 + 0x34)
                
                if (eax_35 != 0)
                    eax_35(*(*(arg1 + 0x7cc) * 0x334 + arg1 + 0x150), i, 0, &var_ac, eax_4)
                
                var_c_1.b = 1
                
                if (var_98_1 u>= 8)
                    j__free(var_ac.d)
                
                i += 1
                int32_t eax_37 = *(arg1 + 0x7cc) * 3
                int32_t eax_38
                int32_t edx_20
                edx_20:eax_38 = muls.dp.d(0x2aaaaaab, *(&var_108 + (eax_37 << 2)) - var_10c[eax_37])
                edx_21 = edx_20 s>> 2
            while (i s< (edx_21 u>> 0x1f) + edx_21)
        
        int32_t i_1 = 0
        int32_t esi_7 = *(arg1 + 0x7cc) * 0xc
        void* eax_43 = &var_10c + esi_7
        void* var_114_1 = eax_43
        int32_t eax_44
        int32_t edx_22
        edx_22:eax_44 = muls.dp.d(0x2aaaaaab, *(eax_43 + 4) - *eax_43)
        int32_t edx_23 = edx_22 s>> 2
        
        if ((edx_23 u>> 0x1f) + edx_23 s> 0)
            int32_t edi_6 = 0
            int32_t edx_30
            
            do
                int32_t i_2
                
                if (*(*(arg1 + 0x7cc) + arg1 + 0x7d0) != 0)
                    i_2 = i_1
                label_59454a:
                    int32_t ecx_42 = *(arg1 + 0x7cc)
                    int32_t eax_61 = *(data_bac4e0 + 0x34)
                    
                    if (eax_61 != 0)
                        eax_61(*(ecx_42 * 0x334 + arg1 + 0x150), i_2, 1, 
                            var_10c[ecx_42 * 3] + edi_6, eax_4)
                else
                    void* eax_50 = arg1 + 0x7b4 + esi_7
                    i_2 = i_1
                    int32_t eax_51
                    int32_t edx_24
                    edx_24:eax_51 = muls.dp.d(0x2aaaaaab, *(eax_50 + 4) - *eax_50)
                    int32_t edx_25 = edx_24 s>> 2
                    
                    if (i_2 s>= (edx_25 u>> 0x1f) + edx_25)
                        goto label_59454a
                    
                    void** eax_57 = *eax_50 + edi_6
                    void* ecx_41 = *var_114_1 + edi_6
                    int32_t edx_26 = eax_57[4]
                    
                    if (eax_57[5] u>= 8)
                        eax_57 = *eax_57
                    
                    int32_t var_130_13 = edx_26
                    
                    if (sub_536340(ecx_41, ecx_41, *(ecx_41 + 0x10), eax_57) != 0)
                        goto label_59454a
                
                i_1 = i_2 + 1
                edi_6 += 0x18
                esi_7 = *(arg1 + 0x7cc) * 0xc
                void* eax_63 = &var_10c + esi_7
                var_114_1 = eax_63
                int32_t eax_64
                int32_t edx_29
                edx_29:eax_64 = muls.dp.d(0x2aaaaaab, *(eax_63 + 4) - *eax_63)
                edx_30 = edx_29 s>> 2
            while (i_1 s< (edx_30 u>> 0x1f) + edx_30)
        
        sub_58a8a0(*(arg1 + 0x7cc) * 0xc + 0x7b4 + arg1, &var_10c[*(arg1 + 0x7cc) * 3])
        *(arg1 + *(arg1 + 0x7cc) + 0x7d0) = 0
        
        if (var_e0_1 u>= 8)
            j__free(var_f4.d)
        
        int32_t var_e0_2 = 7
        int32_t var_e4_2 = 0
        var_f4 = 0
    
    int32_t var_c_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_10c, 0xc, 2, sub_55d540)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_11c)
return result
