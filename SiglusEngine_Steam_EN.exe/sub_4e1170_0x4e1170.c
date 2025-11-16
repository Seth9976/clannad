// 函数: sub_4e1170
// 地址: 0x4e1170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* result = arg2

if (result != 0)
    int32_t* i = nullptr
    int32_t* i_2 = nullptr
    int16_t* result_1 = result
    int32_t var_8_1 = 0
    
    do
        result.w = *result_1
        result_1 = &result_1[1]
    while (result.w != 0)
    
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(((result_1 - &result_1[1]) s>> 1) + 1)
    int32_t cbMultiByte = eax_4 * 2
    int32_t edx_4 = adc.d(edx_2 << 1 | eax_4 u>> 0xffffffe1, 0, cbMultiByte u>= 0x80000000)
    int32_t var_20_1 = edx_4
    int32_t lpMultiByteStr_1
    int32_t* lpMultiByteStr
    
    if (edx_4 == 0 && cbMultiByte - 0x80000000 u<= 0xffffffff)
        char eax_6
        
        if (cbMultiByte s<= 0x400)
            eax_6 = sub_4d9150(cbMultiByte)
        
        if (cbMultiByte s> 0x400 || eax_6 == 0)
            lpMultiByteStr_1 = sub_4ded10(&i_2, cbMultiByte)
            i = i_2
            lpMultiByteStr = lpMultiByteStr_1
        else
            __alloca_probe_16(cbMultiByte)
            lpMultiByteStr = &var_34
    
    void* edx_8
    
    if (edx_4 != 0 || cbMultiByte - 0x80000000 u> 0xffffffff || lpMultiByteStr == 0)
        edx_8 = nullptr
    else
        *lpMultiByteStr = 0
        lpMultiByteStr_1 = WideCharToMultiByte(3, 0, arg2, 0xffffffff, lpMultiByteStr, cbMultiByte, 
            nullptr, nullptr)
        int32_t edx_6 = neg.d(lpMultiByteStr_1)
        edx_8 = sbb.d(edx_6, edx_6, lpMultiByteStr_1 != 0) & lpMultiByteStr
    
    int16_t* result_2
    
    if (edx_8 != 0)
        char* ecx_4 = edx_8
        
        do
            lpMultiByteStr_1.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (lpMultiByteStr_1.b != 0)
        
        result_2 = sub_4e10d0(arg1, edx_8, ecx_4 - &ecx_4[1])
    else
        result_2 = nullptr
    
    while (i != 0)
        int32_t* i_1 = i
        i = *i
        _free(i_1)
    
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
