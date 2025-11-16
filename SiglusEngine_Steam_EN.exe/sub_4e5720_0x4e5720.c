// 函数: sub_4e5720
// 地址: 0x4e5720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1c051b8 == 0)
    return 

uint32_t eax_1 = timeGetTime()
int32_t edx_1 = data_1c051b8
int32_t eax_2 = eax_1 - edx_1

if (data_1c051b4 == 0 && eax_2 u>= 0x3e8)
    data_1c051b4 = 1
    data_703008 = 1

int32_t ecx_1 = data_1c051b0

if (ecx_1 == 0)
    if (eax_2 u>= 0x7d0)
        ecx_1 = 1
    
    data_1c051b0 = ecx_1

if (data_1c051ac == 0 && eax_2 u>= 0xbb8)
    data_1c051ac = 1
    data_703008 = 1

data_1c051b8 = sbb.d(eax_2, eax_2, eax_2 u< 0x2710) & edx_1
