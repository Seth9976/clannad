// 函数: sub_54d690
// 地址: 0x54d690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t* esi = data_20c2460
int32_t i = 0

if (data_1321eb8 s<= 0)
    return 

int32_t* ebx_1 = data_1321ec0 + 0x20

do
    *esi = 0xffffffff
    int32_t edx_1 = *ebx_1
    
    if (edx_1 != 0xffffffff)
        int32_t ecx = 0
        
        if (data_12dc4bc != 0)
            ecx = 0x1a
        
        if (sub_4e76e0(&var_8, edx_1, ecx + 0x19, &var_8, &data_704898) != 0)
            *esi = var_8
    
    i += 1
    ebx_1 = &ebx_1[0xf]
    esi = &esi[1]
while (i s< data_1321eb8)
