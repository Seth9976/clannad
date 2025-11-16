// 函数: sub_100066c0
// 地址: 0x100066c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t eax = data_1001c4e4

if (eax == 0)
    eax = 0x200
    data_1001c4e4 = eax
else if (eax s< 0x14)
    eax = 0x14
    data_1001c4e4 = eax

int32_t eax_1 = sub_10004212(eax, 4)
data_1001c4e0 = eax_1

if (eax_1 == 0)
    data_1001c4e4 = 0x14
    eax_1 = sub_10004212(0x14, 4)
    data_1001c4e0 = eax_1
    
    if (eax_1 == 0)
        return 0x1a

void*** edx = nullptr
void** ecx_2 = &data_10017440

while (true)
    *(edx + eax_1) = ecx_2
    ecx_2 = &ecx_2[8]
    edx = &edx[1]
    
    if (ecx_2 s>= 0x100176c0)
        break
    
    eax_1 = data_1001c4e0

return 0
