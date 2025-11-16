// 函数: sub_603180
// 地址: 0x603180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bdb7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_68 = arg1
int32_t* ebx = arg2
int32_t* var_9c = ebx

if (arg3 s< arg4)
    result = arg3 * 0x250
    arg4 -= arg3
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    int32_t i
    
    do
        void* edi_2 = *(arg1 + 0xa4) + result
        int32_t var_38_1 = 7
        int32_t var_3c_1 = 0
        int16_t var_4c = 0
        int32_t var_c_1 = 0
        int32_t var_50_1 = 7
        int32_t var_54_1 = 0
        int16_t var_64 = 0
        var_c_1.b = 1
        int32_t var_34
        int16_t* eax_5 = sub_5b0600(ebx, &var_34)
        var_c_1.b = 2
        
        if (&var_4c != eax_5)
            sub_52e3c0(&var_4c, eax_5, 0, 0xffffffff)
        
        var_c_1.b = 1
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34)
        
        int16_t* eax_6 = sub_5b0600(ebx, &var_34)
        var_c_1.b = 3
        
        if (&var_64 != eax_6)
            sub_52e3c0(&var_64, eax_6, 0, 0xffffffff)
        
        if (var_20 u>= 8)
            j__free(var_34)
        
        char* esi_2 = *ebx
        int32_t edx_1 = ebx[1]
        char* ecx_4 = esi_2
        char* var_8c_1 = nullptr
        char* var_94_1 = nullptr
        
        if (esi_2 == edx_1)
            ecx_4 = nullptr
        
        char* var_98_1 = nullptr
        int32_t** eax_7 = ebx[3]
        char* var_a0_1 = nullptr
        int32_t* ecx_5 = *(eax_7 + ecx_4)
        ebx[3] = &eax_7[1]
        char* eax_8 = esi_2
        
        if (esi_2 == edx_1)
            eax_8 = var_8c_1
        
        int32_t eax_9 = *(&eax_7[1] + eax_8)
        ebx[3] = &eax_7[2]
        char* eax_10 = esi_2
        
        if (esi_2 == edx_1)
            eax_10 = var_94_1
        
        int32_t eax_11 = *(&eax_7[2] + eax_10)
        ebx[3] = &eax_7[3]
        char* eax_12 = esi_2
        
        if (esi_2 == edx_1)
            eax_12 = var_98_1
        
        int32_t eax_13 = *(&eax_7[3] + eax_12)
        char* eax_14 = esi_2
        ebx[3] = &eax_7[4]
        
        if (esi_2 == edx_1)
            eax_14 = nullptr
        
        int32_t ebx_1 = *(&eax_7[4] + eax_14)
        var_9c[3] = &eax_7[5]
        char* eax_16 = esi_2
        
        if (esi_2 == edx_1)
            eax_16 = var_a0_1
        
        char* var_a0_2 = nullptr
        int32_t eax_17 = *(&eax_7[5] + eax_16)
        var_9c[3] = &eax_7[6]
        char* eax_19 = esi_2
        
        if (esi_2 == edx_1)
            eax_19 = var_a0_2
        
        char* var_a0_3 = nullptr
        eax_19.b = *(&eax_7[6] + eax_19)
        char var_74_1 = eax_19.b
        var_9c[3] = eax_7 + 0x19
        char* eax_21 = esi_2
        
        if (esi_2 == edx_1)
            eax_21 = var_a0_3
        
        char* var_a0_4 = nullptr
        char eax_22 = *(eax_7 + 0x19 + eax_21)
        var_9c[3] = eax_7 + 0x1a
        char* eax_24 = esi_2
        
        if (esi_2 == edx_1)
            eax_24 = var_a0_4
        
        char* var_a0_5 = nullptr
        char eax_25 = *(eax_7 + 0x1a + eax_24)
        var_9c[3] = eax_7 + 0x1b
        char* eax_27 = esi_2
        
        if (esi_2 == edx_1)
            eax_27 = var_a0_5
        
        if (esi_2 == edx_1)
            esi_2 = nullptr
        
        char eax_28 = *(eax_7 + 0x1b + eax_27)
        var_9c[3] = &eax_7[7]
        edx_1.b = *(esi_2 + &eax_7[7])
        char var_90_1 = edx_1.b
        var_9c[3] = eax_7 + 0x1d
        int32_t esi_3
        
        if (ebx_1 s>= 0)
            esi_3 = ebx_1
            
            if (ebx_1 s> 0xff)
                esi_3 = 0xff
        else
            esi_3 = 0
        
        HANDLE ebx_2 = *(edi_2 + 0xf4)
        void* eax_31 = edi_2 + 0xf4
        HANDLE var_a0_6 = ebx_2
        
        if (ebx_2 != 0)
            WaitForSingleObject(ebx_2, 0xffffffff)
            eax_31 = edi_2 + 0xf4
        
        var_c_1.b = 4
        
        if (esi_3 s< 0)
            esi_3 = 0
        else if (esi_3 s> 0xff)
            esi_3 = 0xff
        
        *(eax_31 + 0x7c) = 0
        
        if (esi_3 s< 0)
            esi_3 = 0
        else if (esi_3 s> 0xff)
            esi_3 = 0xff
        
        *(eax_31 + 0x78) = esi_3
        sub_6df670(eax_31)
        var_c_1.b = 1
        
        if (ebx_2 != 0)
            ReleaseSemaphore(ebx_2, 1, nullptr)
        
        *(edi_2 + 0xe0) = ebx_1
        
        if (var_74_1 != 0 || var_90_1 != 0 || eax_17 s> 0)
            int32_t* esi_4 = var_74_1.d
            char eax_33 = eax_25
            char ecx_17 = eax_28
            int32_t edx_2 = var_90_1.d
            int16_t var_cc
            
            if (var_3c_1 != 0)
                int32_t var_b8_9 = 7
                int32_t var_bc_5 = 0
                var_cc = 0
                sub_52e3c0(&var_cc, &var_4c, 0, 0xffffffff)
                sub_601ff0(edi_2, esi_4, 0, nullptr, eax_11, eax_13, eax_22, eax_25, eax_28, 
                    var_90_1.d, var_cc)
                eax_33 = eax_25
                ecx_17 = eax_28
                edx_2 = var_90_1.d
            
            if (var_54_1 != 0)
                int32_t var_b8_10 = 7
                int32_t var_bc_6 = 0
                var_cc = 0
                sub_52e3c0(&var_cc, &var_64, 0, 0xffffffff)
                sub_602140(edi_2, esi_4, 0, 0, eax_11, eax_13, eax_22, eax_25, eax_28, var_90_1.d, 
                    var_cc)
            else if (ecx_5 s>= 0)
                var_cc.d = eax_11
                sub_602280(edi_2, ecx_5, esi_4, 0, 0, var_cc, eax_13, eax_22, eax_33, ecx_17, 
                    edx_2.b)
            else if (eax_9 s>= 0)
                var_cc.d = eax_11
                sub_602370(edi_2, eax_9, esi_4.b, 0, 0, var_cc, eax_13, eax_22, eax_33, ecx_17, 
                    edx_2)
        
        if (var_50_1 u>= 8)
            j__free(var_64.d)
        
        int32_t var_c_2 = 0xffffffff
        int32_t var_50_2 = 7
        int32_t var_54_2 = 0
        var_64 = 0
        
        if (var_38_1 u>= 8)
            j__free(var_4c.d)
        
        ebx = var_9c
        result = &result_1[0x94]
        i = arg4
        arg4 -= 1
        arg1 = var_68
        result_1 = result
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_a4)
return result
