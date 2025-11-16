// 函数: sub_6fa550
// 地址: 0x6fa550
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cdfa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
int32_t* esi = *(arg1[5] + 0x98)
int32_t* eax_9 = *(arg4 + 0x44)
int32_t** result

if (eax_9 == 0 || *eax_9 == 0)
label_6fa6f7:
    
    if ((*(*arg1 + 0x20))(arg2, arg3, arg4, edi, esi).b == 0)
        result.b = 0
    else
        *arg5 = esi
        result.b = 1
else
    int32_t var_78_1 = 0
    int16_t* var_90
    sub_52e820(&var_90, u"Tex%02d")
    int32_t var_4c
    sub_6ae4c0(&var_4c, var_90)
    int32_t var_c_1 = 0
    int32_t var_34
    char* edx_1 = sub_6af1a0(&var_34)
    var_c_1.b = 1
    
    if (*(edx_1 + 0x14) u>= 0x10)
        edx_1 = *edx_1
    
    int32_t eax_12 = (*(*esi + 0xd0))(esi, edx_1, **(arg4 + 0x44))
    var_c_1.b = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    int32_t var_38
    
    if (eax_12 s>= 0)
        int32_t* eax_14 = *(arg4 + 0x44)
        void* eax_15 = *(arg4 + 0x48)
        void* var_78_5 = eax_15
        
        if (eax_15 != 0)
            *(eax_15 + 4)
            *(eax_15 + 4) += 1
        
        sub_6f1260(arg2, nullptr, eax_14)
        int32_t var_c_2 = 0xffffffff
        edi = 1
        
        if (var_38 u>= 8)
            j__free(var_4c)
        
        int32_t var_38_1 = 7
        int32_t var_3c_1 = 0
        var_4c.w = 0
        goto label_6fa6f7
    
    void var_8c
    void* var_58_1 = &var_8c
    var_90 = u"SetTexture"
    sub_52e820(&var_8c, var_90)
    var_c_1.b = 2
    void var_a4
    int16_t* eax_13
    int32_t edx_2
    eax_13, edx_2 = sub_52e820(&var_a4, &data_b07d94)
    var_c_1.b = 0
    sub_6f1ae0(eax_13, edx_2, eax_12)
    
    if (var_38 u>= 8)
        j__free(var_4c)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_64)
return result
