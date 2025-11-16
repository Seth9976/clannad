// 函数: sub_4d8230
// 地址: 0x4d8230
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HBRUSH result = data_1332b5c
int32_t ebx = data_1332b58
HBRUSH result_1 = result

if (data_1c0529d != 0 || data_1321ec8 != 0 || data_1332b3c != 0 || data_1af0f24 != 0
        || data_1332b38 != 0 || data_1af0f20 != 0 || data_1332b34 != 0 || data_1af0f30 != 0
        || data_1b8a71c == 0x3e7)
    result = CreateSolidBrush(0)
    
    if (result != 0)
        RECT lprc
        lprc.right = result_1
        lprc.left = 0
        lprc.top = 0
        lprc.bottom = ebx
        FillRect(arg1, &lprc, result)
        result = DeleteObject(result)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
