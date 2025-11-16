// 函数: sub_6b50c0
// 地址: 0x6b50c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cafa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_26c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_258 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
int16_t* var_25c = arg1
*arg1 = 0
int32_t var_8_1 = 0
int32_t ebx
ebx.b = 0
int32_t* ppv = nullptr
int32_t var_258_1 = 1
HRESULT eax_3 = CoCreateInstance(&data_ad014c, 0, CLSCTX_INPROC_SERVER, &data_ad013c, &ppv)

if (eax_3 s>= 0 && eax_3 != 0x1)
    int32_t* ppv_1 = ppv
    int32_t* var_254
    int32_t eax_4 = (**ppv_1)(ppv_1, 0xad015c, &var_254)
    
    if (eax_4 s>= 0 && eax_4 != 1)
        int32_t* var_24c
        sub_6adbd0(&var_24c, arg2)
        int32_t var_8_2 = 1
        int32_t* edx_1 = &var_24c
        int32_t* eax_5 = var_254
        int32_t var_238
        
        if (var_238 u>= 8)
            edx_1 = var_24c
        
        int32_t eax_6 = (*(*eax_5 + 0x14))(eax_5, edx_1, 0)
        
        if (eax_6 s>= 0 && eax_6 != 1)
            int32_t* ppv_2 = ppv
            int32_t eax_7 = (*(*ppv_2 + 0x4c))(ppv_2, 0, 2)
            
            if (eax_7 s>= 0 && eax_7 != 1)
                int32_t* ppv_3 = ppv
                int16_t var_21c
                int32_t eax_8 = (*(*ppv_3 + 0xc))(ppv_3, &var_21c, 0x104, 0, 0)
                
                if (eax_8 s>= 0 && eax_8 != 1)
                    int32_t var_220_1 = 7
                    int32_t var_224_1 = 0
                    int16_t var_234 = 0
                    int32_t ecx_5
                    
                    if (var_21c != 0)
                        int16_t* ecx_6 = &var_21c
                        int16_t i
                        
                        do
                            i = *ecx_6
                            ecx_6 = &ecx_6[1]
                        while (i != 0)
                        void var_21a
                        ecx_5 = (ecx_6 - &var_21a) s>> 1
                    else
                        ecx_5 = 0
                    
                    sub_52e720(&var_234, &var_21c, ecx_5)
                    var_8_2.b = 2
                    
                    if (arg1 != &var_234)
                        sub_52e3c0(arg1, &var_234, 0, 0xffffffff)
                    
                    var_8_2.b = 1
                    sub_52e8a0(&var_234)
                    ebx.b = 1
        
        int32_t* eax_9 = var_254
        (*(*eax_9 + 8))(eax_9)
        var_8_2.b = 0
        sub_52e8a0(&var_24c)
    
    int32_t* ppv_4 = ppv
    (*(*ppv_4 + 8))(ppv_4)

if ((eax_3 s< 0 || eax_3 == 0x1 || ebx.b == 0) && arg1 != arg2)
    sub_52e3c0(arg1, arg2, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
