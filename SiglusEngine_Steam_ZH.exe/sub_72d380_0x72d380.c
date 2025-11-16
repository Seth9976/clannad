// 函数: sub_72d380
// 地址: 0x72d380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
void* ebx = arg1[1]

if (esi s< 0 || esi s>= 2)
    *(*arg1 + 0x14) = 0xf
    *(*arg1 + 0x18) = esi
    (**arg1)(arg1)

if (esi == 1)
    for (void* i = *(ebx + 0x44); i != 0; i = *(i + 0x24))
        if (*(i + 0x22) != 0)
            *(i + 0x22) = 0
            (*(i + 0x30))(arg1, i + 0x28)
    
    void* i_1 = *(ebx + 0x48)
    *(ebx + 0x44) = 0
    
    for (; i_1 != 0; i_1 = *(i_1 + 0x24))
        if (*(i_1 + 0x22) != 0)
            *(i_1 + 0x22) = 0
            (*(i_1 + 0x30))(arg1, i_1 + 0x28)
    
    esi = arg2
    *(ebx + 0x48) = 0

int32_t* i_4 = *(ebx + (esi << 2) + 0x3c)
*(ebx + (esi << 2) + 0x3c) = 0

if (i_4 != 0)
    int32_t* i_2
    
    do
        i_2 = *i_4
        int32_t esi_3 = i_4[1] + 0x10 + i_4[2]
        _free(i_4)
        *(ebx + 0x4c) -= esi_3
        i_4 = i_2
    while (i_2 != 0)
    esi = arg2

int32_t* i_5 = *(ebx + (esi << 2) + 0x34)
*(ebx + (esi << 2) + 0x34) = 0

if (i_5 == 0)
    return 

int32_t* i_3

do
    i_3 = *i_5
    int32_t esi_6 = i_5[1] + 0x10 + i_5[2]
    _free(i_5)
    *(ebx + 0x4c) -= esi_6
    i_5 = i_3
while (i_3 != 0)
