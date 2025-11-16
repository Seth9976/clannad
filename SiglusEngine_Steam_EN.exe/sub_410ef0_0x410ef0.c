// 函数: sub_410ef0
// 地址: 0x410ef0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_4d6c40(&data_702fd8, &data_702fd4)
bool cond:0 = data_702fc0 != 0
data_702fd8 = 0
data_702fd4 = 0
data_702fd0 = 0
data_63ecd0 = 0
data_63ed38 = 0
data_63eda0 = 0
data_63ee08 = 0
data_63ee70 = 0

if (not(cond:0))
    return eax

int32_t* eax_1 = data_134ce68
int32_t ecx = 0
int32_t esi = data_134ce60

if (esi s> 0)
    do
        int32_t edx_1 = eax_1[1]
        
        if (edx_1 s> 0 && *((edx_1 << 2) + &data_610fb0) == 3)
            *eax_1 = 1
            esi = data_134ce60
        
        ecx += 1
        eax_1 = &eax_1[8]
    while (ecx s< esi)

return eax_1
