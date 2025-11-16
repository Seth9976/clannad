// 函数: sub_49c2b0
// 地址: 0x49c2b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t* esi = &data_8d02c4

do
    int32_t j = 0
    int32_t* eax_1 = esi
    
    do
        if (eax_1[-4] != 0 && (eax_1[-2] == 0 || *eax_1 != 0))
            return 1
        
        j += 1
        eax_1 = &eax_1[0xb20]
    while (j s< 2)
    
    i += 1
    esi = &esi[0x1640]
while (i s< 8)

return 0
