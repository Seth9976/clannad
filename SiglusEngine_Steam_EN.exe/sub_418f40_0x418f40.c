// 函数: sub_418f40
// 地址: 0x418f40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (data_1321ebc == 0)
    return 0

int32_t result = 0
int32_t i = 0

if (data_1321eb8 s> 0)
    int32_t* edi_1 = data_1321ec0 + 0x20
    
    do
        int32_t ecx = 0
        
        if (data_12dc4bc != 0)
            ecx = 0x1a
        
        if (sub_4e76e0(&var_8, *edi_1, ecx + 0x19, &var_8, &data_704898) != 0 && var_8 != 0)
            result += 1
        
        i += 1
        edi_1 = &edi_1[0xf]
    while (i s< data_1321eb8)

return result
