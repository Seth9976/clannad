// 函数: sub_658280
// 地址: 0x658280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4a08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_bac504
arg1[1] = *arg1
arg1[3] = 0
int32_t edi = *(ebx + 0x4b038)
int32_t ebx_1 = *(ebx + 0x4b03c)
sub_5979b0(arg1, 8)
int32_t* ecx_1 = *arg1

if (ecx_1 == arg1[1])
    ecx_1 = nullptr

int32_t eax_4 = arg1[3]
*(ecx_1 + eax_4) = edi
*(ecx_1 + eax_4 + 4) = ebx_1
arg1[3] += 8
sub_5bd630(ebx + 0x556b8, arg1)
sub_5b6110(ebx + 0x4b130, arg1)
sub_5b6110(ebx + 0x4b1e8, nullptr)
sub_666170()
int32_t ecx_6 = *(ebx + 0x4b2cc) - *(ebx + 0x4b2c8)
sub_5979b0(nullptr, *0xc + 4)
int32_t* ecx_7 = *nullptr

if (ecx_7 == *4)
    ecx_7 = nullptr

*(ecx_7 + *0xc) = ecx_6 s/ 0x1c
*0xc += 4
void* edi_4 = ebx
arg1 = nullptr

if ((*(edi_4 + 0x4b2cc) - *(edi_4 + 0x4b2c8)) s/ 0x1c s> 0)
    int32_t ebx_3 = 0
    int32_t var_1c_1 = 0
    
    do
        void** eax_13 = *(edi_4 + 0x4b2c8) + ebx_3
        int16_t var_38 = 0
        int32_t var_24_1 = 7
        void* var_28_1 = nullptr
        sub_52e3c0(&var_38, eax_13, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_5979b0(nullptr, *0xc + 4)
        int32_t* ecx_12 = *nullptr
        int16_t* edx_6 = &var_38
        
        if (ecx_12 == *4)
            ecx_12 = nullptr
        
        *(ecx_12 + *0xc) = var_28_1
        *0xc += 4
        int16_t* ecx_13 = var_38.d
        void* edi_6 = var_28_1 * 2
        int32_t eax_18 = var_24_1
        
        if (eax_18 u>= 8)
            edx_6 = ecx_13
        
        if (edi_6 s> 0)
            sub_5979b0(nullptr, *0xc + edi_6)
            int32_t ecx_14 = *nullptr
            
            if (ecx_14 == *4)
                ecx_14 = 0
            
            sub_748840(*0xc + ecx_14, edx_6, edi_6, eax_2)
            eax_18 = var_24_1
            *0xc += edi_6
            ecx_13 = var_38.d
        
        int32_t var_8_2 = 0xffffffff
        
        if (eax_18 u>= 8)
            j__free(ecx_13)
        
        edi_4 = ebx
        var_38 = 0
        int32_t var_24_2 = 7
        int32_t var_28_2 = 0
        ebx_3.b = *(*(edi_4 + 0x4b2c8) + ebx_3 + 0x18)
        sub_5979b0(nullptr, *0xc + 1)
        char* ecx_15 = *nullptr
        
        if (ecx_15 == *4)
            ecx_15 = nullptr
        
        arg1 += 1
        ecx_15[*0xc] = ebx_3.b
        *0xc += 1
        ebx_3 = var_1c_1 + 0x1c
        var_1c_1 = ebx_3
    while (arg1 s< (*(edi_4 + 0x4b2cc) - *(edi_4 + 0x4b2c8)) s/ 0x1c)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
