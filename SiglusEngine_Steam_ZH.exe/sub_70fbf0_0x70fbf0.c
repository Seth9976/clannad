// 函数: sub_70fbf0
// 地址: 0x70fbf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0f81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_60 = arg2
int32_t var_58 = 0
int32_t var_8_1 = 1
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t ebx = arg3
int32_t i = 0
int32_t var_58_1 = 1
int32_t var_50 = ebx
int32_t* arg_8
char* result

if (ebx == 0)
    result = arg2
else
    char* ecx_1 = arg2
    
    while (true)
        int32_t* eax_3 = &arg_8
        
        if (arg4 u>= 0x10)
            eax_3 = arg_8
        
        if (*(eax_3 + i) != 0x24)
            int32_t* eax_10 = &arg_8
            
            if (arg4 u>= 0x10)
                eax_10 = arg_8
            
            sub_607d90(ecx_1, 1, *(eax_10 + i))
            result = arg2
        else
            void* ecx_2 = nullptr
            int32_t edx_1 = 0xf
            int32_t var_1c_1 = 0xf
            void* var_20_1 = nullptr
            char var_30 = 0
            i += 2
            var_8_1.b = 2
            
            for (; i u< ebx; i += 1)
                int32_t** eax_4 = &arg_8
                int32_t** ebx_1 = arg_8
                
                if (arg4 u>= 0x10)
                    eax_4 = ebx_1
                
                if (*(eax_4 + i) == 0x29)
                    ebx = var_50
                    break
                
                int32_t** eax_5 = &arg_8
                
                if (arg4 u>= 0x10)
                    eax_5 = ebx_1
                
                ebx_1.b = *(eax_5 + i)
                void* edi_2
                
                if (0xffffffff - ecx_2 u> 1)
                    edi_2 = ecx_2 + 1
                
                if (0xffffffff - ecx_2 u<= 1 || edi_2 u> 0xfffffffe)
                    sub_743191("string too long")
                    noreturn
                
                char* eax_6
                bool cond:3_1
                
                if (edx_1 u>= edi_2)
                    cond:3_1 = edi_2 != 0
                    
                    if (edi_2 == 0)
                        var_20_1 = edi_2
                        eax_6 = &var_30
                        
                        if (edx_1 u>= 0x10)
                            eax_6 = var_30.d
                        
                        *eax_6 = 0
                        goto label_70fcf7
                else
                    sub_541ca0(&var_30, edi_2, ecx_2)
                label_70fcf7:
                    ecx_2 = var_20_1
                    cond:3_1 = edi_2 != 0
                    edx_1 = var_1c_1
                
                eax_6.b = cond:3_1
                
                if (eax_6.b != 0)
                    char* eax_7 = &var_30
                    
                    if (edx_1 u>= 0x10)
                        eax_7 = var_30.d
                    
                    *(eax_7 + ecx_2) = ebx_1.b
                    char* eax_8 = &var_30
                    var_20_1 = edi_2
                    
                    if (var_1c_1 u>= 0x10)
                        eax_8 = var_30.d
                    
                    *(eax_8 + edi_2) = 0
                    edx_1 = var_1c_1
                    ecx_2 = var_20_1
                
                ebx = var_50
            
            int32_t var_74_2 = 0xf
            int32_t var_78_2 = 0
            char var_88 = 0
            sub_541b40(&var_88, &var_30, 0, 0xffffffff)
            var_8_1.b = 3
            result = arg2
            int32_t var_48
            sub_6b3810(result, sub_70f990(arg1, &var_48, var_88), nullptr, 0xffffffff)
            int32_t var_34
            
            if (var_34 u>= 0x10)
                j__free(var_48)
            
            var_8_1.b = 1
            
            if (var_1c_1 u>= 0x10)
                j__free(var_30.d)
        
        i += 1
        
        if (i u>= ebx)
            break
        
        ecx_1 = arg2

if (arg4 u>= 0x10)
    j__free(arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
