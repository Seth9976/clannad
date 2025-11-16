// 函数: sub_6703f0
// 地址: 0x6703f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6931
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t eax_3 = *edi
*arg1 = eax_3

if (eax_3 - 1 u<= 5)
    switch (eax_3)
        case 1
            int32_t eax_4
            eax_4.b = edi[2].b
            arg1[2].b = eax_4.b
        case 2
            arg1[2] = edi[2]
        case 3
            *(arg1 + 8) = *(edi + 8)
        case 4
            int32_t* eax_6 = sub_745f3f(0x18)
            arg2 = eax_6
            int32_t var_8_1 = 0
            
            if (eax_6 == 0)
                arg1[2] = 0
            else
                arg1[2] = sub_670320(eax_6, edi[2])
        case 5
            int32_t* eax_8 = sub_745f3f(0xc)
            arg2 = eax_8
            int32_t var_8_2 = 1
            
            if (eax_8 == 0)
                arg1[2] = 0
            else
                arg1[2] = sub_670350(eax_8, edi[2])
        case 6
            int32_t* eax_10
            int32_t ecx_2
            eax_10, ecx_2 = sub_745f3f(8)
            int32_t* ebx_1 = eax_10
            arg2 = ebx_1
            int32_t var_8_3 = 2
            
            if (ebx_1 == 0)
                ebx_1 = nullptr
            else
                int32_t var_24_3 = ecx_2
                sub_670700(ebx_1, edi[2])
            
            arg1[2] = ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
