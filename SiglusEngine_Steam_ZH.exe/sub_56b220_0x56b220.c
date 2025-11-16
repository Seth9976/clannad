// 函数: sub_56b220
// 地址: 0x56b220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b3790
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
var_44 = edi

if (*(edi + 4) != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_c_1 = 0
    void* eax_5 = data_bac4bc
    int32_t ebx_3 = (*(eax_5 + 0xa8) - *(eax_5 + 0xa4)) s>> 2
    sub_55c6f0(&result_1, ebx_3)
    int32_t esi_1 = 0
    
    if (ebx_3 s> 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_1
        
        do
            void* ecx_1 = data_bac4bc
            void* var_58_2 = ecx_1
            int32_t* eax_6 = sub_55b0d0(ecx_1 + 4, esi_1)
            int32_t ecx_3
            
            if (eax_6 == 0)
                ecx_3 = 0
            else
                ecx_3 = *eax_6
            
            int32_t eax_7
            eax_7.b = ecx_3 != 0
            result_3[esi_1] = eax_7
            esi_1 += 1
        while (esi_1 s< ebx_3)
        
        edi = var_44
    
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
    int32_t eax_10
    void* ebx_6
    
    if (*(edi + 0xb8) == 0)
        ebx_6 = (var_3c_1 - result_2) s>> 2
        eax_10 = (*(edi + 0x418) - *(edi + 0x414)) s>> 2
        var_44 = ebx_6
    
    if (*(edi + 0xb8) != 0 || ebx_6 != eax_10)
        void* eax_11 = data_bac4e0
        ebx_6 = (var_3c_1 - result_2) s>> 2
        var_44 = ebx_6
        int32_t eax_12 = *(eax_11 + 0x30)
        
        if (eax_12 != 0)
            eax_12(*(edi + 0xe4), ebx_6, eax_4)
    
    int32_t esi_2
    
    if (*(edi + 0xb8) == 0)
        esi_2 = (*(edi + 0x418) - *(edi + 0x414)) s>> 2
    else
        esi_2 = 0
    
    if (esi_2 s< ebx_6)
        int32_t ebx_12 = esi_2 * 0x3c
        
        do
            int32_t eax_14 = *(data_bac4e0 + 0x34)
            
            if (eax_14 != 0)
                eax_14(*(edi + 0xe4), esi_2, 0, data_bac510 + 0xa48b5c + ebx_12, eax_4)
            
            esi_2 += 1
            ebx_12 += 0x3c
        while (esi_2 s< var_44)
        
        ebx_6 = var_44
    
    int32_t esi_5 = 0
    
    if (ebx_6 s> 0)
        do
            if (*(edi + 0xb8) != 0 || esi_5 s>= (*(edi + 0x418) - *(edi + 0x414)) s>> 2
                    || result_1[esi_5] != *(*(edi + 0x414) + (esi_5 << 2)))
                int32_t* edx_1 = &data_ad926c
                int32_t var_20_1 = 7
                
                if (result_1[esi_5] == 0)
                    edx_1 = &data_ad9270
                
                int32_t var_24_1 = 0
                int16_t var_34 = 0
                int32_t ecx_9
                
                if (*edx_1 != 0)
                    int32_t* ecx_10 = edx_1
                    var_44 = ecx_10 + 2
                    void* eax_21
                    
                    do
                        eax_21.w = *ecx_10
                        ecx_10 += 2
                    while (eax_21.w != 0)
                    ecx_9 = (ecx_10 - var_44) s>> 1
                else
                    ecx_9 = 0
                
                sub_52e720(&var_34, edx_1, ecx_9)
                var_c_1.b = 1
                int32_t eax_23 = *(data_bac4e0 + 0x34)
                
                if (eax_23 != 0)
                    eax_23(*(edi + 0xe4), esi_5, 1, &var_34, eax_4)
                
                var_c_1.b = 0
                
                if (var_20_1 u>= 8)
                    j__free(var_34.d)
            
            esi_5 += 1
        while (esi_5 s< ebx_6)
    
    sub_56b4c0(edi + 0x414, &result_1)
    result = result_1
    *(edi + 0xb8) = 0
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_44)
return result
