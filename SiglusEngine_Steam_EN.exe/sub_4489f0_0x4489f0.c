// 函数: sub_4489f0
// 地址: 0x4489f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result = data_1af4510
int32_t ecx = 0
data_1af450c = 0

if (result != 0xffffffff)
    int32_t var_20_1 = result + 0x61
    void rootPathName
    sub_4c84d0(&rootPathName, "%c:\")
    result = GetDriveTypeA(&rootPathName)
    
    if (result != 5)
        ecx = data_1af450c
    else
        result = sub_4c3b10(data_1af4510)
        ecx = data_1af450c
        
        if (result != 0)
            ecx = 1
        
        data_1af450c = ecx

if (data_702fc0 != 0 && ecx == 0)
    result = sub_4c3da0(result, 0, "BonusCD.env", 0xffffffff)
    int32_t ecx_2 = data_1af450c
    
    if (result == 1)
        ecx_2 = 2
    
    data_1af450c = ecx_2

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
