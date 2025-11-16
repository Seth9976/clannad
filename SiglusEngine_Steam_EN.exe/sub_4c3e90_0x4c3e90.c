// 函数: sub_4c3e90
// 地址: 0x4c3e90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void newFileName
int32_t eax_1 = __security_cookie ^ &newFileName
int32_t var_c = eax_1

if (arg1 != 0 && arg2 != 0)
    eax_1 = sub_4c3da0(eax_1, 4, arg1, 0x1e)
    
    if (eax_1 != 0 && sub_4c3da0(eax_1, 4, arg2, 0x1e) == 0)
        void existingFileName
        sub_4c36f0(&existingFileName, 4, arg1, 0x1e, &existingFileName)
        sub_4c36f0(&newFileName, 4, arg2, 0x1e, &newFileName)
        MoveFileA(&existingFileName, &newFileName)
        BOOL eax_4
        eax_4.b = 1
        sub_5f02dd(var_c ^ &newFileName)
        return eax_4

eax_1.b = 0
sub_5f02dd(var_c ^ &newFileName)
return eax_1
