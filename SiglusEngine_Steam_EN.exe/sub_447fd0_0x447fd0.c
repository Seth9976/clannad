// 函数: sub_447fd0
// 地址: 0x447fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1af4538
int32_t eax = data_1313c94
data_1af4534 = 0
data_1af4530 = 0xffffffff

if (ecx == 0xffffffff)
    ecx = data_1333dec
    
    if (ecx != 0xffffffff)
        data_1af4530 = 0
        data_1af4534 = ecx
    else if (eax == 0xffffffff)
        ecx = data_108fea0.d
        
        if (ecx != 0xffffffff)
            data_1af4530 = 2
            data_1af4534 = ecx
    else
        data_1af4534 = eax
        data_1af4530 = 1
else
    data_1af4530 = 3
    data_1af4534 = ecx

int32_t ecx_1 = data_1af453c
data_1af452c = 0
data_1af4528 = 0xffffffff

if (ecx_1 != 0xffffffff)
    data_1af452c = ecx_1
    data_1af4528 = 3
    return eax

int32_t ecx_2 = data_1333df0

if (ecx_2 != 0xffffffff)
    data_1af452c = ecx_2
    data_1af4528 = 0
    return eax

if (eax != 0xffffffff)
    int32_t eax_1 = data_1313c98
    data_1af4528 = 1
    data_1af452c = eax_1
    return eax_1

int32_t eax_2 = data_108fea0:4

if (eax_2 != 0xffffffff)
    data_1af4528 = 2
    data_1af452c = eax_2

return eax_2
