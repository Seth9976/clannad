// 函数: sub_4497c0
// 地址: 0x4497c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_228 = 0x1350bb0
char* var_22c = &data_1352000
char rootPathName_1
char* result = sub_4c84d0(&rootPathName_1, "%s\%s")
data_1af44d0 = 0xffffffff

if (data_12dc4c4 != 0)
    char rootPathName = rootPathName_1
    char var_223
    char var_17_1 = var_223
    int16_t var_16_1 = 0x5c
    uint32_t eax_4
    int32_t ecx_1
    eax_4, ecx_1 = GetDriveTypeA(&rootPathName)
    
    if (eax_4 == 5)
        ecx_1 = 0x41 - zx.d(rootPathName)
        data_1af44d0 = ecx_1
    
    int32_t var_228_3
    
    if (data_1333e08 != 0)
        var_228_3 = ecx_1
        result = sub_4c41e0()
    else
        int32_t var_228_2 = ecx_1
        result, ecx_1 =
            sub_4c3da0(sub_4c39b0(&rootPathName_1), 0xffffffff, &rootPathName_1, 0xffffffff)
        
        if (result == 2)
            data_1333e08 = result
            var_228_3 = ecx_1
            result = sub_4c41e0()
        else if (data_1333e08 != 0)
            var_228_3 = ecx_1
            result = sub_4c41e0()

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
