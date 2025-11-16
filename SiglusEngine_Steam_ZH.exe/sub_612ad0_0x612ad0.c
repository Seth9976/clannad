// 函数: sub_612ad0
// 地址: 0x612ad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bee96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac4a0
bool cond:0 = *(eax_3 + 0x1a8) == 0
int32_t edi = *(eax_3 + 0x1ac)
int32_t edx = *(eax_3 + 0x1b0)
int32_t var_c4 = edi
int32_t var_c0 = edx
int32_t* result

if (cond:0 || arg2 != 1 || (arg3 s>= edi && (arg3 != edi || arg4 s> edx))
        || (edi s>= arg5 && (edi != arg5 || edx s> arg6)))
    sub_612f40(arg1, arg2, arg3, arg4, arg5, arg6)
    result.b = 1
else
    sub_612f40(arg1, 1, arg3, arg4, edi, edx)
    void* ecx_2 = data_bac4a0
    result = *(ecx_2 + 0x1a8)
    
    if (result == 1)
        result = sub_616f50(arg1)
        
        if (result.b != 0)
        label_612bef:
            ecx_2 = data_bac4a0
        label_612bf5:
            int32_t edx_1 = *(ecx_2 + 0x1a8)
            
            if (edx_1 == 3)
                result = *(arg1 + 0x1c08)
            
            void var_b8
            void var_78
            void var_60
            void var_48
            void var_30
            
            if (edx_1 == 3 && result != 0)
                int32_t ecx_8 = result[1]
                char* ecx_9 = result[2]
                int32_t var_e4_1 = 0x2000
                char* var_e8_1 = ecx_9
                int32_t eax_4
                int32_t ecx_11
                int32_t edx_2
                eax_4, ecx_11, edx_2 = sub_6f3b20(result, &var_b8, &var_b8)
                
                if (eax_4.b != 0)
                    uint32_t eax_7
                    int32_t edx_3
                    eax_7, edx_3 = sub_746b5d(eax_4, edx_2, ecx_11, nullptr)
                    int16_t* eax_8 = sub_6adb00(eax_7, edx_3, &var_60, eax_7, edx_3)
                    int32_t var_8_3 = 2
                    int16_t* eax_9 = sub_532b80(eax_8, data_bac4d8 + 0x48, &var_78, &data_ad900c)
                    var_8_3.b = 3
                    int16_t* eax_10 = sub_5327a0(eax_9, eax_9, &var_48, eax_8)
                    var_8_3.b = 4
                    sub_532b80(eax_10, eax_10, &var_30, u".png")
                    sub_52e8a0(&var_48)
                    sub_52e8a0(&var_78)
                    var_8_3.b = 8
                    sub_52e8a0(&var_60)
                    sub_6291d0(&var_b8, ecx_8, &var_30, ecx_9, &var_b8, 0)
                    *(data_bac4a0 + 0x1b8) = eax_7
                    sub_6f3c40(*(arg1 + 0x1c08))
                    int32_t var_8_4 = 0xffffffff
                    sub_52e8a0(&var_30)
                    sub_5f1200(arg1 + 0x1c08)
                else
                    int16_t* eax_5 = sub_6b9ed0(&var_48)
                    int32_t var_8_1 = 0
                    int16_t* eax_6 = sub_548cb0(eax_5, 0xaf3b14, &var_30, eax_5)
                    var_8_1.b = 1
                    sub_684160(data_bac424, 2, eax_6)
                    sub_52e8a0(&var_30)
                    int32_t var_8_2 = 0xffffffff
                    sub_52e8a0(&var_48)
                    sub_5f1200(arg1 + 0x1c08)
                
                ecx_2 = data_bac4a0
            else if (edx_1 == 4 && *(ecx_2 + 0x1dc) != 0)
                void* eax_13 = *(arg1 + 0x1c28)
                int32_t edx_9 = *(eax_13 + 4)
                char* eax_14 = *(eax_13 + 8)
                int16_t* eax_15 = sub_6adbd0(&var_48, ecx_2 + 0x1cc)
                int32_t var_8_5 = 9
                int16_t* eax_16 = sub_532b80(eax_15, data_bac4d8 + 0x48, &var_78, &data_ad900c)
                var_8_5.b = 0xa
                int16_t* eax_17 = sub_5327a0(eax_16, eax_16, &var_60, eax_15)
                var_8_5.b = 0xb
                sub_532b80(eax_17, eax_17, &var_30, u".png")
                sub_52e8a0(&var_60)
                sub_52e8a0(&var_78)
                var_8_5.b = 0xf
                int32_t ecx_36 = sub_52e8a0(&var_48)
                int32_t var_e4_7 = 0x2000
                int32_t var_e8_4 = ecx_36
                
                if (sub_6f3b20(*(arg1 + 0x1c28), ecx_36, &var_b8) != 0)
                    sub_6291d0(&var_b8, edx_9, &var_30, eax_14, &var_b8, 1)
                    sub_6f3c40(*(arg1 + 0x1c28))
                else
                    void var_90
                    int16_t* eax_19 = sub_6b9ed0(&var_90)
                    var_8_5.b = 0x10
                    void var_a8
                    int16_t* eax_20 = sub_548cb0(eax_19, 0xaf3b54, &var_a8, eax_19)
                    var_8_5.b = 0x11
                    sub_684160(data_bac424, 2, eax_20)
                    sub_52e8a0(&var_a8)
                    sub_52e8a0(&var_90)
                
                int32_t var_8_6 = 0xffffffff
                sub_52e8a0(&var_30)
                ecx_2 = data_bac4a0
            
            if (*(ecx_2 + 0x199) == 0)
                result.b = 1
            else
                sub_6f5d30(*(arg1 + 0x1b90))
                sub_6f5e50(*(arg1 + 0x1ba4))
                
                if (edi s< arg5 || (edi == arg5 && edx s< arg6))
                    void var_cc
                    int32_t* eax_22 = sub_610e40(&var_c4, &var_cc)
                    sub_612f40(arg1, 1, *eax_22, eax_22[1], arg5, arg6)
                    result.b = 1
                else
                    result.b = 1
    else if (result == 2)
        result = sub_618b40(arg1)
        
        if (result.b != 0)
            goto label_612bef
    else if (result == 3)
        result = sub_6182e0(arg1)
        
        if (result.b != 0)
            goto label_612bef
    else if (result != 4)
        if (result != 5)
            goto label_612bf5
        
        result = sub_617910(arg1)
        
        if (result.b != 0)
            goto label_612bef
    else
        result = sub_619640(arg1)
        
        if (result.b != 0)
            goto label_612bef

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
