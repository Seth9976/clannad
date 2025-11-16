// 函数: sub_591a20
// 地址: 0x591a20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2

if (*(arg1 + 4) != 0)
    void (__fastcall* var_e0_1)(int32_t* arg1) = sub_5920b0
    int32_t var_a4[0x6]
    sub_74675f(&var_a4, 0xc, 2, PDBStream::PDBStream)
    int32_t var_8_1 = 0
    int32_t eax_3 = *(arg1 + 0x7cc)
    void* var_b4_1
    void* esi_1
    
    if (eax_3 == 0)
        var_b4_1 = nullptr
        esi_1 = nullptr
    else if (eax_3 != 1)
        esi_1 = arg1
        var_b4_1 = arg1
    else
        var_b4_1 = 1
        esi_1 = eax_3
    
    void* var_e0_2 = arg1
    int32_t eax_7 = esi_1 * 0xc
    void* ebx_2 = &var_a4[esi_1 * 3]
    void* const var_e4_1 = &data_7467a4
    void* var_bc_1 = ebx_2
    sub_5926c0(*ebx_2, *(ebx_2 + 4))
    *(ebx_2 + 4) = *ebx_2
    int32_t* esi_2 = result + (esi_1 << 2)
    void* eax_10 = *esi_2
    int32_t* var_c8_1 = esi_2
    int32_t eax_11
    int32_t edx_2
    edx_2:eax_11 = muls.dp.d(0x4fba3d0b, *(eax_10 + 0xa8) - *(eax_10 + 0xa4))
    int32_t ecx_3 = 0
    int32_t edx_3 = edx_2 s>> 0xb
    int32_t var_ac_1 = 0
    int32_t eax_14 = (edx_3 u>> 0x1f) + edx_3
    
    if (eax_14 s> 0)
        int32_t edx_4 = 0
        int32_t var_b8_1 = 0
        
        do
            void* ebx_3 = *(*esi_2 + 0xa4)
            void* eax_15
            eax_15.b = *(ebx_3 + edx_4 + 0x1d6)
            void* ebx_4 = ebx_3 + edx_4
            
            if (eax_15.b != 0)
                int32_t eax_16
                int32_t edx_5
                edx_5:eax_16 = muls.dp.d(0x66666667, *(ebx_2 + 4) - *ebx_2)
                int32_t edx_6 = edx_5 s>> 4
                int32_t esi_5 = (edx_6 u>> 0x1f) + edx_6
                sub_592310(ebx_2, esi_5 + 1)
                int32_t* esi_6 = *ebx_2 + esi_5 * 0x28
                *esi_6 = var_ac_1
                esi_6[1] = *(ebx_4 + 0x12c)
                esi_6[2] = *(ebx_4 + 0x128)
                int32_t eax_21
                eax_21.b = *(ebx_4 + 0x1d6)
                esi_6[3].b = eax_21.b
                int16_t var_44
                int16_t* eax_22 = sub_5d8dd0(ebx_4, &var_44)
                var_8_1.b = 1
                
                if (&esi_6[4] != eax_22)
                    sub_52e3c0(&esi_6[4], eax_22, 0, 0xffffffff)
                
                var_8_1.b = 0
                int32_t var_30
                
                if (var_30 u>= 8)
                    j__free(var_44.d)
                
                ecx_3 = var_ac_1
                edx_4 = var_b8_1
                esi_2 = var_c8_1
                var_30 = 7
                int32_t var_34_1 = 0
                var_44 = 0
            
            ecx_3 += 1
            edx_4 += 0x19b0
            var_ac_1 = ecx_3
            var_b8_1 = edx_4
        while (ecx_3 s< eax_14)
        
        ebx_2 = var_bc_1
    
    int32_t edx_8
    int32_t edx_10
    
    if (*(arg1 + *(arg1 + 0x7cc) + 0x7d0) == 0)
        int32_t eax_25
        int32_t edx_7
        edx_7:eax_25 = muls.dp.d(0x66666667, *(arg1 + eax_7 + 0x7b8) - *(arg1 + eax_7 + 0x7b4))
        edx_8 = edx_7 s>> 4
        int32_t eax_26
        int32_t edx_9
        edx_9:eax_26 = muls.dp.d(0x66666667, *(ebx_2 + 4) - *ebx_2)
        edx_10 = edx_9 s>> 4
    
    void* esi_10
    
    if (*(arg1 + *(arg1 + 0x7cc) + 0x7d0) == 0
            && (edx_10 u>> 0x1f) + edx_10 == (edx_8 u>> 0x1f) + edx_8)
        esi_10 = var_bc_1
    else
        esi_10 = var_bc_1
        int32_t eax_30
        int32_t edx_11
        edx_11:eax_30 = muls.dp.d(0x66666667, *(esi_10 + 4) - *esi_10)
        int32_t edx_12 = edx_11 s>> 4
        int32_t edx_13 = *(data_bac4e0 + 0x30)
        
        if (edx_13 != 0)
            edx_13(*(var_b4_1 * 0x334 + arg1 + 0x150), (edx_12 u>> 0x1f) + edx_12, eax_2)
    
    int32_t i = 0
    int32_t eax_33
    int32_t edx_14
    edx_14:eax_33 = muls.dp.d(0x66666667, *(esi_10 + 4) - *esi_10)
    int32_t i_1 = 0
    int32_t edx_15 = edx_14 s>> 4
    
    if ((edx_15 u>> 0x1f) + edx_15 s> 0)
        void* var_b8_2 = nullptr
        int32_t edx_27
        
        do
            int32_t edx_17
            
            if (*(arg1 + *(arg1 + 0x7cc) + 0x7d0) == 0)
                int32_t eax_38
                int32_t edx_16
                edx_16:eax_38 =
                    muls.dp.d(0x66666667, *(arg1 + eax_7 + 0x7b8) - *(arg1 + eax_7 + 0x7b4))
                edx_17 = edx_16 s>> 4
            
            int32_t eax_41
            
            if (*(arg1 + *(arg1 + 0x7cc) + 0x7d0) != 0 || i s>= (edx_17 u>> 0x1f) + edx_17)
                eax_41.b = 1
            else
                eax_41.b = 0
            
            void* ecx_24 = var_b8_2
            int32_t* esi_12 = *esi_10 + ecx_24
            char var_a5_1 = eax_41.b
            void* ebx_5
            
            if (eax_41.b == 0)
                ebx_5 = *(arg1 + eax_7 + 0x7b4) + ecx_24
                
                if (*esi_12 != *ebx_5)
                    goto label_591d70
                
                if (esi_12[1] != *(ebx_5 + 4))
                label_591df6:
                    esi_12[1]
                    void* var_e0_10 = ecx_24
                    int16_t var_74
                    int16_t* eax_46 = sub_6ad9b0(&var_74)
                    int16_t* var_b0_2 = eax_46
                    var_8_1.b = 3
                    ecx_24 = data_bac4e0
                    int32_t edx_21 = *(ecx_24 + 0x34)
                    
                    if (edx_21 != 0)
                        ecx_24 = edx_21(*(var_b4_1 * 0x334 + arg1 + 0x150), i_1, 1, eax_46, eax_2)
                    
                    var_8_1.b = 0
                    int32_t var_60
                    
                    if (var_60 u>= 8)
                        ecx_24 = j__free(var_74.d)
                    
                    var_60 = 7
                    int32_t var_64_1 = 0
                    var_74 = 0
                    
                    if (var_a5_1 != 0 || esi_12[2] != *(ebx_5 + 8))
                        goto label_591e74
                    
                    goto label_591eea
            else
                ebx_5 = nullptr
            label_591d70:
                *esi_12
                void* var_e0_7 = ecx_24
                int16_t var_8c
                int16_t* eax_44 = sub_6ad9b0(&var_8c)
                int16_t* var_b0_1 = eax_44
                var_8_1.b = 2
                ecx_24 = data_bac4e0
                int32_t edx_19 = *(ecx_24 + 0x34)
                
                if (edx_19 != 0)
                    ecx_24 = edx_19(*(var_b4_1 * 0x334 + arg1 + 0x150), i_1, 0, eax_44, eax_2)
                
                var_8_1.b = 0
                int32_t var_78
                
                if (var_78 u>= 8)
                    ecx_24 = j__free(var_8c.d)
                
                var_78 = 7
                int32_t var_7c_1 = 0
                var_8c = 0
                
                if (var_a5_1 != 0 || esi_12[1] != *(ebx_5 + 4))
                    goto label_591df6
            
            if (esi_12[2] != *(ebx_5 + 8))
            label_591e74:
                esi_12[2]
                void* var_e0_13 = ecx_24
                int16_t var_5c
                int16_t* eax_48 = sub_6ad9b0(&var_5c)
                int16_t* var_b0_3 = eax_48
                var_8_1.b = 4
                int32_t edx_23 = *(data_bac4e0 + 0x34)
                
                if (edx_23 != 0)
                    edx_23(*(var_b4_1 * 0x334 + arg1 + 0x150), i_1, 2, eax_48, eax_2)
                
                var_8_1.b = 0
                int32_t var_48
                
                if (var_48 u>= 8)
                    j__free(var_5c.d)
                
                var_48 = 7
                int32_t var_4c_1 = 0
                var_5c = 0
                
                if (var_a5_1 != 0)
                    goto label_591eff
                
                goto label_591eea
            
        label_591eea:
            int32_t eax_47
            eax_47.b = esi_12[3].b
            
            if (eax_47.b != *(ebx_5 + 0xc))
            label_591eff:
                void* const edx_24 = &data_aee754
                int32_t var_18_1 = 7
                
                if (esi_12[3].b == 0)
                    edx_24 = &data_ad8cf0
                
                int32_t var_1c_1 = 0
                int32_t eax_49 = 0
                int16_t var_2c = 0
                
                if (*edx_24 != 0)
                    void* const eax_50 = edx_24
                    void* var_b0_4 = eax_50 + 2
                    void* ecx_32
                    
                    do
                        ecx_32.w = *eax_50
                        eax_50 += 2
                    while (ecx_32.w != 0)
                    eax_49 = (eax_50 - var_b0_4) s>> 1
                
                sub_52e720(&var_2c, edx_24, eax_49)
                var_8_1.b = 5
                int32_t ecx_34 = *(data_bac4e0 + 0x34)
                
                if (ecx_34 != 0)
                    ecx_34(*(var_b4_1 * 0x334 + arg1 + 0x150), i_1, 3, &var_2c, eax_2)
                
                var_8_1.b = 0
                
                if (var_18_1 u>= 8)
                    j__free(var_2c.d)
                
                int32_t var_18_2 = 7
                int32_t var_1c_2 = 0
                var_2c = 0
                
                if (var_a5_1 != 0)
                    goto label_591fd5
                
                goto label_591fb6
            
        label_591fb6:
            void* ebx_7 = ebx_5 + 0x10
            
            if (*(ebx_7 + 0x14) u>= 8)
                ebx_7 = *ebx_7
            
            int32_t var_e0_19 = *(ebx_5 + 0x20)
            int32_t i_2
            
            if (sub_536340(&esi_12[4], &esi_12[4], esi_12[8], ebx_7) == 0)
                i_2 = i_1
            else
            label_591fd5:
                i_2 = i_1
                int32_t edx_25 = *(data_bac4e0 + 0x34)
                
                if (edx_25 != 0)
                    edx_25(*(var_b4_1 * 0x334 + arg1 + 0x150), i_2, 4, &esi_12[4], eax_2)
            
            esi_10 = var_bc_1
            var_b8_2 += 0x28
            i = i_2 + 1
            i_1 = i
            int32_t eax_59
            int32_t edx_26
            edx_26:eax_59 = muls.dp.d(0x66666667, *(esi_10 + 4) - *esi_10)
            edx_27 = edx_26 s>> 4
        while (i s< (edx_27 u>> 0x1f) + edx_27)
    
    sub_592170(eax_7 + 0x7b4 + arg1, esi_10)
    *(arg1 + *(arg1 + 0x7cc) + 0x7d0) = 0
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_a4, 0xc, 2, sub_5920b0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
