// 函数: sub_417ce0
// 地址: 0x417ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_1320e88 = 0
int32_t edx = 0
data_1320e8c = 0
void* i = &data_1320e94
data_1320e90 = 0
int32_t j

do
    for (j = 0; j s< 0x40; j += 1)
        if (edx != j || i s>= 0x1321694)
            *(i + j) = 0
        else
            *(i + j) = 1
    
    i += 0x40
    edx += 1
while (i s< &data_1321e94)

return j
