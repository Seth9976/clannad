// 函数: sub_4dbfe0
// 地址: 0x4dbfe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = 1
int32_t* edi = *(arg1 + 0x34)
int32_t result_1 = 1

if (edi != 0)
    wchar16 var_88[0x40]
    StringFromGUID2(arg3, &var_88, 0x40)
    BSTR bstrString = SysAllocString(&var_88)
    
    if (bstrString == 0)
        sub_4d9320(0x8007000e)
        noreturn
    
    (*(*edi + 0x40))(edi, *arg2, arg2[1], arg2[2], arg2[3], bstrString, arg4, &result_1)
    SysFreeString(bstrString)
    result = result_1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
