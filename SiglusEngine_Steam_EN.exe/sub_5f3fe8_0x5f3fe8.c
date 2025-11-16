// 函数: sub_5f3fe8
// 地址: 0x5f3fe8
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_20f44e4

if (eax == 0)
    eax = 0x200
    data_20f44e4 = eax
else if (eax s< 0x14)
    eax = 0x14
    data_20f44e4 = eax

int32_t eax_1 = sub_5f6a6e(eax, 4)
data_20f44e0 = eax_1

if (eax_1 == 0)
    data_20f44e4 = 0x14
    eax_1 = sub_5f6a6e(0x14, 4)
    data_20f44e0 = eax_1
    
    if (eax_1 == 0)
        return 0x1a

void*** edx = nullptr
void** ecx_2 = &data_63bab0

while (true)
    *(edx + eax_1) = ecx_2
    ecx_2 = &ecx_2[8]
    edx = &edx[1]
    
    if (ecx_2 s>= 0x63bd30)
        break
    
    eax_1 = data_20f44e0

return 0
