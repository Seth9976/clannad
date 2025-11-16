// 函数: sub_64b3d0
// 地址: 0x64b3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c392c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_94 = nullptr
int32_t var_78
int16_t* eax_4 = sub_60f460(&var_94, arg6, &var_78, &var_94)
int32_t var_8_1 = 0
int32_t var_68
int32_t var_48
int16_t var_30
int32_t var_1c

if (var_68 == 0)
    int16_t* eax_5 = sub_548cb0(eax_4, 0xaf73c8, &var_48, arg6)
    var_8_1.b = 1
    int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_30, &data_af1b40)
    var_8_1.b = 2
    sub_684160(data_bac424, 0xa, eax_6)
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    goto label_64b4c4

char* result
int32_t* ebx
int32_t var_34

if (var_94 == 1)
    void* var_a0 = nullptr
    int32_t var_9c_1 = 0
    int32_t var_98_1 = 0
    var_8_1.b = 4
    int32_t var_a8
    void* ecx_12
    
    if (sub_6c8bc0(&var_a0, &var_78) != 0)
        void* var_b4
        sub_6c86d0(&var_a0, &var_b4, 0)
        var_8_1.b = 9
        ecx_12 = var_b4
        
        if (ecx_12 == 0)
            ebx.b = 0
        else
            var_8_1.b = 0xa
            void var_ac
            sub_54d190(arg2, sub_6c99b0(ecx_12, &var_ac))
            var_8_1.b = 9
            result, ecx_12 = sub_54b010(&var_ac)
            void* edi_1 = *arg2
            
            if (edi_1 == 0)
                ebx.b = 0
            else
                void* eax_14 = sub_61f740(edi_1)
                int32_t i_1 = *(edi_1 + 0x5c) * *(edi_1 + 0x58)
                void* edx_5 = eax_14 + 2
                ecx_12 = eax_14 + 3
                var_94 = ecx_12
                
                if (i_1 s> 0)
                    int32_t i
                    
                    do
                        eax_14.b = *edx_5
                        edx_5 += 4
                        *ecx_12 = eax_14.b
                        ecx_12 += 4
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    var_94 = ecx_12
                
                result = nullptr
                char* result_1 = nullptr
                int32_t var_28_1 = 0
                int32_t var_24_1 = 0
                var_8_1.b = 0xb
                
                if (arg4 s<= 0)
                    ebx.b = 0
                else
                    void var_c0
                    void var_bc
                    void var_b8
                    char eax_16
                    eax_16, ecx_12 = sub_64d660(&var_94, arg4, &result_1, arg5, &var_94, &var_a8, 
                        &var_bc, &var_c0, &var_b8)
                    
                    if (eax_16 == 0)
                        result = result_1
                        ebx.b = 0
                    else
                        void* eax_17 = *arg2
                        int32_t ecx_19
                        
                        if (*(eax_17 + 0x34) == 0)
                            ecx_19 = *(eax_17 + 0x38)
                            
                            if (ecx_19 == *(eax_17 + 0x3c))
                                ecx_19 = 0
                        else
                            ecx_19 = *(eax_17 + 0x44)
                        
                        int32_t var_20
                        sub_6c97b0(eax_17, var_20, var_94, var_1c, ecx_19, *(eax_17 + 0x58), 
                            *(eax_17 + 0x5c), 0, 0)
                        char eax_18
                        eax_18, ecx_12 = sub_64d840(arg3, &result_1)
                        ebx.b = eax_18
                        result = result_1
                
                if (result != 0)
                    result, ecx_12 = j__free(result)
        
        var_8_1.b = 4
        int32_t* var_b0
        
        if (var_b0 != 0)
            ecx_12 = &var_b0[1]
            bool cond:1_1 = *ecx_12 != 1
            *ecx_12
            *ecx_12 -= 1
            
            if (not(cond:1_1))
                ecx_12 = (*(*var_b0 + 4))(eax_2)
                int32_t edi_2 = var_b0[2]
                var_b0[2] -= 1
                
                if (edi_2 == 1)
                    result, ecx_12 = (*(*var_b0 + 8))()
    else
        int32_t var_90
        void** eax_9 = sub_6b9ed0(&var_90)
        var_8_1.b = 5
        int16_t* eax_10 = sub_548cb0(eax_9, 0xaf73c8, &var_48, arg6)
        var_8_1.b = 6
        int16_t var_60
        int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_60, &data_af46b4)
        var_8_1.b = 7
        int16_t* eax_12 = sub_5327a0(eax_11, eax_11, &var_30, eax_9)
        var_8_1.b = 8
        ecx_12 = sub_684160(data_bac424, 0xa, eax_12)
        
        if (var_1c u>= 8)
            ecx_12 = j__free(var_30.d)
        
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        int32_t var_4c
        
        if (var_4c u>= 8)
            ecx_12 = j__free(var_60.d)
        
        int32_t var_4c_1 = 7
        int32_t var_50_1 = 0
        var_60 = 0
        
        if (var_34 u>= 8)
            ecx_12 = j__free(var_48)
        
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        var_48.w = 0
        int32_t var_7c
        
        if (var_7c u>= 8)
            result, ecx_12 = j__free(var_90)
        
        ebx.b = 0
    
    var_8_1.b = 0
    void* esi_5 = var_a0
    
    if (esi_5 != 0)
        int32_t var_d4_18 = var_a8
        void* var_d8_3 = ecx_12
        sub_579a70(esi_5, var_9c_1)
        j__free(esi_5)
else
    int16_t* eax_7 = sub_548cb0(eax_4, 0xaf73dc, &var_48, arg6)
    var_8_1.b = 3
    sub_684160(data_bac424, 2, eax_7)
label_64b4c4:
    
    if (var_34 u>= 8)
        j__free(var_48)
    
    ebx.b = 0
int32_t var_64

if (var_64 u>= 8)
    j__free(var_78)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
