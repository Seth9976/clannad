// 函数: sub_5de7a0
// 地址: 0x5de7a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc64a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_7b8 = edi

if (*(edi + 0x15c) != 0)
    int16_t var_2c
    
    if (*(edi + 0x1a6) == 0)
        int32_t esi_1 = *(edi + 0x180)
        int32_t ebx_1 = *(edi + 0x184)
        int32_t ecx_2 = *(edi + 0xe0)
        int32_t edx_1 = *(edi + 0xe4)
        void* ebx_4
        
        if (*(data_bac510 + 0x10bd8) != 1)
            if (ebx_1 == edx_1)
                int32_t eax_37 = *(edi + 0x108)
                int32_t ecx_28 = ecx_2 - esi_1
                int32_t eax_38 = eax_37 * *(edi + 0x15c)
                int32_t edx_11
                int32_t temp0_2 = divs.dp.d(sx.q(ecx_28 - eax_38), edx_11 + 1)
                int32_t var_7ac_3 = temp0_2
                int32_t ecx_33 = neg.d(*(edi + 0x10c) + eax_37) + ebx_1
                int32_t var_7a4_2 = temp0_2 + esi_1
                
                if (var_7ac_3 s< 0)
                    int32_t eax_45
                    int32_t edx_14
                    edx_14:eax_45 = sx.q(eax_38)
                    var_7ac_3 = 0
                    int32_t eax_48
                    int32_t edx_15
                    edx_15:eax_48 = sx.q(ecx_28)
                    int32_t ebx_9 = ((eax_48 - edx_15) s>> 1) - ((eax_45 - edx_14) s>> 1)
                    int32_t ebx_10 = ebx_9 + esi_1
                    
                    if (ebx_9 + esi_1 s< 0)
                        ebx_10 = esi_1
                    
                    var_7a4_2 = ebx_10
                    
                    if (ebx_10 + eax_38 s>= *(edi + 0x12c) + *(edi + 0x18))
                        var_7a4_2 = ecx_28 - eax_38 + esi_1
                
                ebx_4 = edi + 0x134
                sub_5329d0(ebx_4, 0xaf2fb4)
                void* eax_51 = edi + 0x14c
                void* esi_7
                
                if (*(edi + 0x160) u< 8)
                    esi_7 = eax_51
                else
                    esi_7 = *eax_51
                
                while (true)
                    void* ecx_41
                    
                    if (*(eax_51 + 0x14) u< 8)
                        ecx_41 = eax_51
                    else
                        ecx_41 = *eax_51
                    
                    if (esi_7 == ecx_41 + (*(eax_51 + 0x10) << 1))
                        break
                    
                    int16_t ebx_14 = *esi_7
                    int32_t var_3e4
                    sub_5db1c0(&var_3e4)
                    int32_t var_8_7 = 6
                    int32_t eax_54 = data_b9c398
                    
                    if ((eax_54.b & 1) == 0)
                        data_b9c398 = eax_54 | 1
                        sub_6ad730()
                    
                    int32_t eax_60
                    
                    if (*(zx.d(ebx_14) + 0xb9c3a0) != 1)
                        eax_60 = 0
                    else
                        int32_t eax_58
                        int32_t edx_17
                        edx_17:eax_58 = sx.q(eax_37)
                        eax_60 = (eax_58 + (edx_17 & 3)) s>> 2
                    
                    int32_t ebx_15 = *(edi + 0xfc)
                    
                    if (ebx_15 == 0xffffffff)
                        ebx_15 = *(edi + 0x164)
                        
                        if (ebx_15 == 0xffffffff)
                            ebx_15 = *(edi + 0x24)
                    
                    int32_t edx_19 = *(edi + 0x100)
                    
                    if (edx_19 == 0xffffffff)
                        edx_19 = *(edi + 0x168)
                        
                        if (edx_19 == 0xffffffff)
                            edx_19 = *(edi + 0x28)
                    
                    int32_t ecx_43 = *(edi + 0x104)
                    
                    if (ecx_43 == 0xffffffff)
                        ecx_43 = *(edi + 0x16c)
                        
                        if (ecx_43 == 0xffffffff)
                            ecx_43 = *(edi + 0x2c)
                    
                    int32_t var_3dc_1 = eax_37
                    uint32_t var_3e0_1 = zx.d(ebx_14)
                    edi = var_7b8
                    int32_t var_3cc_1 = eax_60 + var_7a4_2
                    int32_t var_3c8_1 = ecx_33
                    int32_t var_3d0_1 = ecx_43
                    var_3e4 = 0
                    int32_t var_3d8_1 = ebx_15
                    int32_t var_3d4_1 = edx_19
                    char var_3c3_1 = 1
                    sub_5b4a00(edi + 0x1ac, &var_3e4)
                    ebx_4 = edi + 0x134
                    sub_5df3d0(ebx_4, ebx_14)
                    var_7a4_2 += var_7ac_3 + eax_37
                    int32_t var_8_8 = 8
                    void var_160
                    sub_6efc80(&var_160)
                    var_8_8.b = 7
                    void var_290
                    sub_6efc80(&var_290)
                    int32_t var_8_9 = 0xffffffff
                    void var_3c0
                    sub_6efc80(&var_3c0)
                    esi_7 += 2
                    eax_51 = edi + 0x14c
                
                sub_532910(ebx_4, 0xad9098, 2)
            else
                int32_t var_18_3 = 7
                int32_t var_1c_3 = 0
                var_2c = 0
                sub_52e720(&var_2c, 0xaf2f7c, 0x1a)
                int32_t var_8_6 = 5
                sub_684160(data_bac424, 3, &var_2c)
                sub_52e8a0(&var_2c)
        else if (esi_1 == ecx_2)
            int32_t eax_5 = *(edi + 0x108)
            int32_t edx_2 = edx_1 - ebx_1
            int32_t ecx_6 = *(edi + 0x15c)
            int32_t eax_6 = eax_5 * ecx_6
            int32_t temp0_1 = divs.dp.d(sx.q(edx_2 - eax_6), ecx_6 + 1)
            int32_t var_7b0_1 = temp0_1
            int32_t var_7a4_1 = temp0_1 + ebx_1
            int32_t eax_12 = *(edi + 0x10c) + eax_5 + esi_1
            
            if (var_7b0_1 s< 0)
                var_7b0_1 = 0
                int32_t eax_14
                int32_t edx_5
                edx_5:eax_14 = sx.q(eax_5)
                int32_t eax_17
                int32_t edx_6
                edx_6:eax_17 = sx.q(edx_2)
                int32_t esi_4 = ((eax_17 - edx_6) s>> 1) - ((eax_14 - edx_5) s>> 1)
                int32_t esi_5 = esi_4 + ebx_1
                
                if (esi_4 + ebx_1 s< 0)
                    esi_5 = ebx_1
                
                var_7a4_1 = esi_5
                
                if (esi_5 + eax_6 s>= *(edi + 0x130) + *(edi + 0x18))
                    var_7a4_1 = ebx_1 - eax_6 + edx_2
            
            ebx_4 = edi + 0x134
            sub_5329d0(ebx_4, 0xaf2fb4)
            void* eax_20 = edi + 0x14c
            void* esi_6
            
            if (*(edi + 0x160) u< 8)
                esi_6 = eax_20
            else
                esi_6 = *eax_20
            
            while (true)
                void* ecx_17
                
                if (*(eax_20 + 0x14) u< 8)
                    ecx_17 = eax_20
                else
                    ecx_17 = *eax_20
                
                if (esi_6 == ecx_17 + (*(eax_20 + 0x10) << 1))
                    break
                
                int16_t ebx_5 = *esi_6
                int32_t var_79c
                sub_5db1c0(&var_79c)
                int32_t var_8_3 = 2
                int32_t eax_23 = data_b9c398
                
                if ((eax_23.b & 1) == 0)
                    data_b9c398 = eax_23 | 1
                    sub_6ad730()
                
                int32_t eax_29
                
                if (*(zx.d(ebx_5) + 0xb9c3a0) != 1)
                    eax_29 = 0
                else
                    int32_t eax_27
                    int32_t edx_8
                    edx_8:eax_27 = sx.q(eax_5)
                    eax_29 = (eax_27 + (edx_8 & 3)) s>> 2
                
                int32_t ebx_6 = *(edi + 0xfc)
                
                if (ebx_6 == 0xffffffff)
                    ebx_6 = *(edi + 0x164)
                    
                    if (ebx_6 == 0xffffffff)
                        ebx_6 = *(edi + 0x24)
                
                int32_t edx_10 = *(edi + 0x100)
                
                if (edx_10 == 0xffffffff)
                    edx_10 = *(edi + 0x168)
                    
                    if (edx_10 == 0xffffffff)
                        edx_10 = *(edi + 0x28)
                
                int32_t ecx_19 = *(edi + 0x104)
                
                if (ecx_19 == 0xffffffff)
                    ecx_19 = *(edi + 0x16c)
                    
                    if (ecx_19 == 0xffffffff)
                        ecx_19 = *(edi + 0x2c)
                
                int32_t var_794_1 = eax_5
                uint32_t var_798_1 = zx.d(ebx_5)
                edi = var_7b8
                int32_t var_784_1 = eax_12
                int32_t var_780_1 = eax_29 + var_7a4_1
                int32_t var_788_1 = ecx_19
                var_79c = 0
                int32_t var_790_1 = ebx_6
                int32_t var_78c_1 = edx_10
                char var_77b_1 = 1
                sub_5b4a00(edi + 0x1ac, &var_79c)
                ebx_4 = edi + 0x134
                sub_5df3d0(ebx_4, ebx_5)
                var_7a4_1 += var_7b0_1 + eax_5
                int32_t var_8_4 = 4
                void var_518
                sub_6efc80(&var_518)
                var_8_4.b = 3
                void var_648
                sub_6efc80(&var_648)
                int32_t var_8_5 = 0xffffffff
                void var_778
                sub_6efc80(&var_778)
                esi_6 += 2
                eax_20 = edi + 0x14c
            
            sub_532910(ebx_4, 0xad9098, 2)
        else
            int32_t var_18_2 = 7
            int32_t var_1c_2 = 0
            var_2c = 0
            sub_52e720(&var_2c, 0xaf2f7c, 0x1a)
            int32_t var_8_2 = 1
            sub_684160(data_bac424, 3, &var_2c)
            sub_52e8a0(&var_2c)
    else
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xaf2f5c, 0xe)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 3, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)

bool cond:0 = *(edi + 0x160) u< 8
void* result = edi + 0x14c
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
*(edi + 0x180) = 0
*(edi + 0x184) = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
