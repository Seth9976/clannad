// 函数: sub_420f30
// 地址: 0x420f30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_13125b4 == 0)
    return 

int32_t ecx_1 = data_13126d0
int32_t eax_1 = data_13126d8
int32_t edx_1 = data_13126d4
data_131261c = ecx_1
data_1312620 = edx_1
data_1312624 = eax_1 + ecx_1 - 1
int32_t* eax_4 = data_13126dc + edx_1 - 1
data_1312628 = eax_4
int32_t* eax
int32_t ecx_3
eax, ecx_3 = sub_41cd30(eax_4, 0x1312644, 0x13125b8, nullptr, nullptr)

for (void* i = &data_13127dc; i s< &data_13130bc; i += 0x11c)
    int32_t* edi_1 = *(i - 4)
    
    if (edi_1 u<= 0x1ff)
        eax = sub_425430(edi_1, 1)
        
        if (*(edi_1 * 0x74 + 0x13747b0) != 0)
            eax = sub_427c30(edi_1 * 0x74 + 0x13747b0, i)
    
    eax = sub_41cd30(eax, i + 0x8c, i, nullptr, nullptr)
