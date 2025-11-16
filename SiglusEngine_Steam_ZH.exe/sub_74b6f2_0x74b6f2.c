// 函数: sub_74b6f2
// 地址: 0x74b6f2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_4ece2e4

if (eax == 0)
    eax = 0x200
    data_4ece2e4 = eax
else if (eax s< 0x14)
    eax = 0x14
    data_4ece2e4 = eax

int32_t eax_1 = sub_74cccf(eax, 4)
data_4ece2e0 = eax_1

if (eax_1 == 0)
    data_4ece2e4 = 0x14
    eax_1 = sub_74cccf(0x14, 4)
    data_4ece2e0 = eax_1
    
    if (eax_1 == 0)
        return 0x1a

void*** edx = nullptr
void** ecx_2 = &data_b4c1f0

while (true)
    *(edx + eax_1) = ecx_2
    ecx_2 = &ecx_2[8]
    edx = &edx[1]
    
    if (ecx_2 s>= &data_b4c470)
        break
    
    eax_1 = data_4ece2e0

return 0
