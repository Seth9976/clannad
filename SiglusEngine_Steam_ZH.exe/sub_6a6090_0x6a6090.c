// 函数: sub_6a6090
// 地址: 0x6a6090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_44 = 0
int32_t var_30 = 7
int32_t var_34 = 0
int32_t* result = sub_52e3c0(&var_44, data_bac510 + 0x12700, 0, 0xffffffff)
int32_t var_8_1 = 0

if (var_34 != 0)
    int16_t var_5c
    sub_60eaf0(&var_5c, &var_44)
    void* var_78 = nullptr
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    var_8_1.b = 2
    struct _EXCEPTION_REGISTRATION_RECORD** eax_5
    int32_t ecx_3
    eax_5, ecx_3 = sub_6b7be0(&var_5c, &var_78)
    void* ebx_1 = var_78
    char* var_a4_1
    int16_t* var_a0_1
    int16_t var_2c
    int32_t var_18
    
    if (eax_5.b != 0)
        void* edi_1 = ebx_1
        
        if (ebx_1 == var_74_1)
            edi_1 = nullptr
        
        if (*(edi_1 + 4) s> 0x100)
            var_18 = 7
            int32_t var_1c_1 = 0
            var_2c = 0
            sub_52e720(&var_2c, 0xaff4cc, 0x19)
            var_8_1.b = 4
            var_a0_1 = &var_2c
            var_a4_1 = 2
            goto label_6a618d
        
        int32_t var_a0_3 = ecx_3
        sub_6a63f0(arg1)
        int32_t var_18_1 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xaff4bc, 7)
        var_8_1.b = 5
        var_8_1.b = 6
        void* var_68
        sub_54d190(&arg1[3], sub_6a1200(&var_68, &var_2c, 0x100, 0x100, 0, 0, 0x15, 1, 0))
        var_8_1.b = 5
        int32_t ecx_11 = sub_54b010(&var_68)
        var_8_1.b = 2
        
        if (var_18_1 u>= 8)
            ecx_11 = j__free(var_2c.d)
        
        int32_t var_a0_6 = 0
        int32_t var_a4_2 = ecx_11
        int32_t var_88
        uint32_t ecx_13 = sub_6f3b20(arg1[3], ecx_11, &var_88)
        int32_t i = 0
        void* edx_4 = edi_1 + 8
        int32_t i_1 = 0
        void* var_7c_1 = edx_4
        
        do
            void* edx_5 = *edx_4
            
            if (edx_5 != 0)
                void* esi_1 = var_78
                void* eax_8 = esi_1
                
                if (esi_1 == var_74_1)
                    eax_8 = nullptr
                
                void* const eax_9 = esi_1
                
                if (esi_1 == var_74_1)
                    eax_9 = nullptr
                
                int32_t ecx_15 = *(edx_5 + eax_8)
                void* eax_11 = eax_9 + 0x40 + edx_5
                void* edx_6 = eax_11
                void* esi_2 = eax_11 + 0x100
                void* edi_2 = eax_11 + 0x200
                int32_t var_84
                void* eax_14 = var_88 * i + var_84
                
                if (ecx_15 == 0)
                    int32_t j_3 = 0x100
                    int32_t j
                    
                    do
                        char ecx_20 = *edx_6
                        edx_6 += 1
                        *(eax_14 + 2) = ecx_20
                        esi_2 += 1
                        edi_2 += 1
                        *(eax_14 + 1) = *(esi_2 - 1)
                        eax_14 += 4
                        ecx_13 = zx.d(*(edi_2 - 1))
                        *(eax_14 - 4) = ecx_13.b
                        *(eax_14 - 1) = 0xff
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    i = i_1
                    *(*arg1 + (i << 3) + 4) = 1
                else
                    ecx_13 = ecx_15 - 1
                    
                    if (ecx_15 == 1)
                        int32_t j_2 = 0x100
                        int32_t j_1
                        
                        do
                            char ecx_17 = *edx_6
                            edx_6 += 1
                            *(eax_14 + 2) = ecx_17
                            esi_2 += 1
                            edi_2 += 1
                            *(eax_14 + 1) = *(esi_2 - 1)
                            eax_14 += 4
                            *(eax_14 - 4) = *(edi_2 - 1)
                            *(eax_14 - 1) = 0xff
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                        i = i_1
                        ecx_13 = *arg1
                        *(ecx_13 + (i << 3)) = *(eax_11 + 0x300)
                        *(*arg1 + (i << 3) + 4) = 1
            
            i += 1
            edx_4 = var_7c_1 + 4
            i_1 = i
            var_7c_1 = edx_4
        while (i s< 0x100)
        
        uint32_t var_a0_7 = ecx_13
        sub_6f3c40(arg1[3])
        ebx_1 = var_78
    else
        var_a0_1 = sub_532b80(eax_5, &var_44, &var_2c, &data_af1a9c)
        var_8_1.b = 3
        var_a4_1 = 9
    label_6a618d:
        sub_684160(data_bac424, var_a4_1, var_a0_1)
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
    
    if (ebx_1 != 0)
        j__free(ebx_1)
    
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    result = nullptr
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0

if (var_30 u>= 8)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
