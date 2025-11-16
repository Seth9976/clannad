// 函数: sub_653870
// 地址: 0x653870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c42be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_7c = zx.o(0)
int32_t var_8_1 = 0
void* ecx = data_bac45c
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(ecx + 0x60) != 0)
    int32_t ebx_1 = 0
    int32_t eax_4 = *(*(ecx + 0x10) + 0x50)
    int32_t* var_80
    void* var_2c
    int32_t var_18
    
    if (eax_4 s> 0)
        void* edi_1 = var_7c:0xc.d
        int32_t* var_84_1 = nullptr
        
        while (true)
            sub_698170(ecx, &var_2c, ebx_1)
            var_8_1.b = 1
            int16_t var_9c = 0
            int32_t var_88_1 = 7
            void* var_8c_1 = nullptr
            sub_52e3c0(&var_9c, &var_2c, 0, 0xffffffff)
            var_8_1.b = 2
            sub_5979b0(&var_7c, edi_1 + 4)
            int32_t eax_6 = var_7c.d
            int16_t* edx_1 = &var_9c
            int32_t* edi_2 = var_7c:0xc.d
            
            if (eax_6 == var_7c:4.d)
                eax_6 = 0
            
            *(edi_2 + eax_6) = var_8c_1
            void* edi_3 = &edi_2[1]
            int32_t ecx_3 = var_88_1
            var_7c:0xc.d = edi_3
            void* esi_2 = var_8c_1 * 2
            int16_t* eax_8 = var_9c.d
            
            if (ecx_3 u>= 8)
                edx_1 = eax_8
            
            if (esi_2 s> 0)
                sub_5979b0(&var_7c, edi_3 + esi_2)
                void* const eax_10 = var_7c.d
                void* edi_4 = var_7c:0xc.d
                
                if (eax_10 == var_7c:4.d)
                    eax_10 = nullptr
                
                sub_748840(eax_10 + edi_4, edx_1, esi_2, eax_2)
                ecx_3 = var_88_1
                eax_8 = var_9c.d
                edi_3 = edi_4 + esi_2
                var_7c:0xc.d = edi_3
            
            var_8_1.b = 1
            
            if (ecx_3 u>= 8)
                j__free(eax_8)
            
            int32_t var_88_2 = 7
            var_9c = 0
            int32_t var_8c_2 = 0
            int32_t* eax_14 = *data_bac48c + var_84_1
            int32_t esi_4 = eax_14[1] - *eax_14
            sub_5979b0(&var_7c, edi_3 + 4)
            int32_t* eax_16 = var_7c.d
            void* edi_5 = var_7c:0xc.d
            
            if (eax_16 == var_7c:4.d)
                eax_16 = nullptr
            
            *(eax_16 + edi_5) = esi_4
            edi_1 = edi_5 + 4
            var_7c:0xc.d = edi_1
            int32_t eax_18 = *data_bac48c
            int32_t* edx_2 = *(var_84_1 + eax_18)
            
            if (edx_2 == *(var_84_1 + eax_18 + 4))
                edx_2 = nullptr
            
            void* esi_6 = *(var_84_1 + eax_18 + 4) - *(var_84_1 + eax_18)
            var_80 = edx_2
            
            if (esi_6 s> 0)
                sub_5979b0(&var_7c, edi_1 + esi_6)
                void* const eax_20 = var_7c.d
                void* edi_6 = var_7c:0xc.d
                
                if (eax_20 == var_7c:4.d)
                    eax_20 = nullptr
                
                sub_748840(eax_20 + edi_6, var_80, esi_6, eax_2)
                edi_1 = edi_6 + esi_6
                var_7c:0xc.d = edi_1
            
            var_8_1.b = 0
            
            if (var_18 u>= 8)
                j__free(var_2c)
            
            var_84_1 = &var_84_1[3]
            ebx_1 += 1
            
            if (ebx_1 s>= eax_4)
                break
            
            ecx = data_bac45c
    
    sub_6522e0(&var_7c)
    int32_t esi_7 = var_7c:4.d
    int32_t* edi_7 = var_7c.d
    void* var_34_1 = esi_7 - edi_7
    int32_t var_3c = 1
    int32_t var_38_1 = 0
    int32_t var_30_1 = eax_4
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t* var_8c_3 = nullptr
    int32_t var_88_3 = 0
    var_8_1.b = 3
    int32_t* var_b8_10 = var_80
    sub_656990(&result_1, nullptr, &var_3c, &var_2c)
    int32_t* var_b8_11 = var_80
    sub_656ab0(&result_1, var_8c_3, edi_7, esi_7)
    int16_t var_54
    sub_652060(&var_54)
    var_8_1.b = 4
    sub_6b3e90(&var_2c, &var_54)
    var_8_1.b = 5
    sub_6b4260(&var_2c)
    var_8_1.b = 4
    
    if (var_18 u>= 8)
        j__free(var_2c)
    
    if (sub_6520c0(&var_54, &result_1) != 0)
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c.w = 0
        sub_52e720(&var_2c, 0xaf7a98, 0xd)
        var_8_1.b = 8
        sub_684160(data_bac424, 5, &var_2c)
        
        if (var_18_2 u>= 8)
            j__free(var_2c)
        
        ebx_1.b = 1
    else
        int32_t var_6c
        int16_t* eax_26 = sub_6b9ed0(&var_6c)
        var_8_1.b = 6
        int16_t* eax_27 = sub_548cb0(eax_26, 0xaf7a74, &var_2c, eax_26)
        var_8_1.b = 7
        sub_684160(data_bac424, 2, eax_27)
        
        if (var_18 u>= 8)
            j__free(var_2c)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c.w = 0
        int32_t var_58
        
        if (var_58 u>= 8)
            j__free(var_6c)
        
        ebx_1.b = 0
    
    int32_t var_40
    
    if (var_40 u>= 8)
        j__free(var_54.d)
    
    int32_t var_40_1 = 7
    var_54 = 0
    result = result_1
    int32_t var_44_1 = 0
    
    if (result != 0)
        j__free(result)
    
    if (edi_7 != 0)
        j__free(edi_7)
    
    result.b = ebx_1.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
