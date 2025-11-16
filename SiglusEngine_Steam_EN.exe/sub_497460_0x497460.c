// 函数: sub_497460
// 地址: 0x497460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result

if (arg1 u<= 0x100 && arg2 u<= 0x100 && arg1 != arg2)
    int32_t var_230_1 = arg2
    char var_214[0x20c]
    sub_4c3e40(sub_4c84d0(&var_214, "save%03d.sav"), 4, &var_214, 0x1e)
    int32_t var_218 = 0
    BOOL var_21c = 0
    int32_t var_230_2 = arg1
    sub_4c84d0(&var_214, "save%03d.sav")
    result = sub_4c4810(&var_21c, &var_218, &var_214, &var_21c, "AvgSaveDataCopy", 4, 0x1e)
    
    if (var_218 != 0)
        BOOL esi_1 = var_21c
        int32_t var_230_3 = arg2
        *(esi_1 + 0x18) += 1
        
        if (sub_496120(sub_4c84d0(&var_214, "save%03d.sav"), esi_1, &var_214, result) != 0)
            sub_4953a0(arg1, arg2)
            void* eax_5 = arg2 * 0x7e8
            *(eax_5 + 0x1ff4ce8) += 1
        
        result = sub_4d6c40(&var_218, &var_21c)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
