// 函数: sub_61aca0
// 地址: 0x61aca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf97b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_160 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_619740(arg1) != 0)
    sub_6197e0(arg1)

int32_t* eax_4 = data_bac450
char var_139_1

if (*eax_4 == 0x385)
    var_139_1 = 1

if (*eax_4 != 0x385 || eax_4[2] == 0)
    var_139_1 = 0

bool result = sub_611f60(1)

if (result == 0)
    result = false
else
    int32_t ebx_1
    ebx_1.b = var_139_1 == 0
    
    if (ebx_1 != 0xfffffffe)
        result = sub_6120a0(ebx_1 + 1)
    
    if (ebx_1 != 0xfffffffe && result == 0)
        result = false
    else
        int32_t eax_5
        eax_5.b = var_139_1 != 0
        int32_t var_140 = eax_5 + 1
        
        if (eax_5 != 0xfffffffe)
            result = sub_6120a0(eax_5 + 1)
        
        if (eax_5 != 0xfffffffe && result == 0)
            result = false
        else if (sub_612220(1) == 0)
            result = false
        else
            result = sub_612000(arg1, 1)
            
            if (result == 0)
                result = false
            else
                if (ebx_1 != 0xfffffffe)
                    result = sub_612160(ebx_1 + 1)
                
                if (ebx_1 != 0xfffffffe && result == 0)
                    result = false
                else if (sub_611bf0(arg1) == 0)
                    result = false
                else
                    sub_6f60f0(sub_614c50(arg1 + 0x1aec))
                    result = sub_612000(arg1, 1)
                    
                    if (result == 0)
                        result = false
                    else
                        int32_t eax_8 = var_140
                        
                        if (eax_8 != 0xffffffff)
                            result = sub_612160(eax_8)
                        
                        if (eax_8 != 0xffffffff && result == 0)
                            result = false
                        else
                            int32_t var_138
                            sub_6efae0(&var_138)
                            int32_t var_8_1 = 0
                            int32_t* var_164_9 = &var_138
                            var_138 = 2
                            sub_611e70(arg1, var_164_9)
                            int32_t* var_168
                            sub_54d950(&var_168, &data_4ebe2e4)
                            operator new(&var_138, var_168)
                            sub_54d950(&var_168, &data_4ebe2ec)
                            operator new[](&var_138)
                            var_168 = &var_138
                            int32_t ecx_18 = sub_61af50(arg1, var_168, arg2)
                            int32_t var_164_11 = ecx_18
                            var_168 = &var_140
                            float ecx_20 = sub_6fd020(data_4ebe2e4, ecx_18, 0)
                            int32_t var_164_12 = 0
                            var_168 = nullptr
                            int32_t var_16c_1 = var_140
                            void var_174
                            char eax_9 = sub_6f01c0(&var_138, 0, ecx_20, 0, var_174)
                            int32_t* ecx_22 = data_4ebe2e4
                            
                            if (eax_9 == 0)
                                sub_6fd140(ecx_22)
                            label_61af11:
                                int32_t var_8_3 = 0xffffffff
                                sub_6efc80(&var_138)
                                result = sub_6122c0(arg1, 1) != 0
                            else
                                sub_6fd140(ecx_22)
                                sub_6f5d30(*(arg1 + 0x1b90))
                                sub_6f5e50(*(arg1 + 0x1ba4))
                                void* eax_10 = data_bac4a0
                                int32_t var_150_1 = 0
                                int32_t var_14c_1 = *(eax_10 + 8)
                                int32_t var_148_1 = *(eax_10 + 0xc)
                                int32_t* var_164_15 = &var_138
                                *(arg1 + 0x1a60) = 0.o
                                
                                if (sub_6133f0(arg1) != 0)
                                    goto label_61af11
                                
                                int32_t var_8_2 = 0xffffffff
                                sub_6efc80(&var_138)
                                result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
