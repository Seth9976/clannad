// 函数: sub_422630
// 地址: 0x422630
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_13126fc
int32_t var_24 = 1
void* eax_1 = data_13126e8
int32_t ecx
sub_4c6e40(eax_1, eax_1, ecx, 0xffffffff, 0xffffffff, 0xffffffff)
int32_t eax_2 = data_13126f0
int32_t i = 0
int32_t esi = data_13701b0
int32_t result = data_13126f8

if (data_13126e0 s<= 0)
    data_131262c += 1
    data_1312720 = 0
    return result

do
    int32_t* edi_1 = *(data_13701cc + (esi << 3) + 4)
    int32_t edx_1 = edi_1[7]
    int32_t eax_6
    
    if (edx_1 - eax s< data_13126dc - 1)
        eax_6 = edi_1[8]
    
    if (edx_1 - eax s>= data_13126dc - 1 || eax_6 - eax s< 0)
        sub_4d6c40(&edi_1[0x11], &edi_1[0x12])
    else if (edi_1[0x12] == 0)
        int32_t var_34_1 = edx_1
        edx_1.b = 1
        sub_421950(eax_6 - eax, edx_1.b, edi_1, eax_2, edi_1[9], var_34_1, 0xffffffff, result, 
            eax_1, 0)
    
    esi += 1
    
    if (esi == 0x3e8)
        esi = 0
    
    i += 1
while (i s< data_13126e0)

data_1312720 = 0
data_131262c += 1
return 0
