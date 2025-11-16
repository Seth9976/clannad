// 函数: sub_61eda0
// 地址: 0x61eda0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf97b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_160 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_bac450
int32_t* result = *ecx

if (result == 0xe6 || result == 0xe7)
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg2)) * 1.52587891e-05f
    bool var_139_1
    
    if (result == 0xe6)
        var_139_1 = 0.5f > xmm1_3
    else if (result == 0xe7)
        var_139_1 = ecx[3] == 0
    else
        var_139_1 = false
    
    result = sub_611f60(1)
    
    if (result.b == 0)
        result.b = 0
    else
        int32_t ebx_1
        ebx_1.b = var_139_1 == 0
        
        if (ebx_1 != 0xfffffffe)
            result = sub_6120a0(ebx_1 + 1)
        
        if (ebx_1 != 0xfffffffe && result.b == 0)
            result.b = 0
        else
            int32_t eax_5
            eax_5.b = var_139_1 != 0
            int32_t var_140 = eax_5 + 1
            
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
                            int32_t eax_8 = var_140
                            
                            if (eax_8 != 0xffffffff)
                                result = sub_612160(eax_8)
                            
                            if (eax_8 != 0xffffffff && result.b == 0)
                                result.b = 0
                            else
                                int32_t var_138
                                sub_6efae0(&var_138)
                                int32_t var_8_1 = 0
                                int32_t* var_164_10 = &var_138
                                var_138 = 2
                                sub_611e70(arg1, var_164_10)
                                float var_168
                                sub_54d950(&var_168, &data_4ebe2d4)
                                operator new(&var_138, var_168)
                                sub_54d950(&var_168, &data_4ebe2ec)
                                operator new[](&var_138)
                                var_168 = &var_138
                                int32_t ecx_18 = sub_61f080(arg1, var_168, arg2)
                                int32_t var_164_12 = ecx_18
                                var_168 = &var_140
                                float ecx_20 = sub_6fd020(data_4ebe2d4, ecx_18, 0)
                                int32_t var_164_13 = 0
                                var_168 = 0f
                                int32_t var_16c_1 = var_140
                                void var_174
                                char eax_9 = sub_6f01c0(&var_138, 0, ecx_20, 0, var_174)
                                int32_t* ecx_22 = data_4ebe2d4
                                
                                if (eax_9 == 0)
                                    sub_6fd140(ecx_22)
                                label_61f03c:
                                    int32_t var_8_3 = 0xffffffff
                                    sub_6efc80(&var_138)
                                    
                                    if (sub_6122c0(arg1, 1).b == 0)
                                        result.b = 0
                                    else
                                        result.b = 1
                                else
                                    sub_6fd140(ecx_22)
                                    sub_6f5d30(*(arg1 + 0x1b90))
                                    sub_6f5e50(*(arg1 + 0x1ba4))
                                    void* eax_10 = data_bac4a0
                                    int32_t var_150_1 = 0
                                    int32_t var_14c_1 = *(eax_10 + 8)
                                    int32_t var_148_1 = *(eax_10 + 0xc)
                                    int32_t* var_164_16 = &var_138
                                    *(arg1 + 0x1a60) = 0.o
                                    
                                    if (sub_6133f0(arg1) != 0)
                                        goto label_61f03c
                                    
                                    int32_t var_8_2 = 0xffffffff
                                    sub_6efc80(&var_138)
                                    result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
