// 函数: sub_61e1d0
// 地址: 0x61e1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfa96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_288 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *data_bac450
void var_29c
float var_290

if (result == 0xf0 || result == 0xf2)
    if (sub_611f60(1).b == 0)
        result.b = 0
    else if (sub_6120a0(2).b == 0)
        result.b = 0
    else if (sub_6120a0(1).b == 0)
        result.b = 0
    else if (sub_612220(1).b == 0)
        result.b = 0
    else if (sub_611d30(arg1).b == 0)
        result.b = 0
    else
        sub_6f60f0(sub_614c50(arg1 + 0x1aec))
        
        if (sub_612000(arg1, 1).b == 0)
            result.b = 0
        else if (sub_612160(2).b == 0)
            result.b = 0
        else if (sub_611bf0(arg1).b == 0)
            result.b = 0
        else
            sub_6f60f0(sub_614c50(arg1 + 0x1aec))
            
            if (sub_612000(arg1, 1).b == 0)
                result.b = 0
            else if (sub_612160(1).b == 0)
                result.b = 0
            else
                int32_t var_138
                sub_6efae0(&var_138)
                int32_t var_8_4 = 0
                int32_t* var_28c_28 = &var_138
                var_138 = 2
                sub_611e70(arg1, var_28c_28)
                sub_54d950(&var_290, arg1 + 0x1be8)
                sub_6f1260(&var_138, 1, var_290)
                sub_54d950(&var_290, &data_4ebe2d4)
                operator new(&var_138)
                sub_54d950(&var_290, &data_4ebe2ec)
                operator new[](&var_138)
                var_290 = &var_138
                int32_t ecx_48 = sub_61e720(arg1, var_290, arg2)
                int32_t var_28c_30 = ecx_48
                int32_t var_264
                var_290 = &var_264
                float ecx_50 = sub_6fd020(data_4ebe2d4, ecx_48, 0)
                int32_t var_28c_31 = 0
                var_290 = 0f
                int32_t var_294_3 = var_264
                char eax_16 = sub_6f01c0(&var_138, 0, ecx_50, 0, var_29c)
                int32_t* ecx_52 = data_4ebe2d4
                
                if (eax_16 == 0)
                    sub_6fd140(ecx_52)
                label_61e6a3:
                    int32_t var_8_6 = 0xffffffff
                    sub_6efc80(&var_138)
                    result.b = sub_6122c0(arg1, 1).b != 0
                else
                    sub_6fd140(ecx_52)
                    sub_6f5d30(*(arg1 + 0x1b90))
                    sub_6f5e50(*(arg1 + 0x1ba4))
                    void* eax_17 = data_bac4a0
                    int32_t var_270_2 = 0
                    int32_t var_26c_2 = *(eax_17 + 8)
                    int32_t var_268_2 = *(eax_17 + 0xc)
                    int32_t* var_28c_34 = &var_138
                    *(arg1 + 0x1a60) = 0.o
                    
                    if (sub_6133f0(arg1) != 0)
                        goto label_61e6a3
                    
                    int32_t var_8_5 = 0xffffffff
                    sub_6efc80(&var_138)
                    result.b = 0
else if (result == 0xf1 || result == 0xf3)
    char var_259_1
    
    if (&result[-0x3c] u> 3)
        var_259_1 = 0
    else
        var_259_1 = sub_61e6e0(&result[-0x3c])
    
    result = sub_611f60(1)
    
    if (result.b == 0)
        result.b = 0
    else
        int32_t ebx_1
        ebx_1.b = var_259_1 == 0
        
        if (ebx_1 != 0xfffffffe)
            result = sub_6120a0(ebx_1 + 1)
        
        if (ebx_1 != 0xfffffffe && result.b == 0)
            result.b = 0
        else
            int32_t eax_5
            eax_5.b = var_259_1 != 0
            int32_t var_260 = eax_5 + 1
            
            if (eax_5 != 0xfffffffe)
                result = sub_6120a0(eax_5 + 1)
            
            if (eax_5 != 0xfffffffe && result.b == 0)
                result.b = 0
            else if (sub_612220(1).b == 0)
                result.b = 0
            else
                result = sub_612000(arg1, 1)
                
                if (result.b == 0)
                    result.b = 0
                else
                    if (ebx_1 != 0xfffffffe)
                        result = sub_612160(ebx_1 + 1)
                    
                    if (ebx_1 != 0xfffffffe && result.b == 0)
                        result.b = 0
                    else if (sub_611bf0(arg1).b == 0)
                        result.b = 0
                    else
                        sub_6f60f0(sub_614c50(arg1 + 0x1aec))
                        result = sub_612000(arg1, 1)
                        
                        if (result.b == 0)
                            result.b = 0
                        else
                            int32_t eax_8 = var_260
                            
                            if (eax_8 != 0xffffffff)
                                result = sub_612160(eax_8)
                            
                            if (eax_8 != 0xffffffff && result.b == 0)
                                result.b = 0
                            else
                                int32_t var_258
                                sub_6efae0(&var_258)
                                int32_t var_8_1 = 1
                                int32_t* var_28c_10 = &var_258
                                var_258 = 2
                                sub_611e70(arg1, var_28c_10)
                                sub_54d950(&var_290, &data_4ebe2d4)
                                operator new(&var_258, var_290)
                                sub_54d950(&var_290, &data_4ebe2ec)
                                operator new[](&var_258)
                                var_290 = &var_258
                                int32_t ecx_18 = sub_61e720(arg1, var_290, arg2)
                                int32_t var_28c_12 = ecx_18
                                var_290 = &var_260
                                float ecx_20 = sub_6fd020(data_4ebe2d4, ecx_18, 0)
                                int32_t var_28c_13 = 0
                                var_290 = 0f
                                int32_t var_294_1 = var_260
                                char eax_9 = sub_6f01c0(&var_258, 0, ecx_20, 0, var_29c)
                                int32_t* ecx_22 = data_4ebe2d4
                                
                                if (eax_9 == 0)
                                    sub_6fd140(ecx_22)
                                label_61e466:
                                    int32_t var_8_3 = 0xffffffff
                                    sub_6efc80(&var_258)
                                    
                                    if (sub_6122c0(arg1, 1).b == 0)
                                        result.b = 0
                                    else
                                        result.b = 1
                                else
                                    sub_6fd140(ecx_22)
                                    sub_6f5d30(*(arg1 + 0x1b90))
                                    sub_6f5e50(*(arg1 + 0x1ba4))
                                    void* eax_10 = data_bac4a0
                                    int32_t var_270_1 = 0
                                    int32_t var_26c_1 = *(eax_10 + 8)
                                    int32_t var_268_1 = *(eax_10 + 0xc)
                                    int32_t* var_28c_16 = &var_258
                                    *(arg1 + 0x1a60) = 0.o
                                    
                                    if (sub_6133f0(arg1) != 0)
                                        goto label_61e466
                                    
                                    int32_t var_8_2 = 0xffffffff
                                    sub_6efc80(&var_258)
                                    result.b = 0
else
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
