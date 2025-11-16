// 函数: ?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z
// 地址: 0x6a0d70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9c08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** i = data_4ebe29c

if (i != data_4ebe2a0)
    void* ebx_1 = &i[0x1a]
    void* var_18_1 = ebx_1
    
    do
        if (*(ebx_1 - 0x14) != 0)
            result = *i
            
            if (result == 1 || result == 2 || result == 3 || result == 4)
                struct _EXCEPTION_REGISTRATION_RECORD*** var_30
                result = sub_571430(ebx_1 - 0x10, &var_30)
                int32_t var_8_5 = 0
                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_23 = var_30
                
                if (ecx_23 != 0)
                    result = *ecx_23
                    *ecx_23 = nullptr
                    
                    if (result != 0)
                        result = (*result)->__offset(0x8).d(result)
                
                int32_t var_8_6 = 0xffffffff
                int32_t* var_2c
                
                if (var_2c != 0)
                    result = &var_2c[1]
                    bool cond:0_1 = *result != 1
                    *result
                    *result -= 1
                    
                    if (not(cond:0_1))
                        (*(*var_2c + 4))(eax_2)
                        result = &var_2c[2]
                        bool cond:1_1 = *result != 1
                        *result
                        *result -= 1
                        
                        if (not(cond:1_1))
                            result = (*(*var_2c + 8))()
            else if (result == 6)
                int32_t ebx_2 = 0
                
                while (true)
                    void var_38
                    result = *sub_571430(var_18_1, &var_38)
                    char edx_1 = ebx_2 s< (result[1] - *result) s>> 3
                    int32_t* var_34
                    
                    if (var_34 != 0)
                        result = &var_34[1]
                        bool cond:2_1 = *result != 1
                        *result
                        *result -= 1
                        
                        if (not(cond:2_1))
                            (*(*var_34 + 4))(eax_2)
                            result = &var_34[2]
                            bool cond:3_1 = *result != 1
                            *result
                            *result -= 1
                            
                            if (not(cond:3_1))
                                result = (*(*var_34 + 8))()
                            
                            edx_1 = edx_1
                    
                    if (edx_1 == 0)
                        break
                    
                    void var_40
                    int32_t* var_20
                    sub_54d980(*sub_571430(var_18_1, &var_40), &var_20, ebx_2)
                    int32_t var_8_1 = 1
                    int32_t* var_3c
                    
                    if (var_3c != 0)
                        bool cond:4_1 = var_3c[1] != 1
                        var_3c[1]
                        var_3c[1] -= 1
                        
                        if (not(cond:4_1))
                            (*(*var_3c + 4))(eax_2)
                            bool cond:5_1 = var_3c[2] != 1
                            var_3c[2]
                            var_3c[2] -= 1
                            
                            if (not(cond:5_1))
                                (*(*var_3c + 8))()
                    
                    int32_t* ecx_14 = var_20
                    
                    if (ecx_14 != 0)
                        int32_t* eax_11 = *ecx_14
                        *ecx_14 = 0
                        
                        if (eax_11 != 0)
                            (*(*eax_11 + 8))(eax_11)
                    
                    int32_t var_8_2 = 0xffffffff
                    int32_t* var_1c
                    
                    if (var_1c != 0)
                        bool cond:6_1 = var_1c[1] != 1
                        var_1c[1]
                        var_1c[1] -= 1
                        
                        if (not(cond:6_1))
                            (*(*var_1c + 4))(eax_2)
                            bool cond:7_1 = var_1c[2] != 1
                            var_1c[2]
                            var_1c[2] -= 1
                            
                            if (not(cond:7_1))
                                (*(*var_1c + 8))()
                    
                    ebx_2 += 1
                
                ebx_1 = var_18_1
            else if (result == 7)
                int32_t* var_28
                sub_571430(ebx_1 - 8, &var_28)
                int32_t var_8_3 = 2
                int32_t* ecx_20 = var_28
                
                if (ecx_20 != 0)
                    sub_6f66a0(ecx_20)
                
                int32_t var_8_4 = 0xffffffff
                result = sub_54b010(&var_28)
        
        i -= 0xffffff80
        ebx_1 -= 0xffffff80
        var_18_1 = ebx_1
    while (i != data_4ebe2a0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
