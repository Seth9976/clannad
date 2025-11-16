// 函数: sub_673c10
// 地址: 0x673c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6ab1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_124 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_4 = data_bac500 - 1
int32_t* eax_4 = *data_4ebe31c

if (i_4 s> 0)
    int32_t i
    
    do
        eax_4 = *eax_4
        i = i_4
        i_4 -= 1
    while (i != 1)

void* edi = &eax_4[2]
void* ecx_1 = &eax_4[0x22]
void* var_b4 = edi
void* var_a8 = ecx_1
int32_t* result

if (*data_bac458 == 1)
    void* esi_1 = data_bac45c
    void* ebx_1 = &eax_4[0x25]
    
    do
        *(esi_1 + 0x60) += 1
        void* eax_5
        eax_5.b = *(*(esi_1 + 0x60) - 1)
        int32_t i_8
        int32_t* edx
        
        if (eax_5.b == 2)
            *(esi_1 + 0x60) += 4
            int32_t eax_7 = *(*(esi_1 + 0x60) - 4)
            
            if (eax_7 == 0xa)
                *(esi_1 + 0x60) += 4
                void* edx_1 = data_bac49c
                int32_t ecx_2 = *(edx_1 + 4)
                i_8 = *(*(esi_1 + 0x60) - 4)
                int32_t eax_10 = *(edx_1 + 8)
                
                if (ecx_2 u>= eax_10)
                    do
                        eax_10 += 0x400
                    while (ecx_2 u>= eax_10)
                    
                    *(edx_1 + 8) = eax_10
                    int32_t eax_14 =
                        HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *data_bac49c, eax_10 << 2)
                    esi_1 = data_bac45c
                    *data_bac49c = eax_14
                
                edx = data_bac49c
                *(*edx + (edx[1] << 2)) = i_8
                edx[1] += 1
                edi = var_b4
                ecx_1 = var_a8
            else if (eax_7 == 0x14)
                int16_t var_2c
                int32_t* eax_16 = sub_673b40(&var_2c)
                int32_t var_8_1 = 0
                sub_60c680(data_bac49c + 0xc, eax_16)
                int32_t var_8_2 = 0xffffffff
                int32_t var_18
                
                if (var_18 u>= 8)
                    j__free(var_2c.d)
                
                var_18 = 7
                int32_t var_1c_1 = 0
                var_2c = 0
                esi_1 = data_bac45c
                ecx_1 = var_a8
        else
            int32_t* eax_20
            
            if (eax_5.b == 5)
                int32_t* edx_2 = data_bac49c
                void* esi_2 = edi
                int32_t i_10 = edx_2[1] - *(edx_2[7] - 4)
                edx_2[7] -= 4
                int32_t* ecx_9 = *edx_2 + ((edx_2[1] - i_10) << 2)
                
                if (i_10 s> 0)
                    int32_t i_6 = i_10
                    int32_t i_1
                    
                    do
                        esi_2 += 4
                        *(esi_2 - 4) = *ecx_9
                        ecx_9 = &ecx_9[1]
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
                    edi = var_b4
                
                *(edi + 0x7c) = i_10
                edx_2[1] -= i_10
                int128_t var_114
                eax_20 = &var_114
                __builtin_memset(&var_114, 0, 0x18)
                char var_fc_1 = 1
            label_673df7:
                int32_t eax_21 = *(edi + 0x7c)
                sub_54b210(eax_21, edi + (eax_21 << 2), edi, eax_20)
                ebx_1 = &eax_4[0x25]
                esi_1 = data_bac45c
                ecx_1 = var_a8
            else if (eax_5.b == 0x22)
                *(esi_1 + 0x60) += 4
                int32_t ecx_11 = *(*(esi_1 + 0x60) - 4)
                *(esi_1 + 0x60) += 4
                int32_t edx_4 = *(*(esi_1 + 0x60) - 4)
                *(esi_1 + 0x60) += 1
                uint32_t eax_25 = zx.d(*(*(esi_1 + 0x60) - 1))
                sub_6744e0(eax_25, edx_4, ecx_11, eax_25.b)
                esi_1 = data_bac45c
                ecx_1 = var_a8
            else if (eax_5.b == 8)
                void* edx_5 = data_bac49c
                i_8 = *(edx_5 + 4)
                sub_59a180(edx_5 + 0x18, &i_8)
                esi_1 = data_bac45c
                ecx_1 = var_a8
            else if (eax_5.b == 0x20)
                *(esi_1 + 0x60) += 4
                *(esi_1 + 0x60) += 4
                int32_t edx_6 = *(*(esi_1 + 0x60) - 4)
                *(esi_1 + 0x60) += 4
                int32_t eax_29 = *(*(esi_1 + 0x60) - 4)
                sub_677ed0(ebx_1, edx_6)
                int32_t* edx_7 = data_bac49c
                int32_t i_5 = edx_7[1] - *(edx_7[7] - 4)
                edx_7[7] -= 4
                int32_t eax_31 = *edx_7
                int32_t ecx_15 = edx_7[1] - i_5
                i_8 = i_5
                void* edx_8 = edi
                int32_t* ecx_16 = eax_31 + (ecx_15 << 2)
                
                if (i_5 s> 0)
                    int32_t i_2
                    
                    do
                        edx_8 += 4
                        *(edx_8 - 4) = *ecx_16
                        ecx_16 = &ecx_16[1]
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                    i_5 = i_8
                
                void* eax_33 = data_bac49c
                *(edi + 0x7c) = i_5
                char var_c4_1 = 1
                int32_t var_d0_1 = 0
                *(eax_33 + 4) -= i_5
                int32_t ecx_17 = *(ebx_1 + 0xa4)
                int32_t var_cc_1 = 0
                
                if (ecx_17 == *(ebx_1 + 0xa8))
                    ecx_17 = 0
                
                int32_t eax_34 = *(ebx_1 + 0xa4)
                int32_t var_c8_1 = 0
                
                if (eax_34 == *(ebx_1 + 0xa8))
                    eax_34 = 0
                
                int32_t var_d8_1 = eax_34
                int32_t var_d4_1 = ecx_17 + 0x164
                int32_t var_dc = eax_29
                int32_t eax_36 = *(edi + 0x7c)
                sub_54b210(eax_36, edi + (eax_36 << 2), edi, &var_dc)
                esi_1 = data_bac45c
                ecx_1 = var_a8
            else if (eax_5.b != 1)
                if (eax_5.b == 0x30)
                    *(esi_1 + 0x60) += 4
                    int32_t eax_39 = *(*(esi_1 + 0x60) - 4)
                    int32_t i_11 = sub_677fa0(ebx_1, ecx_1)
                    i_8 = i_11
                    sub_677d60(edi)
                    void* edx_12 = data_bac45c
                    *(edx_12 + 0x60) += 4
                    int32_t i_9 = *(*(edx_12 + 0x60) - 4)
                    
                    if (i_9 s> 0)
                        int32_t* esi_5 = i_11 * 0x164
                        int32_t i_7 = i_9
                        int32_t i_3
                        
                        do
                            *(edx_12 + 0x60) += 4
                            esi_5 = &esi_5[-0x59]
                            *(esi_5 + *(ebx_1 + 0xa4)) = *(*(edx_12 + 0x60) - 4)
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                        edi = var_b4
                    
                    *(edx_12 + 0x60) += 4
                    int32_t edx_13 = *(ebx_1 + 0xa4)
                    int32_t ecx_27 = *(ebx_1 + 0xa4)
                    int32_t var_e4_1 = 0
                    
                    if (edx_13 == *(ebx_1 + 0xa8))
                        edx_13 = 0
                    
                    char var_e0_1 = 1
                    int32_t var_e8_1 = *(*(edx_12 + 0x60) - 4)
                    
                    if (ecx_27 == *(ebx_1 + 0xa8))
                        ecx_27 = 0
                    
                    int32_t eax_43 = *(ebx_1 + 0xa4)
                    
                    if (eax_43 == *(ebx_1 + 0xa8))
                        eax_43 = 0
                    
                    int32_t var_f4_1 = eax_43
                    int32_t eax_46 = (i_8 - i_9) * 0x164
                    int32_t var_f8 = eax_39
                    int32_t var_f0_1 = eax_46 + ecx_27
                    int32_t var_ec_1 = i_8 * 0x164 + edx_13
                    eax_20 = &var_f8
                    goto label_673df7
                
                uint32_t eax_50 = zx.d(eax_5.b)
                
                if (eax_50 u<= 0x32)
                    uint32_t eax_51 = zx.d(lookup_table_674460[eax_50])
                    void var_13c
                    int16_t* ecx_53
                    
                    switch (eax_51)
                        case 0
                            void* var_128_16 = 0x10
                            int32_t var_30_1 = 7
                            void* const var_12c_2 = &data_af94ec
                            int32_t var_34_1 = 0
                            int16_t var_44 = 0
                            sub_52e720(&var_44, var_12c_2, var_128_16)
                            int32_t var_8_9 = 5
                            sub_684160(data_bac424, 2, &var_44)
                            ecx_53 = &var_44
                        label_6743e8:
                            int32_t var_8_11 = 0xffffffff
                            sub_52e8a0(ecx_53)
                            sub_676610(0)
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 1
                            *(esi_1 + 0x60) += 4
                            int32_t eax_58 = *(*(esi_1 + 0x60) - 4)
                            
                            if (eax_58 == 0xa)
                                void* eax_59 = data_bac49c
                                *(eax_59 + 4) -= 1
                            else if (eax_58 == 0x14)
                                void var_a4
                                sub_677c10(&var_a4)
                                sub_52e8a0(&var_a4)
                                esi_1 = data_bac45c
                                ecx_1 = var_a8
                        case 2
                            *(esi_1 + 0x60) += 4
                            int32_t eax_61 = *(*(esi_1 + 0x60) - 4)
                            
                            if (eax_61 == 0xa)
                                int32_t* edx_17 = data_bac49c
                                sub_677bb0(*(*edx_17 + (edx_17[1] << 2) - 4))
                                esi_1 = data_bac45c
                                ecx_1 = var_a8
                            else if (eax_61 == 0x14)
                                void var_8c
                                int16_t* eax_62 = sub_677c90(&var_8c)
                                int32_t var_8_3 = 1
                                sub_60c680(data_bac49c + 0xc, eax_62)
                                int32_t var_8_4 = 0xffffffff
                                sub_52e8a0(&var_8c)
                                esi_1 = data_bac45c
                                ecx_1 = var_a8
                        case 3
                            sub_677dc0()
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 4
                            *(esi_1 + 0x60) += 4
                            int32_t* ecx_43 = *(*(esi_1 + 0x60) - 4)
                            *(esi_1 + 0x60) += 4
                            int32_t eax_66 = *(*(esi_1 + 0x60) - 4)
                            int32_t eax_67 = 0
                            
                            if (ecx_43 == 0xb || ecx_43 == 0x15)
                                int32_t* edx_18 = data_bac49c
                                edx_18[1] -= 1
                                eax_67 = *(*edx_18 + (edx_18[1] << 2))
                            
                            sub_675470(eax_67, eax_66, ecx_43, eax_67)
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 5
                            sub_675700()
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 6
                            *(esi_1 + 0x60) += 4
                            sub_698200(*(*(esi_1 + 0x60) - 4))
                            ecx_1 = var_a8
                        case 7
                            edx = data_bac49c
                            edx[1] -= 1
                            int32_t eax_56 = *(*edx + (edx[1] << 2))
                            *(esi_1 + 0x60) += 4
                            
                            if (eax_56 != 0)
                                sub_698200(*(*(esi_1 + 0x60) - 4))
                            
                            ecx_1 = var_a8
                        case 8
                            edx = data_bac49c
                            edx[1] -= 1
                            int32_t eax_54 = *(*edx + (edx[1] << 2))
                            *(esi_1 + 0x60) += 4
                            
                            if (eax_54 == 0)
                                sub_698200(*(*(esi_1 + 0x60) - 4))
                            
                            ecx_1 = var_a8
                        case 9
                            sub_674be0(eax_51, ecx_1, ebx_1, 0xa)
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 0xa
                            sub_674be0(eax_51, ecx_1, ebx_1, 0x14)
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 0xb
                            result, edx = sub_674ff0(ebx_1)
                            
                            if (result.b == 0)
                                break
                            
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 0xc
                            void* var_128_18 = 0xf
                            int32_t var_48_1 = 7
                            void* const var_12c_4 = &data_af9510
                            int32_t var_4c_1 = 0
                            int16_t var_5c = 0
                            sub_52e720(&var_5c, var_12c_4, var_128_18)
                            int32_t var_8_10 = 6
                            sub_684160(data_bac424, 2, &var_5c)
                            ecx_53 = &var_5c
                            goto label_6743e8
                        case 0xd
                            *(esi_1 + 0x60) += 4
                            int32_t ecx_44 = *(*(esi_1 + 0x60) - 4)
                            *(esi_1 + 0x60) += 1
                            edx.b = *(*(esi_1 + 0x60) - 1)
                            sub_6744a0(ecx_44, edx.b)
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 0xe
                            *(esi_1 + 0x60) += 4
                            int32_t esi_8 = *(esi_1 + 0x64)
                            int32_t edi_2 = *(*(esi_1 + 0x60) - 4)
                            void var_74
                            sub_677c10(&var_74)
                            int32_t var_8_7 = 3
                            void* var_b0_4 = &var_13c
                            sub_536170(&var_13c, &var_74)
                            var_8_7.b = 4
                            void* eax_73 = sub_64da40()
                            var_8_7.b = 3
                            sub_64e3e0(eax_73, esi_8, eax_73, edi_2, 1, var_13c)
                            int32_t var_8_8 = 0xffffffff
                            sub_52e8a0(&var_74)
                            edi = var_b4
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
                        case 0xf
                            void* var_b0_3 = &var_13c
                            sub_677c10(&var_13c)
                            int32_t var_8_5 = 2
                            void* eax_71
                            int32_t edx_20
                            eax_71, edx_20 = sub_64da40()
                            int32_t var_8_6 = 0xffffffff
                            sub_64e060(eax_71, edx_20, eax_71, var_13c)
                            esi_1 = data_bac45c
                            ecx_1 = var_a8
            else
                *(esi_1 + 0x60) += 4
                edx = *(esi_1 + 0x68)
                int32_t ecx_19 = *(*(esi_1 + 0x60) - 4)
                result = data_bac4a0
                *(esi_1 + 0x68) = ecx_19
                
                if (*(result + 0x1e9) != 0 && *(result + 0x1ea) != 0 && ecx_19 != edx)
                    *(result + 0x1ea) = 0
                    result[0x66].b = 0
                    break
                
                ecx_1 = var_a8
    while (*data_bac458 == 1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
