// 函数: sub_543b90
// 地址: 0x543b90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
void* i = &data_1301618
data_20c1640 = 0
int32_t edx = 0

do
    if (*i != 0)
        *((result << 2) + &data_20c1540) = edx
        result += 1
    
    i += 0x11
    edx += 1
while (i s< &data_1301a58)

data_20c1640 = result

if (result == 0)
    return result

return DialogBoxParamA(data_134cebc, 0x169, data_7027bc, sub_543ab0, 0)
