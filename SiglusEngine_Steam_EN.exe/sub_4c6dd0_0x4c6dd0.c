// 函数: sub_4c6dd0
// 地址: 0x4c6dd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
void* esi = data_1c04200

if (esi s< 8)
    esi = 8
else if (esi s> 0x100)
    esi = 0x100

int32_t i
char ecx_1
i, ecx_1 = sub_4c6c70()

if (i != 0)
    char ecx_2 = ecx_1
    
    do
        int32_t var_14_1 = 1
        i = sub_4c5f40(i, esi, &data_1af44a4, data_131d2c8, data_1af44a0, data_1af449c, ecx_2)
        
        if (i == 0)
            break
        
        i, ecx_2 = sub_4c6c70()
    while (i != 0)

return i
