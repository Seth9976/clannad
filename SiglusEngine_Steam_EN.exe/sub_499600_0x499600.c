// 函数: sub_499600
// 地址: 0x499600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1[1]

if (edi == 0)
    return 

int32_t eax_1 = arg1[7]

if (eax_1 != 0xffffffff)
    int32_t* ecx = eax_1 * 0x2c
    arg1[0xb] = *(ecx + edi)
    arg1[0xc] = *(ecx + edi + 4)
    arg1[0xd] = *(ecx + edi + 8)
    arg1[0xe] = *(ecx + edi + 0xc)
    arg1[0xa] = 1

int32_t i = 0

if (arg1[2] s> 0)
    void* edi_1 = edi + 0x20
    
    do
        sub_4d6c40(edi_1, edi_1 + 4)
        i += 1
        edi_1 += 0x2c
    while (i s< arg1[2])

sub_4d6c40(arg1, &arg1[1])
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0xffffffff
arg1[5] = 0
arg1[7] = 0xffffffff
