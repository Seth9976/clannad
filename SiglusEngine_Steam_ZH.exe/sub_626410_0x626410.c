// 函数: sub_626410
// 地址: 0x626410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfff6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* var_d8 = ebx
int32_t (__fastcall* var_f8)(int32_t* arg1) = sub_538150
void var_d4
sub_74675f(&var_d4, 0x20, 6, sub_626840)
int32_t var_8_1 = 0
int32_t var_c8 = data_4ebe2ac
int32_t var_a8 = data_4ebe2b4
int32_t var_88 = data_4ebe2bc
int32_t var_68 = data_4ebe2c4
int32_t var_48 = data_4ebe2cc
int32_t var_28 = data_4ebe2e4
uint32_t ecx = ((arg1[1] - *arg1) s>> 2) * 0x70
int32_t var_94
int32_t var_8c
int32_t eax_13 = var_8c - var_94
int32_t var_bc = 0x44
int32_t var_b8 = 0x14
int32_t var_9c = 0x42
int32_t var_98 = 0x10
int32_t var_7c = 0x144
int32_t var_78 = 0x1c
int32_t var_5c = 0x244
int32_t var_58 = 0x24
int32_t var_3c = 0x152
int32_t var_38 = 0x24
int32_t var_1c = 0x244
int32_t var_18 = 0x24

if (eax_13 u< ecx)
    if (ecx u> 0xffffffff)
        sub_743191("vector<T> too long")
        noreturn
    
    sub_597890(&var_94, ecx)

int32_t var_c4

for (void** i = *arg1; i != arg1[1]; i = &i[1])
    void* eax_15 = *i
    
    if (eax_15 != 0)
        ecx.b = *(eax_15 + 4)
        
        if (ecx.b != 0)
            void* edx
            
            if (*(eax_15 + 5) != 0)
                edx = *(eax_15 + 0xa4)
            
            int32_t ebx_1
            
            if (*(eax_15 + 5) != 0 && edx != 0 && *(edx + 8) == 0x44)
                ebx_1 = 0
            label_626657:
                int32_t ebx_2 = ebx_1 << 5
                void* edi_1 = &var_d4 + ebx_2
                sub_5979b0(edi_1, ((&var_c4)[ebx_1 * 8] + 4) * (&var_b8)[ebx_1 * 8])
                int32_t eax_19 = *edi_1
                int32_t var_f8_3 = 0
                int32_t var_fc_1 = 0
                
                if (eax_19 == *(edi_1 + 4))
                    eax_19 = 0
                
                int32_t var_100_1 = eax_19
                void var_c0
                char eax_20
                eax_20, ecx = sub_6f01c0(*i, (&var_c4)[ebx_1 * 8], 0f, *(&var_c0 + ebx_2))
                
                if (eax_20 != 0)
                    sub_530ba0(var_d8, i)
                    (&var_c4)[ebx_1 * 8] += 4
                    *(&var_c0 + ebx_2) += 6
                
                ebx = var_d8
            else if (ecx.b != 0)
                void* edx_1
                
                if (*(eax_15 + 6) != 0)
                    edx_1 = *(eax_15 + 0xa4)
                
                if (*(eax_15 + 6) != 0 && edx_1 != 0 && *(edx_1 + 8) == 0x42)
                    ebx_1 = 1
                    goto label_626657
                
                if (ecx.b != 0)
                    void* edx_2
                    
                    if (*(eax_15 + 5) != 0)
                        edx_2 = *(eax_15 + 0xa4)
                    
                    if (*(eax_15 + 5) != 0 && edx_2 != 0 && *(edx_2 + 8) == 0x144)
                        ebx_1 = 2
                        goto label_626657
                    
                    if (ecx.b != 0)
                        void* edx_3
                        
                        if (*(eax_15 + 5) != 0)
                            edx_3 = *(eax_15 + 0xa4)
                        
                        if (*(eax_15 + 5) != 0 && edx_3 != 0 && *(edx_3 + 8) == 0x244)
                            ebx_1 = 3
                            goto label_626657
                        
                        if (ecx.b != 0)
                            void* edx_4
                            
                            if (*(eax_15 + 6) != 0)
                                edx_4 = *(eax_15 + 0xa4)
                            
                            if (*(eax_15 + 6) != 0 && edx_4 != 0 && *(edx_4 + 8) == 0x152)
                                ebx_1 = 4
                                goto label_626657
                            
                            if (ecx.b != 0)
                                void* edx_5
                                
                                if (*(eax_15 + 5) != 0)
                                    edx_5 = *(eax_15 + 0xa4)
                                
                                if (*(eax_15 + 5) != 0 && edx_5 != 0 && *(edx_5 + 8) == 0x244)
                                    ebx_1 = 5
                                    goto label_626657
                                
                                if (ecx.b != 0 && *(eax_15 + 5) == 0 && *(eax_15 + 6) == 0)
                                    sub_530ba0(ebx, i)

int32_t edi_2 = 0
void* esi_1 = &var_d4

while (true)
    int32_t eax_22 = *(esi_1 + 0x10)
    
    if (eax_22 s> 0)
        int32_t* ecx_5 = *(esi_1 + 0xc)
        
        if (ecx_5 == 0 || ecx_5[1] s< eax_22)
            int32_t var_100_2 = *(esi_1 + 0x1c)
            char eax_23
            eax_23, ecx_5 = sub_6fcf40(ecx_5, eax_22, *(esi_1 + 0x18))
            
            if (eax_23 == 0)
                ebx.b = 0
                break
                break
        
        int32_t* var_f8_5 = ecx_5
        int32_t* var_e0
        int32_t* var_fc_2 = &var_e0
        
        if (sub_6fd020(*(esi_1 + 0xc), ecx_5, *(esi_1 + 0x1c) * *(esi_1 + 0x10)) == 0)
            ebx.b = 0
            break
        
        int32_t* ecx_7 = *esi_1
        
        if (ecx_7 == *(esi_1 + 4))
            ecx_7 = nullptr
        
        sub_748840(var_e0, ecx_7, *(esi_1 + 0x1c) * *(esi_1 + 0x10), eax_2)
        
        if (sub_6fd140(*(esi_1 + 0xc)) == 0)
            ebx.b = 0
            break
    
    edi_2 += 1
    esi_1 += 0x20
    
    if (edi_2 s>= 6)
        int32_t var_a4
        int32_t var_84
        int32_t var_64
        int32_t var_44
        int32_t var_24
        int32_t ecx_15 = var_84 * var_78 + var_a4 * var_98 + var_c4 * var_b8 + var_24 * var_18
            + var_44 * var_38 + var_64 * var_58
        void* eax_40 = data_bac4a0
        
        if (ecx_15 s> *(eax_40 + 0x218))
            *(eax_40 + 0x218) = ecx_15
        
        int32_t ecx_18 = (ebx[1] - *ebx) s>> 2
        
        if (ecx_18 != 0)
            sub_626200(ecx_18)
        
        ebx.b = 1
        break

int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_d4, 0x20, 6, sub_538150)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
