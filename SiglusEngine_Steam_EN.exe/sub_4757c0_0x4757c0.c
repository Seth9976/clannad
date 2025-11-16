// 函数: sub_4757c0
// 地址: 0x4757c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
void* eax

if (arg1 == 0)
    sub_4d1c30(eax, &data_72d6b0, 0x1cd6420, 0x194000)
    return 

void* edi = &data_72d6b0
int32_t i_1 = 0
int32_t ebx = 0x1cd6420

if (data_7031bc s<= 0)
    return 

int32_t i

do
    for (int32_t j = 0; j s< 2; )
        eax = sub_4d1be0(eax, edi, ebx, 0x650)
        
        if (eax != 0)
            eax = ((j + (i_1 << 1)) << 4) + &data_20d19d0
            *eax += 1
        
        j += 1
        edi += 0x650
        ebx += 0x650
    
    i = i_1 + 1
    i_1 = i
while (i s< data_7031bc)
