// 函数: sub_6f4310
// 地址: 0x6f4310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd790
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_18 = esi
esi[9].b = 0
void* var_2c = nullptr
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6b7be0(arg2, &var_2c)
void* edi = var_2c

if (result.b != 0)
    void* var_38_1 = nullptr
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    uint32_t var_3c = 0
    var_8_1.b = 1
    void* ecx_1 = edi
    
    if (edi == var_28)
        ecx_1 = nullptr
    
    void* ecx_3
    result, ecx_3 = sub_6dcdb0(&var_3c, ecx_1, var_28 - edi)
    
    if (result.b == 0)
        result.b = 0
    else
        ecx_3 = var_34_1 - var_38_1
        
        if (ecx_3 s/ 0x30 s<= 0)
            result.b = 1
        else
            int32_t i_1 = (*(var_38_1 + 0x28) - *(var_38_1 + 0x24)) s>> 5
            result, ecx_3 = sub_6f3610(esi, *(var_38_1 + 4), *(var_38_1 + 8), 0, 0x400, 0x15, 1)
            
            if (result.b == 0)
                edi = var_2c
                result.b = 0
            else
                int32_t var_54_2 = 0
                void* var_58_2 = ecx_3
                int32_t var_20
                result, ecx_3 = sub_6f3b20(esi, ecx_3, &var_20)
                
                if (result.b == 0)
                    edi = var_2c
                    result.b = 0
                else
                    if (i_1 s> 0)
                        int32_t ebx_2 = 0
                        int32_t i
                        
                        do
                            void* ecx_7 = *(var_38_1 + 0x24)
                            void* eax_7
                            eax_7.b = *(ecx_7 + ebx_2 + 0x14)
                            void* ecx_8 = ecx_7 + ebx_2
                            arg2:3.b = eax_7.b
                            int32_t eax_8 = var_20
                            int32_t var_1c
                            ecx_3 = sub_6dd0a0(ecx_8, 
                                *(ecx_8 + 8) * eax_8 + var_1c + (*(ecx_8 + 4) << 2), eax_8)
                            esi = var_18
                            
                            if (esi[9].b == 0 && arg2:3.b != 0)
                                esi[9].b = 1
                            
                            ebx_2 += 0x20
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    void* var_54_4 = ecx_3
                    result, ecx_3 = sub_6f3c40(esi)
                    edi = var_2c
                    
                    if (result.b == 0)
                        result.b = 0
                    else
                        result.b = 1
    
    arg2:3.b = result.b
    
    if (var_38_1 != 0)
        void** var_54_5 = arg2
        void* var_58_4 = ecx_3
        sub_6c9040(var_38_1, var_34_1)
        j__free(var_38_1)
        result.b = arg2:3.b
else
    result.b = 0
    arg2:3.b = 0

if (edi != 0)
    j__free(edi)
    result.b = arg2:3.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
